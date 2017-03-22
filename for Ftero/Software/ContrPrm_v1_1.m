clear all
close all
% clc

%% Sampling times 

Ts_005ms=5e-5;                                  % 0.05 ms sampling time
Ts_01ms=1e-4;                                   % 0.1 ms sampling time
Ts_1ms=1e-3;                                    % 1 ms sampling time
Ts_10ms=1e-2;                                   % 10 ms sampling time
Ts_20ms=2e-2;                                   % 20 ms sampling time
Ts_40ms=4e-2;                                   % 40 ms sampling time
Ts_50ms=5e-2;                                   % 50 ms sampling time
Ts_100ms=1e-1;                                  % 100 ms sampling time
Ts_1s=1;                                        % 1 s sampling time
Ts_main=Ts_1ms;                                 % Fundamental sampling time

%% Auxiliary Variables and System Parameters

s=tf('s');
rev2rad=2*pi;
AOsat = 10; % V maximum absolute value of analog outputs

% Slide motor
beta_Sl=0.0675;
Jm_Sl=0.0921;

SlCurMult=2;
SlCurPeak=9*SlCurMult;
SlKmot=13/9;
SlRevMax=3.8;
SlVoltMax=10;
SlDrumRad=0.1;

% Winch motor
% beta_Winch=0.00001;
% Jm_Winch=0.1377009;
beta_Winch          = 0.0411;
Jm_Winch            = 0.0885;
WinchVoltMax        = 10;
WinchDrumRad        = 0.1;
WinchCurMult        = 1;
WinchCurPeak        = 9*WinchCurMult;
WinchKmot           = 13/9;
WinchTravelMin_m    = -2;
WinchTravelMax_m    = 150;
WinchTravel_m       = WinchTravelMax_m-WinchTravelMin_m;
WinchRevMax         = WinchTravel_m/WinchDrumRad/rev2rad/2;    % gain between voltage measurement and revolutions is half the total travel 
WinchRefSpdSup      = 15/WinchDrumRad;   % Maximum magnitude of the reference speed (for voltage signal conversion) NB needs to match with drive software!
%% Inputs conditioning 

% Joystick conditioning
JoyS_ofst=-2.5;                                 % Joystick Slide axis pre-gain offset
JoyW_ofst=-2.5;                                 % Joystick Winch axis pre-gain offset
JoyS_gain=5;                                    % Joystick Slide axis gain
JoyW_gain=-5;                                   % Joystick Winch axis gain
JoyS_sat=9.2;                                   % Joystick Slide axis saturation value
JoyW_sat=10;                                    % Joystick Winch axis saturation value
lowpassfreq=10*2*pi;                            % Joystick inputs lowpass filter frequency (rad/s)

JoyFilt=(1/(s/lowpassfreq+1))^2;
JoyFilt_d=c2d(JoyFilt,Ts_1ms,'tustin');
[JoyFiltNum,JoyFiltDen]=...
    tfdata(JoyFilt_d,'v');                      % Joystick inputs lowpass filter num. and den. coeff.

% Slide motor feedback conditioning and speed estimation - low pass filter and Luenberger Observer
SlMotPosAIgain      =   SlRevMax/SlVoltMax*rev2rad;     % Volt to rad
SlMotOutAOgain      =   SlCurPeak/SlVoltMax*SlKmot;     % Volt to Nm

Amatr_Sl=eye(2)+Ts_1ms*[0 1;0 -beta_Sl/Jm_Sl];
Bmatr_Sl=[0;Ts_1ms/Jm_Sl];
Cmatr_Sl=[1 0];
L_Sl=place(Amatr_Sl',Cmatr_Sl',[.98 .97])';
Afilt_Sl=(Amatr_Sl-L_Sl*Cmatr_Sl);
Bfilt_Sl=[L_Sl Bmatr_Sl];
Cfilt_Sl=eye(2);
Dfilt_Sl=zeros(2);
x0_Sl=[0;0];

lowpassfreq=100;                                % Motor inputs lowpass filter frequency (rad/s)
MotFilt=(1/(s/lowpassfreq+1))^2;
MotFilt_d=c2d(MotFilt,Ts_1ms,'tustin');
[SlidePosFiltNum,SlidePosFiltDen]=...
    tfdata(MotFilt_d,'v');                      % Slide Motor position lowpass filter num. and den. coeff.

lowpassfreq=100;                                % Motor inputs lowpass filter frequency (rad/s)
MotFilt=(1/(s/lowpassfreq+1))^2;
MotFilt_d=c2d(MotFilt,Ts_1ms,'tustin');
[SlideSpdEstFiltNum,SlideSpdEstFiltDen]=...
    tfdata(MotFilt_d,'v');                      % Winch Motor speed estimate lowpass filter num. and den. coeff.

Kpos    =   14;
Kspd    =   2.5;
SlideMotTorqueMax = 26;

% Winch motor feedback conditioning and speed estimation - low pass filter and Luenberger Observer
WinchMotPosAIgain      =   WinchRevMax/WinchVoltMax*rev2rad;        % Volt to rad
WinchMotOutAOgain      =   WinchCurPeak/WinchVoltMax*WinchKmot;     % Volt to Nm

Amatr_Winch=eye(2)+Ts_1ms*[0 1;0 -beta_Winch/Jm_Winch];
Bmatr_Winch=[0;Ts_1ms/Jm_Winch];
Cmatr_Winch=[1 0];
L_Winch=place(Amatr_Winch',Cmatr_Winch',[.98 .97])';
Afilt_Winch=(Amatr_Winch-L_Winch*Cmatr_Winch);
Bfilt_Winch=[L_Winch Bmatr_Winch];
Cfilt_Winch=eye(2);
Dfilt_Winch=zeros(2);
x0_Winch=[0;0];

lowpassfreq=100;                                % Motor inputs lowpass filter frequency (rad/s)
MotFilt=(1/(s/lowpassfreq+1))^2;
MotFilt_d=c2d(MotFilt,Ts_1ms,'tustin');
[WinchPosFiltNum,WinchPosFiltDen]=...
    tfdata(MotFilt_d,'v');                      % Winch Motor position lowpass filter num. and den. coeff.

lowpassfreq=100;                                % Motor inputs lowpass filter frequency (rad/s)
MotFilt=(1/(s/lowpassfreq+1))^2;
MotFilt_d=c2d(MotFilt,Ts_1ms,'tustin');
[WinchSpdEstFiltNum,WinchSpdEstFiltDen]=...
    tfdata(MotFilt_d,'v');                      % Winch Motor speed estimate lowpass filter num. and den. coeff.

KspdWinch    =   1;
WinchMotTorqueMax = 13;


% Potentiometer conditioning
Pot_ofst    =   -0.0558;                        % Potentiometer after-gain offset (m)
PotMax      =   0.4;                            % Potentiometer max travel (m)
Pot_gain    =   PotMax/5;                       % Potentiometer gain (m/V)
lowpassfreq =   500;                            % Potentiometer inputs lowpass filter frequency (rad/s)
PotFilt=(1/(s/lowpassfreq+1))^2;
PotFilt_d=c2d(PotFilt,Ts_1ms,'tustin');
[PotPosFiltNum,PotPosFiltDen]=...
    tfdata(PotFilt_d,'v');                      % Potentiometer position lowpass filter num. and den. coeff.
Pot_max     =   PotMax;
Pot_min     =   0;  

NPotSpdEst  =   3;

%% High level control - slide motor for takeoff
TakeoffTravel_m                         =   3.7;  % Total desired takeoff travel in m (max=4.2m)
JogSpeed_m_s                            =   0.5; % m/s speed during preparation and homing
TakeOffSpeed_m_s                        =   100; % m/s reference position rate during takeoff
ErrTol_m                                =   0.3; % m maximum position error to start and finish takeoff maneuver
% LandingTravel_m                         =   3.8;
LandingLength_m                         =   30;
LandingSpeed_m_s                        =   6; % m/s reference position rate during landing

HLC_Param.Slide.TakeoffTravel_V         =   TakeoffTravel_m/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax;
HLC_Param.Slide.SlideTravelMax_V        =   JoyS_sat;   % Maximum half-travel of slide
HLC_Param.Slide.SlideTravelMax_rad      =   HLC_Param.Slide.SlideTravelMax_V/SlVoltMax*SlRevMax*2*pi;
HLC_Param.Slide.JogSpeed                =   JogSpeed_m_s/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax; 
HLC_Param.Slide.TakeOffSpeed            =   TakeOffSpeed_m_s/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax; 
HLC_Param.Slide.ErrTol                  =   ErrTol_m/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax;
HLC_Param.Slide.WaitTime                =   1;  % Minimum waiting time before takeoff, after preparation
HLC_Param.Slide.LandingLength_rad       =   LandingLength_m/SlDrumRad;
% HLC_Param.Slide.LandingTravel_rad       =   LandingTravel_m/SlDrumRad;
% HLC_Param.Slide.LandingTravel_V         =   LandingTravel_m/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax;
% HLC_Param.Slide.LandingSpeed            =   LandingSpeed_m_s/(2*pi*SlDrumRad*SlRevMax)*SlVoltMax; 

%% High level control - Winch position and speed referencse
HLC_Param.Winch.WinchSpdRefGain                     = 1/WinchDrumRad;       % V (1V=1 m/s)
HLC_Param.Winch.WinchTravelMax                      = WinchTravelMax_m/WinchDrumRad;        % Maximum travel of winch 
HLC_Param.Winch.WinchTravelMin                      = WinchTravelMin_m/WinchDrumRad;        % Minimum travel of winch
HLC_Param.Winch.WinchSpdMaxFlight                   = max(-WinchRefSpdSup,min(WinchRefSpdSup,12/WinchDrumRad));  % Maximum speed during flight
HLC_Param.Winch.WinchSpdMinFlight                   = max(-WinchRefSpdSup,min(WinchRefSpdSup,-1/WinchDrumRad));  % Minimum speed during flight (before waiting time)
HLC_Param.Winch.WinchSpeedTakeOffMult               = 1.2;
HLC_Param.Winch.WinchSpdMaxLanding                  = max(-WinchRefSpdSup,min(WinchRefSpdSup,1/WinchDrumRad));      % Maximum speed during landing
HLC_Param.Winch.WinchSpdMinLanding                  = max(-WinchRefSpdSup,min(WinchRefSpdSup,-7/WinchDrumRad));     % Minimum speed during landing
HLC_Param.Winch.WinchSpdMax                         = max(-WinchRefSpdSup,min(WinchRefSpdSup,6/WinchDrumRad));      % Maximum speed in manual control
HLC_Param.Winch.WinchSpdMin                         = max(-WinchRefSpdSup,min(WinchRefSpdSup,-6/WinchDrumRad));     % Minimum speed in manual control
HLC_Param.Winch.PotPosKeepMinFlight                 = 0.05;
HLC_Param.Winch.PotPosKeepMaxFlight                 = 0.1;
HLC_Param.Winch.PotPosKeepMinLanding                = 0.1;
HLC_Param.Winch.PotPosKeepMaxLanding                = 0.22;
HLC_Param.Winch.PotPivot2Flight                     = 0.15;
HLC_Param.Winch.PotPivot0Flight                     = 0.025;
HLC_Param.Winch.PotPivot2Landing                    = 0.27;
HLC_Param.Winch.PotPivot0Landing                    = 0.08;
% HLC_Param.Winch.WinchSpdNormFlightIn                = max(-WinchRefSpdSup,min(WinchRefSpdSup,-.15/WinchDrumRad));
HLC_Param.Winch.WinchSpdNormFlightOut               = max(-WinchRefSpdSup,min(WinchRefSpdSup,.7/WinchDrumRad));
HLC_Param.Winch.WinchSpdNormLandingIn               = max(-WinchRefSpdSup,min(WinchRefSpdSup,-3/WinchDrumRad));
HLC_Param.Winch.WinchSpdNormLandingOut              = max(-WinchRefSpdSup,min(WinchRefSpdSup,0/WinchDrumRad));
HLC_Param.Winch.WinchSpeedSlopeReelInFlight         = -10/WinchDrumRad;     
HLC_Param.Winch.WinchSpeedSlopeReelOutFlight        = 2/WinchDrumRad;     
HLC_Param.Winch.WinchSpeedSlopeReelInLanding        = -6/WinchDrumRad;                
HLC_Param.Winch.WinchSpeedSlopeReelOutLanding       = 3/WinchDrumRad; 
HLC_Param.Winch.PotPosSpdMin                        = 0.4;               % m/s deadband value for potentiometer speed to be used in derivative action
HLC_Param.Winch.DerivGain                           = 3/WinchDrumRad;    % gain for derivative action in winch controller
HLC_Param.Winch.TakeOffLatchTime                    = -0.3;              % s force maximal winch reference speed during take-off phase
HLC_Param.Winch.ReelTimer_wait                      = 2;                 % s waiting time before decreasing reel-in speed to WinchSpdMinFlight_wait
HLC_Param.Winch.WinchSpdMinFlight_wait              = max(-WinchRefSpdSup,min(WinchRefSpdSup,-1.5/WinchDrumRad));   % Minimum speed during flight (after waiting time)
HLC_Param.Winch.WinchSpeedSlopeReelInFlight_wait    = -2/WinchDrumRad;

