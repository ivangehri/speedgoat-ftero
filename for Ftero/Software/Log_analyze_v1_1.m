% clear all
close all
clc

[filename,folder] = uigetfile('*.mat');
eval(['load( ''' folder filename ''')'])


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%% Variables extraction %%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Actual time log
day=Acq_time.data(1,3);
month=Acq_time.data(1,2);
year=Acq_time.data(1,1);
hour=Acq_time.data(1,4);
minutes=Acq_time.data(1,5);

% 1 Hz log
time_1              =   Acq_100.data(:,end);        % s
GU_Lat              =   Acq_100.data(:,1);          % deg latitude (N)
GU_Lon              =   Acq_100.data(:,2);          % deg longitude (W)
GU_Alt              =   Acq_100.data(:,3);          % m altitude              
Geo_Gu_h            =   Acq_100.data(:,4);          % m latitude

% 100 Hz log
time_100            =   Acq_100.data(:,end);        % s
AI_Joy_W            =   Acq_100.data(:,1);          % V
AI_Joy_S            =   Acq_100.data(:,2);          % V
AI_mot_slide_pos    =   Acq_100.data(:,3);          % V
AI_mot_winch_pos    =   Acq_100.data(:,4);          % V
AI_PotPos           =   Acq_100.data(:,5);          % V

DI_Enable_in        =   Acq_100.data(:,6);          % Boolean
DI_WinchMode_in     =   Acq_100.data(:,7);          % Boolean
DI_Takeoff_in       =   Acq_100.data(:,8);          % Boolean
DI_Landing_in       =   Acq_100.data(:,9);          % Boolean
DI_Operator_in      =   Acq_100.data(:,10);         % Boolean
DI_GliderPres_in    =   Acq_100.data(:,11);         % Boolean
DI_SlideLimitF_in   =   Acq_100.data(:,12);         % Boolean
DI_SlideLimitB_in   =   Acq_100.data(:,13);         % Boolean

CI_JoyS             =   Acq_100.data(:,14);         % V
CI_JoyW             =   Acq_100.data(:,15);         % V
SlMotPosEst         =   Acq_100.data(:,16);         % V
SlMotSpdEst         =   Acq_100.data(:,17);         % rad/s
SlMotTorqueEst      =   Acq_100.data(:,18);         % Nm
WinchMotPosEst      =   Acq_100.data(:,19);         % rad
WinchMotSpdEst      =   Acq_100.data(:,20);         % rad/s
WinchMotTorqueEst   =   Acq_100.data(:,21);         % Nm
CI_SlMotPos         =   Acq_100.data(:,22);         % V
CI_WinchPos         =   Acq_100.data(:,23);         % V
CI_PotPos           =   Acq_100.data(:,24);         % V
CI_PotSpd           =   Acq_100.data(:,25);         % V


HLC_SlRef           =   Acq_100.data(:,26);         % V
Timer               =   Acq_100.data(:,27);         % V
ReelTimer           =   Acq_100.data(:,28);         % V
HLC_WinchSpdRef     =   Acq_100.data(:,29);         % V
HLC_WinchMode       =   Acq_100.data(:,30);         % V
PotZoneFlight       =   Acq_100.data(:,31);         % Integer
PotZoneLanding      =   Acq_100.data(:,32);         % Integer
HLC_State           =   Acq_100.data(:,33);         % Integer

AO_SlideDriver      =   Acq_100.data(:,34);         % V
AO_WinchDriver      =   Acq_100.data(:,35);         % V

% % 1000 Hz log
% time_1000           =   Acq_1e3.data(:,end);        % s
% AI_SlidePos1e3      =   Acq_1e3.data(:,1);          % V
% AI_WinchPos1e3      =   Acq_1e3.data(:,2);          % V
% AI_PotPos1e3        =   Acq_1e3.data(:,3);          % V
% CI_PotPos1e3        =   Acq_1e3.data(:,4);          % V

%% Plotting
figure(1),plot(time_100,HLC_WinchSpdRef*WinchDrumRad,'b',time_100,WinchMotSpdEst*WinchDrumRad,'g',time_100,CI_PotPos*100,'r',time_100,...
    WinchMotTorqueEst,'c',[time_100(1) time_100(end)],[HLC_Param.Winch.PotPosKeepMinFlight HLC_Param.Winch.PotPosKeepMinFlight]*100,'k--',...
    [time_100(1) time_100(end)],[HLC_Param.Winch.PotPosKeepMaxFlight HLC_Param.Winch.PotPosKeepMaxFlight]*100,'k--',...
    [time_100(1) time_100(end)],[HLC_Param.Winch.PotPosKeepMinLanding HLC_Param.Winch.PotPosKeepMinLanding]*100,'r--',...
    [time_100(1) time_100(end)],[HLC_Param.Winch.PotPosKeepMaxLanding HLC_Param.Winch.PotPosKeepMaxLanding]*100,'r--'),grid on
title('Winch control')
legend('Reference Speed (m/s)','Estimated Speed (m/s)','Potentiometer position (cm)','Estimated winch motor input (Nm)','Zone 0-1 Flight',...
    'Zone 1-2 Flight','Zone 0-1 Landing',...
    'Zone 1-2 Landing')

figure(2),plot(time_100,HLC_SlRef*SlMotPosAIgain*SlDrumRad,time_100,AI_mot_slide_pos*SlMotPosAIgain*SlDrumRad,time_100,...
    SlMotPosEst*SlMotPosAIgain*SlDrumRad,time_100,CI_SlMotPos*SlMotPosAIgain*SlDrumRad,...
    time_100,SlMotSpdEst*SlDrumRad,time_100,SlMotTorqueEst,time_100,Timer,time_100,DI_Enable_in),grid on
title('Slide control')
legend('Reference Position (m)','Measured position (m)','Estimated Position (m)','Filtered position (m)','Estimated speed (m/s)','Estimated slide motor input (Nm)','Timer','Enable')

figure(4),plot(time_100,HLC_WinchSpdRef*SlDrumRad,time_100,SlMotPosEst*SlMotPosAIgain*SlDrumRad,...
    time_100,SlMotSpdEst*SlDrumRad,time_100,WinchMotPosEst*SlDrumRad,time_100,CI_PotPos*1e2,...
    time_100,WinchMotSpdEst*SlDrumRad,time_100,-SlMotPosEst*SlMotPosAIgain*SlDrumRad-WinchMotPosEst*SlDrumRad,...
    time_100,-SlMotPosEst*SlMotPosAIgain*SlDrumRad,...
    time_100,HLC_State,'g-.')
legend('Reference speed winch (m/s)','Estimated Position slide (m)','Estimated speed slide (m/s)','Estimated Position winch (m)',...
    'Potentiometer position (cm)','Estimated speed winch (m/s)','Slack line length','Slide position (inverted)','winch ref landing','State'),grid on

figure(5),plot(time_100,HLC_State,time_100,DI_Enable_in,time_100,DI_Takeoff_in,time_100,DI_Landing_in,time_100,DI_WinchMode_in)
legend('State','Enable','Takeoff','Landing','Winch Mode'),grid on

