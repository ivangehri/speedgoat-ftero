function bio=Analog_Solutionbio
bio = [];
bio(1).blkName='Auxiliary variables/Sum';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&Analog_Solution_B.Sum';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Auxiliary variables/Unit Delay';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&Analog_Solution_B.UnitDelay';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Logging/Data Type Conversion1';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[6,1];
bio(3).sigWidth=6;
bio(3).sigAddress='&Analog_Solution_B.DataTypeConversion1[0]';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Logging/Wall Time 1';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[6,1];
bio(4).sigWidth=6;
bio(4).sigAddress='&Analog_Solution_B.WallTime1[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Outputs/Constant1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&Analog_Solution_B.Constant1';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Outputs/Constant3';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&Analog_Solution_B.Constant3';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Outputs/Relational Operator5';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&Analog_Solution_B.RelationalOperator5_d';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='Outputs/Saturation1';
bio(8).sigName='SpoolingOutput';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&Analog_Solution_B.SpoolingOutput';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Outputs/Saturation2';
bio(9).sigName='Siemens_Output';
bio(9).portIdx=0;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&Analog_Solution_B.Siemens_Output';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Outputs/Switch';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&Analog_Solution_B.Switch_o';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Outputs/Switch1';
bio(11).sigName='SpoolingOut';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&Analog_Solution_B.SpoolingOut';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Outputs/Switch2';
bio(12).sigName='SiemensOut';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&Analog_Solution_B.SiemensOut';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Outputs/Switch5';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&Analog_Solution_B.Switch5_g';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Spooling_Speed_Controlled/Gain';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&Analog_Solution_B.Gain_b';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Spooling_Speed_Controlled/Gain1';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&Analog_Solution_B.Gain1_c';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Spooling_Speed_Controlled/Umrechnung';
bio(16).sigName='WinchSpeed(rad/s)';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&Analog_Solution_B.WinchSpeedrads';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Spooling_Speed_Controlled/zweite Spooling Grenze';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&Analog_Solution_B.zweiteSpoolingGrenze';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Spooling_Speed_Controlled/Logical Operator';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&Analog_Solution_B.LogicalOperator';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Spooling_Speed_Controlled/Logical Operator1';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&Analog_Solution_B.LogicalOperator1';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Spooling_Speed_Controlled/Logical Operator2';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&Analog_Solution_B.LogicalOperator2_g';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Spooling_Speed_Controlled/Logical Operator3';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&Analog_Solution_B.LogicalOperator3_o';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Spooling_Speed_Controlled/Relational Operator';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&Analog_Solution_B.RelationalOperator_l';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Spooling_Speed_Controlled/Relational Operator1';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&Analog_Solution_B.RelationalOperator1_h4';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Spooling_Speed_Controlled/Relational Operator2';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&Analog_Solution_B.RelationalOperator2';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Spooling_Speed_Controlled/Relational Operator3';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&Analog_Solution_B.RelationalOperator3';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Spooling_Speed_Controlled/Relational Operator5';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&Analog_Solution_B.RelationalOperator5';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Spooling_Speed_Controlled/Relational Operator6';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&Analog_Solution_B.RelationalOperator6';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Spooling_Speed_Controlled/Relational Operator7';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&Analog_Solution_B.RelationalOperator7';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Spooling_Speed_Controlled/Relational Operator8';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&Analog_Solution_B.RelationalOperator8';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Spooling_Speed_Controlled/Switch';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&Analog_Solution_B.Switch_kf';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Spooling_Speed_Controlled/Switch1';
bio(31).sigName='1=obere Grenze\\n0=keine Grenze\\n-1=untere Grenze';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&Analog_Solution_B.uobereGrenze0keineGrenze1untere';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Spooling_Speed_Controlled/Switch2';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&Analog_Solution_B.Switch2_p';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Spooling_Speed_Controlled/Switch3';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&Analog_Solution_B.Switch3';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Spooling_Speed_Controlled/Switch4';
bio(34).sigName='SpoolingEbene';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&Analog_Solution_B.SpoolingEbene';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Spooling_Speed_Controlled/Switch5';
bio(35).sigName='Spooling_Grenze';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&Analog_Solution_B.Spooling_Grenze';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Spooling_Speed_Controlled/Switch6';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&Analog_Solution_B.Switch6_i';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Spooling_Speed_Controlled/Switch7';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&Analog_Solution_B.Switch7_i';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Spooling_Speed_Controlled/Switch8';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&Analog_Solution_B.Switch8_c';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Spooling_Speed_Controlled/Delay';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&Analog_Solution_B.Delay_b';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Spooling_Speed_Controlled/Delay1';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&Analog_Solution_B.Delay1';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Startup/Switch';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&Analog_Solution_B.Switch_m';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Startup/Switch1';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&Analog_Solution_B.Switch1_dc';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Winch_Conrtol/Sum';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&Analog_Solution_B.Sum_k';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Winch_Conrtol/Sum2';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&Analog_Solution_B.Sum2';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Winch_Conrtol/Switch';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&Analog_Solution_B.Switch_dl';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Winch_Conrtol/Switch1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&Analog_Solution_B.Switch1_i3';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Winch_Conrtol/Switch10';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&Analog_Solution_B.Switch10';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Winch_Conrtol/Switch11';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&Analog_Solution_B.Switch11';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Winch_Conrtol/Switch2';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&Analog_Solution_B.Switch2';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Winch_Conrtol/Switch8';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&Analog_Solution_B.Switch8';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Winch_Conrtol/Switch9';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&Analog_Solution_B.Switch9';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Winch_Conrtol/Delay';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&Analog_Solution_B.Delay_c';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Input conditioning and estimators/Subsystem/Gain';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&Analog_Solution_B.Gain';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Input conditioning and estimators/Subsystem/Gain1';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&Analog_Solution_B.Gain1';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Input conditioning and estimators/Subsystem/Saturation';
bio(55).sigName='CI_JoyS';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&Analog_Solution_B.CI_JoyS';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Input conditioning and estimators/Subsystem/Saturation1';
bio(56).sigName='CI_JoyW';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&Analog_Solution_B.CI_JoyW';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Input conditioning and estimators/Subsystem/Sum';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&Analog_Solution_B.Sum_n';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Input conditioning and estimators/Subsystem/Sum1';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&Analog_Solution_B.Sum1';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Input conditioning and estimators/Subsystem/Discrete Transfer Fcn';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&Analog_Solution_B.DiscreteTransferFcn';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&Analog_Solution_B.DiscreteTransferFcn1';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Input conditioning and estimators/Subsystem1/Gain';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&Analog_Solution_B.Gain_k';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Input conditioning and estimators/Subsystem2/Gain';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&Analog_Solution_B.Gain_f';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Input conditioning and estimators/Subsystem2/Gain1';
bio(63).sigName='CI_PotSpd';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&Analog_Solution_B.CI_PotSpd';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Input conditioning and estimators/Subsystem2/Saturation';
bio(64).sigName='CI_PotPos';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&Analog_Solution_B.CI_PotPos';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Input conditioning and estimators/Subsystem2/Sum';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&Analog_Solution_B.Sum_b';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Input conditioning and estimators/Subsystem2/Sum1';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&Analog_Solution_B.Sum1_b';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Input conditioning and estimators/Subsystem2/Delay';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&Analog_Solution_B.Delay';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&Analog_Solution_B.DiscreteTransferFcn1_c';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Inputs/Analog Inputs/PCI-6221 AD/p1';
bio(69).sigName='AI_Joy_W';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&Analog_Solution_B.AI_Joy_W';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Inputs/Analog Inputs/PCI-6221 AD/p2';
bio(70).sigName='AI_Joy_S';
bio(70).portIdx=1;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&Analog_Solution_B.AI_Joy_S';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Inputs/Analog Inputs/PCI-6221 AD/p3';
bio(71).sigName='AI_mot_SiemensMotor_Speed';
bio(71).portIdx=2;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&Analog_Solution_B.AI_mot_SiemensMotor_Speed';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Inputs/Analog Inputs/PCI-6221 AD/p4';
bio(72).sigName='AI_mot_winch_pos';
bio(72).portIdx=3;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&Analog_Solution_B.AI_mot_winch_pos';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Inputs/Analog Inputs/PCI-6221 AD/p5';
bio(73).sigName='AI_Kraftsensor';
bio(73).portIdx=4;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&Analog_Solution_B.AI_Kraftsensor';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Inputs/Digital Inputs/PCI 6221 PFI DI ';
bio(74).sigName='DI_SlideLimitB';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&Analog_Solution_B.DI_SlideLimitB';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Inputs/Digital Inputs/PCI-6221 DI/p1';
bio(75).sigName='DI_Enable';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&Analog_Solution_B.DI_Enable';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Inputs/Digital Inputs/PCI-6221 DI/p2';
bio(76).sigName='DI_WinchMode';
bio(76).portIdx=1;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&Analog_Solution_B.DI_WinchMode';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Inputs/Digital Inputs/PCI-6221 DI/p3';
bio(77).sigName='DI_Takeoff';
bio(77).portIdx=2;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&Analog_Solution_B.DI_Takeoff';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Inputs/Digital Inputs/PCI-6221 DI/p4';
bio(78).sigName='DI_Landing';
bio(78).portIdx=3;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&Analog_Solution_B.DI_Landing';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Inputs/Digital Inputs/PCI-6221 DI/p5';
bio(79).sigName='DI_Operator';
bio(79).portIdx=4;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&Analog_Solution_B.DI_Operator';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Inputs/Digital Inputs/PCI-6221 DI/p6';
bio(80).sigName='DI_SpoolingGrenze1';
bio(80).portIdx=5;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&Analog_Solution_B.DI_SpoolingGrenze1';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Inputs/Digital Inputs/PCI-6221 DI/p7';
bio(81).sigName='DI_SpoolingGrenze2';
bio(81).portIdx=6;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&Analog_Solution_B.DI_SpoolingGrenze2';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Inputs/RS232_read/Constant';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&Analog_Solution_B.Constant';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Inputs/RS232_read/Constant1';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&Analog_Solution_B.Constant1_d';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Inputs/RS232_read/Constant2';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&Analog_Solution_B.Constant2_j';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Inputs/RS232_read/Constant3';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&Analog_Solution_B.Constant3_h';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Logging/Log_conditioning/Rate Transition';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[22,1];
bio(86).sigWidth=22;
bio(86).sigAddress='&Analog_Solution_B.RateTransition_i[0]';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Logging/Time_Scope_trigger/Switch';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&Analog_Solution_B.Switch_ku';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Logging/Time_Scope_trigger/Switch1';
bio(88).sigName='Trigger_time';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&Analog_Solution_B.Trigger_time';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Outputs/Subsystem/Relational Operator';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&Analog_Solution_B.RelationalOperator_ih';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Outputs/Subsystem/Relational Operator1';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&Analog_Solution_B.RelationalOperator1_d';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Outputs/Subsystem/Relational Operator2';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&Analog_Solution_B.RelationalOperator2_d';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Outputs/Subsystem/Relational Operator3';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&Analog_Solution_B.RelationalOperator3_m';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Outputs/Subsystem/Relational Operator4';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&Analog_Solution_B.RelationalOperator4';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Outputs/Subsystem/Switch';
bio(94).sigName='Siemens_Motor';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&Analog_Solution_B.Siemens_Motor';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Outputs/Subsystem/Switch1';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&Analog_Solution_B.Switch1_pc';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Outputs/Subsystem/Switch2';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&Analog_Solution_B.Switch2_a';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Outputs/Subsystem/Switch3';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&Analog_Solution_B.Switch3_a';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Outputs/Subsystem/Switch4';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&Analog_Solution_B.Switch4_a';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Spooling_Speed_Controlled/Subsystem/Abs';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&Analog_Solution_B.Abs_l';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Spooling_Speed_Controlled/Subsystem/Abs1';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&Analog_Solution_B.Abs1';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Spooling_Speed_Controlled/Subsystem/Sample Zeit';
bio(101).sigName='Umdrehung/SampleTime';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&Analog_Solution_B.UmdrehungSampleTime';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Spooling_Speed_Controlled/Subsystem/Relational Operator';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&Analog_Solution_B.RelationalOperator_n';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Spooling_Speed_Controlled/Subsystem/Relational Operator1';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&Analog_Solution_B.RelationalOperator1_h';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Spooling_Speed_Controlled/Subsystem/Sum';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&Analog_Solution_B.Sum_bi';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Spooling_Speed_Controlled/Subsystem/Switch';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&Analog_Solution_B.Switch_p';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Spooling_Speed_Controlled/Subsystem/Switch1';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&Analog_Solution_B.Switch1_g';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Spooling_Speed_Controlled/Subsystem/Switch2';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&Analog_Solution_B.Switch2_e';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Spooling_Speed_Controlled/Subsystem/Delay';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&Analog_Solution_B.Delay_e';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Spooling_Speed_Controlled/Subsystem/Delay1';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&Analog_Solution_B.Delay1_f';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Startup/Initialize Spooling Position/Gain';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&Analog_Solution_B.Gain_j';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Winch_Conrtol/Emergency/Gain';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&Analog_Solution_B.Gain_jo';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Winch_Conrtol/Emergency/Relational Operator';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&Analog_Solution_B.RelationalOperator_j';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Winch_Conrtol/Emergency/Relational Operator1';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&Analog_Solution_B.RelationalOperator1_b';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Winch_Conrtol/Emergency/Sum';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&Analog_Solution_B.Sum_no';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Winch_Conrtol/Emergency/Sum1';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&Analog_Solution_B.Sum1_j';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Winch_Conrtol/Emergency/Switch';
bio(116).sigName='';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&Analog_Solution_B.Switch_h';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Winch_Conrtol/Emergency/Switch1';
bio(117).sigName='';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&Analog_Solution_B.Switch1_o';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Winch_Conrtol/Joystick Regelung1/Delay';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&Analog_Solution_B.Delay_k';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Winch_Conrtol/Subsystem/Logical Operator';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&Analog_Solution_B.LogicalOperator_k';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Winch_Conrtol/Subsystem/Logical Operator1';
bio(120).sigName='TractionAdvanced';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&Analog_Solution_B.TractionAdvanced';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Winch_Conrtol/Subsystem/Logical Operator2';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&Analog_Solution_B.LogicalOperator2';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Winch_Conrtol/Subsystem/Logical Operator3';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&Analog_Solution_B.LogicalOperator3';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Winch_Conrtol/Subsystem/Logical Operator4';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&Analog_Solution_B.LogicalOperator4';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Winch_Conrtol/Subsystem/Logical Operator5';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&Analog_Solution_B.LogicalOperator5';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Winch_Conrtol/Subsystem/Logical Operator6';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&Analog_Solution_B.LogicalOperator6';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Winch_Conrtol/Subsystem/Logical Operator7';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&Analog_Solution_B.LogicalOperator7';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Winch_Conrtol/Subsystem/Switch';
bio(127).sigName='';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&Analog_Solution_B.Switch';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Winch_Conrtol/Subsystem/Switch1';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&Analog_Solution_B.Switch1_p';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Winch_Conrtol/Subsystem/Switch2';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&Analog_Solution_B.Switch2_nt';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Winch_Conrtol/Subsystem/Switch3';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&Analog_Solution_B.Switch3_b';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Winch_Conrtol/Subsystem/Switch4';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&Analog_Solution_B.Switch4';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Winch_Conrtol/Subsystem/Switch5';
bio(132).sigName='';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&Analog_Solution_B.Switch5';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Winch_Conrtol/Subsystem/Switch6';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&Analog_Solution_B.Switch6';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Winch_Conrtol/Subsystem/Switch7';
bio(134).sigName='';
bio(134).portIdx=0;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&Analog_Solution_B.Switch7';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Winch_Conrtol/Subsystem/Delay1';
bio(135).sigName='';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&Analog_Solution_B.Delay1_m';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Winch_Conrtol/Subsystem/Delay2';
bio(136).sigName='';
bio(136).portIdx=0;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&Analog_Solution_B.Delay2';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Winch_Conrtol/Subsystem/Delay3';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&Analog_Solution_B.Delay3';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Winch_Conrtol/Subsystem/Delay4';
bio(138).sigName='';
bio(138).portIdx=0;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&Analog_Solution_B.Delay4';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Winch_Conrtol/damper/Gain';
bio(139).sigName='';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&Analog_Solution_B.Gain_fi';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Winch_Conrtol/damper/Sum';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&Analog_Solution_B.Sum_m';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Winch_Conrtol/damper/Sum1';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&Analog_Solution_B.Sum1_e';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Winch_Conrtol/damper/Switch';
bio(142).sigName='';
bio(142).portIdx=0;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&Analog_Solution_B.Switch_c';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=false;

bio(143).blkName='Winch_Conrtol/damper/Switch1';
bio(143).sigName='';
bio(143).portIdx=0;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&Analog_Solution_B.Switch1_d';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Winch_Conrtol/damper/Delay';
bio(144).sigName='';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&Analog_Solution_B.Delay_kl';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Winch_Conrtol/damper/Delay1';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&Analog_Solution_B.Delay1_j';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Gain';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&Analog_Solution_B.Gain_m';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Sum';
bio(147).sigName='';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&Analog_Solution_B.Sum_p';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Sum1';
bio(148).sigName='';
bio(148).portIdx=0;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&Analog_Solution_B.Sum1_n';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1';
bio(149).sigName='CI_WinchPos';
bio(149).portIdx=0;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&Analog_Solution_B.CI_WinchPos';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space';
bio(150).sigName='';
bio(150).portIdx=0;
bio(150).dim=[2,1];
bio(150).sigWidth=2;
bio(150).sigAddress='&Analog_Solution_B.DiscreteStateSpace[0]';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Gain';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[1,1];
bio(151).sigWidth=1;
bio(151).sigAddress='&Analog_Solution_B.Gain_g';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Gain1';
bio(152).sigName='';
bio(152).portIdx=0;
bio(152).dim=[1,1];
bio(152).sigWidth=1;
bio(152).sigAddress='&Analog_Solution_B.Gain1_d';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Saturation';
bio(153).sigName='';
bio(153).portIdx=0;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&Analog_Solution_B.Saturation';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=false;

bio(154).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1';
bio(154).sigName='';
bio(154).portIdx=0;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&Analog_Solution_B.Saturation1';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum';
bio(155).sigName='';
bio(155).portIdx=0;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&Analog_Solution_B.Sum_c';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum1';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&Analog_Solution_B.Sum1_nr';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum2';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&Analog_Solution_B.Sum2_a';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=false;

bio(158).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Switch';
bio(158).sigName='WinchMotTorqueEst';
bio(158).portIdx=0;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&Analog_Solution_B.WinchMotTorqueEst';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn';
bio(159).sigName='WinchMotSpeedEst';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&Analog_Solution_B.WinchMotSpeedEst';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=false;

bio(160).blkName='Inputs/RS232_read/Compass_read/Embedded MATLAB Function';
bio(160).sigName='GU_Yaw';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&Analog_Solution_B.GU_Yaw';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Inputs/RS232_read/Compass_read/Rate Transition4';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&Analog_Solution_B.RateTransition4_p';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[41,1];
bio(162).sigWidth=41;
bio(162).sigAddress='&Analog_Solution_B.FIFOASCIIread1[0]';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1';
bio(163).sigName='GU_Lat';
bio(163).portIdx=0;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&Analog_Solution_B.GU_Lat';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=false;

bio(164).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2';
bio(164).sigName='GU_Lon';
bio(164).portIdx=1;
bio(164).dim=[1,1];
bio(164).sigWidth=1;
bio(164).sigAddress='&Analog_Solution_B.GU_Lon';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3';
bio(165).sigName='GU_h';
bio(165).portIdx=2;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&Analog_Solution_B.GU_h';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=false;

bio(166).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4';
bio(166).sigName='Geo_Gu_h';
bio(166).portIdx=3;
bio(166).dim=[1,1];
bio(166).sigWidth=1;
bio(166).sigAddress='&Analog_Solution_B.Geo_GU_h';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Inputs/RS232_read/GPS_read/Rate Transition4';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&Analog_Solution_B.RateTransition4_d';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[91,1];
bio(168).sigWidth=91;
bio(168).sigAddress='&Analog_Solution_B.FIFOASCIIread1_k[0]';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Inputs/RS232_read/IMU_read/Rate Transition4';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&Analog_Solution_B.RateTransition4_f';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Inputs/RS232_read/IMU_read/FIFO ASCII read ';
bio(170).sigName='';
bio(170).portIdx=0;
bio(170).dim=[1025,1];
bio(170).sigWidth=1025;
bio(170).sigAddress='&Analog_Solution_B.FIFOASCIIread[0]';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition';
bio(171).sigName='';
bio(171).portIdx=0;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&Analog_Solution_B.RateTransition';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition1';
bio(172).sigName='';
bio(172).portIdx=0;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&Analog_Solution_B.RateTransition1';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition2';
bio(173).sigName='';
bio(173).portIdx=0;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&Analog_Solution_B.RateTransition2';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition3';
bio(174).sigName='';
bio(174).portIdx=0;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&Analog_Solution_B.RateTransition3';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition4';
bio(175).sigName='';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&Analog_Solution_B.RateTransition4';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition5';
bio(176).sigName='';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&Analog_Solution_B.RateTransition5';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition6';
bio(177).sigName='';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&Analog_Solution_B.RateTransition6';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition7';
bio(178).sigName='';
bio(178).portIdx=0;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&Analog_Solution_B.RateTransition7';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 1/p1';
bio(179).sigName='';
bio(179).portIdx=0;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&Analog_Solution_B.FIFOwrite1_o1';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 1/p2';
bio(180).sigName='';
bio(180).portIdx=1;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&Analog_Solution_B.FIFOwrite1_o2';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 2/p1';
bio(181).sigName='';
bio(181).portIdx=0;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&Analog_Solution_B.FIFOwrite2_o1';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 2/p2';
bio(182).sigName='';
bio(182).portIdx=1;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&Analog_Solution_B.FIFOwrite2_o2';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 3/p1';
bio(183).sigName='';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&Analog_Solution_B.FIFOwrite3_o1';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 3/p2';
bio(184).sigName='';
bio(184).portIdx=1;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&Analog_Solution_B.FIFOwrite3_o2';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 4/p1';
bio(185).sigName='';
bio(185).portIdx=0;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&Analog_Solution_B.FIFOwrite4_o1';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 4/p2';
bio(186).sigName='';
bio(186).portIdx=1;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&Analog_Solution_B.FIFOwrite4_o2';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Outputs/Joystick Regelung1/Joystick-Steuerung/Gain';
bio(187).sigName='';
bio(187).portIdx=0;
bio(187).dim=[1,1];
bio(187).sigWidth=1;
bio(187).sigAddress='&Analog_Solution_B.Gain_o';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Outputs/Joystick Regelung1/Joystick-Steuerung/Relational Operator';
bio(188).sigName='';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&Analog_Solution_B.RelationalOperator_f';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=false;

bio(189).blkName='Outputs/Joystick Regelung1/Joystick-Steuerung/Relational Operator1';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&Analog_Solution_B.RelationalOperator1_j';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=false;

bio(190).blkName='Outputs/Joystick Regelung1/Joystick-Steuerung/Switch';
bio(190).sigName='';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&Analog_Solution_B.Switch_e';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=false;

bio(191).blkName='Outputs/Joystick Regelung1/Joystick-Steuerung/Switch1';
bio(191).sigName='';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&Analog_Solution_B.Switch1_j';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Startup/Initialize Spooling Position/FirstDirectionDone?/Relational Operator';
bio(192).sigName='';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&Analog_Solution_B.RelationalOperator';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Startup/Initialize Spooling Position/FirstDirectionDone?/Sum';
bio(193).sigName='';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&Analog_Solution_B.Sum_cc';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Startup/Initialize Spooling Position/FirstDirectionDone?/Switch1';
bio(194).sigName='';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&Analog_Solution_B.Switch1_c';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Startup/Initialize Spooling Position/FirstDirectionDone?/Switch2';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&Analog_Solution_B.Switch2_n';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Startup/Initialize Spooling Position/FirstDirectionDone?/Delay';
bio(196).sigName='';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&Analog_Solution_B.Delay_j';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Abs';
bio(197).sigName='';
bio(197).portIdx=0;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&Analog_Solution_B.Abs';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=false;

bio(198).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Gain';
bio(198).sigName='';
bio(198).portIdx=0;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&Analog_Solution_B.Gain_a';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=false;

bio(199).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Logical Operator';
bio(199).sigName='';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&Analog_Solution_B.LogicalOperator_i';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Relational Operator';
bio(200).sigName='';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&Analog_Solution_B.RelationalOperator_i';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Relational Operator1';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&Analog_Solution_B.RelationalOperator1_l';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Sum';
bio(202).sigName='';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&Analog_Solution_B.Sum_m1';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch';
bio(203).sigName='';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&Analog_Solution_B.Switch_b';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch1';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&Analog_Solution_B.Switch1_f';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch2';
bio(205).sigName='';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&Analog_Solution_B.Switch2_o';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch3';
bio(206).sigName='';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&Analog_Solution_B.Switch3_e';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

bio(207).blkName='Startup/Initialize Spooling Position/SteerSpoolingMotor/Delay';
bio(207).sigName='';
bio(207).portIdx=0;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&Analog_Solution_B.Delay_o';
bio(207).ndims=2;
bio(207).size=[];
bio(207).isStruct=false;

bio(208).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain';
bio(208).sigName='';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&Analog_Solution_B.Gain_mz';
bio(208).ndims=2;
bio(208).size=[];
bio(208).isStruct=false;

bio(209).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator';
bio(209).sigName='';
bio(209).portIdx=0;
bio(209).dim=[1,1];
bio(209).sigWidth=1;
bio(209).sigAddress='&Analog_Solution_B.RelationalOperator_a';
bio(209).ndims=2;
bio(209).size=[];
bio(209).isStruct=false;

bio(210).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator1';
bio(210).sigName='';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&Analog_Solution_B.RelationalOperator1';
bio(210).ndims=2;
bio(210).size=[];
bio(210).isStruct=false;

bio(211).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum';
bio(211).sigName='';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&Analog_Solution_B.Sum_my';
bio(211).ndims=2;
bio(211).size=[];
bio(211).isStruct=false;

bio(212).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum1';
bio(212).sigName='';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&Analog_Solution_B.Sum1_k';
bio(212).ndims=2;
bio(212).size=[];
bio(212).isStruct=false;

bio(213).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch';
bio(213).sigName='';
bio(213).portIdx=0;
bio(213).dim=[1,1];
bio(213).sigWidth=1;
bio(213).sigAddress='&Analog_Solution_B.Switch_k';
bio(213).ndims=2;
bio(213).size=[];
bio(213).isStruct=false;

bio(214).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch1';
bio(214).sigName='';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&Analog_Solution_B.Switch1';
bio(214).ndims=2;
bio(214).size=[];
bio(214).isStruct=false;

bio(215).blkName='Winch_Conrtol/Joystick Regelung1/damper/Gain';
bio(215).sigName='';
bio(215).portIdx=0;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&Analog_Solution_B.Gain_mu';
bio(215).ndims=2;
bio(215).size=[];
bio(215).isStruct=false;

bio(216).blkName='Winch_Conrtol/Joystick Regelung1/damper/Sum';
bio(216).sigName='';
bio(216).portIdx=0;
bio(216).dim=[1,1];
bio(216).sigWidth=1;
bio(216).sigAddress='&Analog_Solution_B.Sum_j';
bio(216).ndims=2;
bio(216).size=[];
bio(216).isStruct=false;

bio(217).blkName='Winch_Conrtol/Joystick Regelung1/damper/Sum1';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[1,1];
bio(217).sigWidth=1;
bio(217).sigAddress='&Analog_Solution_B.Sum1_l';
bio(217).ndims=2;
bio(217).size=[];
bio(217).isStruct=false;

bio(218).blkName='Winch_Conrtol/Joystick Regelung1/damper/Switch';
bio(218).sigName='';
bio(218).portIdx=0;
bio(218).dim=[1,1];
bio(218).sigWidth=1;
bio(218).sigAddress='&Analog_Solution_B.Switch_d';
bio(218).ndims=2;
bio(218).size=[];
bio(218).isStruct=false;

bio(219).blkName='Winch_Conrtol/Joystick Regelung1/damper/Switch1';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[1,1];
bio(219).sigWidth=1;
bio(219).sigAddress='&Analog_Solution_B.Switch1_i';
bio(219).ndims=2;
bio(219).size=[];
bio(219).isStruct=false;

bio(220).blkName='Winch_Conrtol/Joystick Regelung1/damper/Delay';
bio(220).sigName='';
bio(220).portIdx=0;
bio(220).dim=[1,1];
bio(220).sigWidth=1;
bio(220).sigAddress='&Analog_Solution_B.Delay_c3';
bio(220).ndims=2;
bio(220).size=[];
bio(220).isStruct=false;

bio(221).blkName='Winch_Conrtol/Joystick Regelung1/damper/Delay1';
bio(221).sigName='';
bio(221).portIdx=0;
bio(221).dim=[1,1];
bio(221).sigWidth=1;
bio(221).sigAddress='&Analog_Solution_B.Delay1_h';
bio(221).ndims=2;
bio(221).size=[];
bio(221).isStruct=false;

bio(222).blkName='Winch_Conrtol/damper/Compare To Zero/Compare';
bio(222).sigName='';
bio(222).portIdx=0;
bio(222).dim=[1,1];
bio(222).sigWidth=1;
bio(222).sigAddress='&Analog_Solution_B.Compare_k';
bio(222).ndims=2;
bio(222).size=[];
bio(222).isStruct=false;

bio(223).blkName='Winch_Conrtol/damper/Compare To Zero1/Compare';
bio(223).sigName='';
bio(223).portIdx=0;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&Analog_Solution_B.Compare_m';
bio(223).ndims=2;
bio(223).size=[];
bio(223).isStruct=false;

bio(224).blkName='Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function';
bio(224).sigName='';
bio(224).portIdx=0;
bio(224).dim=[1,1];
bio(224).sigWidth=1;
bio(224).sigAddress='&Analog_Solution_B.CRC_valid';
bio(224).ndims=2;
bio(224).size=[];
bio(224).isStruct=false;

bio(225).blkName='Inputs/RS232_read/IMU_read/Data_validation/IMU_data';
bio(225).sigName='';
bio(225).portIdx=0;
bio(225).dim=[38,1];
bio(225).sigWidth=38;
bio(225).sigAddress='&Analog_Solution_B.IMU_data[0]';
bio(225).ndims=2;
bio(225).size=[];
bio(225).isStruct=false;

bio(226).blkName='Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Compare';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[1,1];
bio(226).sigWidth=1;
bio(226).sigAddress='&Analog_Solution_B.Compare_b';
bio(226).ndims=2;
bio(226).size=[];
bio(226).isStruct=false;

bio(227).blkName='Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Compare';
bio(227).sigName='';
bio(227).portIdx=0;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&Analog_Solution_B.Compare';
bio(227).ndims=2;
bio(227).size=[];
bio(227).isStruct=false;

bio(228).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function';
bio(228).sigName='time';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_l.uint32_out';
bio(228).ndims=2;
bio(228).size=[];
bio(228).isStruct=false;

bio(229).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1';
bio(229).sigName='GPSFlags';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_e.uint8_out';
bio(229).ndims=2;
bio(229).size=[];
bio(229).isStruct=false;

bio(230).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2';
bio(230).sigName='NbSat';
bio(230).portIdx=0;
bio(230).dim=[1,1];
bio(230).sigWidth=1;
bio(230).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2_h.uint8_out';
bio(230).ndims=2;
bio(230).size=[];
bio(230).isStruct=false;

bio(231).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function';
bio(231).sigName='Mx';
bio(231).portIdx=0;
bio(231).dim=[1,1];
bio(231).sigWidth=1;
bio(231).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_b.sing_out';
bio(231).ndims=2;
bio(231).size=[];
bio(231).isStruct=false;

bio(232).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1';
bio(232).sigName='My';
bio(232).portIdx=0;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_j.sing_out';
bio(232).ndims=2;
bio(232).size=[];
bio(232).isStruct=false;

bio(233).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3';
bio(233).sigName='Mz';
bio(233).portIdx=0;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_ps.sing_out';
bio(233).ndims=2;
bio(233).size=[];
bio(233).isStruct=false;

bio(234).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function';
bio(234).sigName='year';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_a.uint8_out';
bio(234).ndims=2;
bio(234).size=[];
bio(234).isStruct=false;

bio(235).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1';
bio(235).sigName='nanoseconds';
bio(235).portIdx=0;
bio(235).dim=[1,1];
bio(235).sigWidth=1;
bio(235).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_c.uint32_out';
bio(235).ndims=2;
bio(235).size=[];
bio(235).isStruct=false;

bio(236).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2';
bio(236).sigName='month';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2_p.uint8_out';
bio(236).ndims=2;
bio(236).size=[];
bio(236).isStruct=false;

bio(237).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3';
bio(237).sigName='day';
bio(237).portIdx=0;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_k.uint8_out';
bio(237).ndims=2;
bio(237).size=[];
bio(237).isStruct=false;

bio(238).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4';
bio(238).sigName='hour';
bio(238).portIdx=0;
bio(238).dim=[1,1];
bio(238).sigWidth=1;
bio(238).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction4_h.uint8_out';
bio(238).ndims=2;
bio(238).size=[];
bio(238).isStruct=false;

bio(239).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5';
bio(239).sigName='min';
bio(239).portIdx=0;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction5.uint8_out';
bio(239).ndims=2;
bio(239).size=[];
bio(239).isStruct=false;

bio(240).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6';
bio(240).sigName='sec';
bio(240).portIdx=0;
bio(240).dim=[1,1];
bio(240).sigWidth=1;
bio(240).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction6.uint8_out';
bio(240).ndims=2;
bio(240).size=[];
bio(240).isStruct=false;

bio(241).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function';
bio(241).sigName='Time_sr';
bio(241).portIdx=0;
bio(241).dim=[1,1];
bio(241).sigWidth=1;
bio(241).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_bf.uint32_out';
bio(241).ndims=2;
bio(241).size=[];
bio(241).isStruct=false;

bio(242).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1';
bio(242).sigName='longitude';
bio(242).portIdx=0;
bio(242).dim=[1,1];
bio(242).sigWidth=1;
bio(242).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_g.int32_out';
bio(242).ndims=2;
bio(242).size=[];
bio(242).isStruct=false;

bio(243).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2';
bio(243).sigName='height';
bio(243).portIdx=0;
bio(243).dim=[1,1];
bio(243).sigWidth=1;
bio(243).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2.int32_out';
bio(243).ndims=2;
bio(243).size=[];
bio(243).isStruct=false;

bio(244).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3';
bio(244).sigName='latitude';
bio(244).portIdx=0;
bio(244).dim=[1,1];
bio(244).sigWidth=1;
bio(244).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_pw.int32_out';
bio(244).ndims=2;
bio(244).size=[];
bio(244).isStruct=false;

bio(245).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1';
bio(245).sigName='v_east';
bio(245).portIdx=0;
bio(245).dim=[1,1];
bio(245).sigWidth=1;
bio(245).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_n.int32_out';
bio(245).ndims=2;
bio(245).size=[];
bio(245).isStruct=false;

bio(246).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2';
bio(246).sigName='v_north';
bio(246).portIdx=0;
bio(246).dim=[1,1];
bio(246).sigWidth=1;
bio(246).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2_n.int32_out';
bio(246).ndims=2;
bio(246).size=[];
bio(246).isStruct=false;

bio(247).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3';
bio(247).sigName='v_down';
bio(247).portIdx=0;
bio(247).dim=[1,1];
bio(247).sigWidth=1;
bio(247).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_o.int32_out';
bio(247).ndims=2;
bio(247).size=[];
bio(247).isStruct=false;

bio(248).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4';
bio(248).sigName='heading';
bio(248).portIdx=0;
bio(248).dim=[1,1];
bio(248).sigWidth=1;
bio(248).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction4_g.int32_out';
bio(248).ndims=2;
bio(248).size=[];
bio(248).isStruct=false;

bio(249).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2';
bio(249).sigName='Altitude';
bio(249).portIdx=0;
bio(249).dim=[1,1];
bio(249).sigWidth=1;
bio(249).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2_m.int32_out';
bio(249).ndims=2;
bio(249).size=[];
bio(249).isStruct=false;

bio(250).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function';
bio(250).sigName='lat_filt';
bio(250).portIdx=0;
bio(250).dim=[1,1];
bio(250).sigWidth=1;
bio(250).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_k.double_out';
bio(250).ndims=2;
bio(250).size=[];
bio(250).isStruct=false;

bio(251).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1';
bio(251).sigName='long_filt';
bio(251).portIdx=0;
bio(251).dim=[1,1];
bio(251).sigWidth=1;
bio(251).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_a.double_out';
bio(251).ndims=2;
bio(251).size=[];
bio(251).isStruct=false;

bio(252).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2';
bio(252).sigName='height_filt';
bio(252).portIdx=0;
bio(252).dim=[1,1];
bio(252).sigWidth=1;
bio(252).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction2_g.double_out';
bio(252).ndims=2;
bio(252).size=[];
bio(252).isStruct=false;

bio(253).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function';
bio(253).sigName='Vx';
bio(253).portIdx=0;
bio(253).dim=[1,1];
bio(253).sigWidth=1;
bio(253).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_j.sing_out';
bio(253).ndims=2;
bio(253).size=[];
bio(253).isStruct=false;

bio(254).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1';
bio(254).sigName='Vy';
bio(254).portIdx=0;
bio(254).dim=[1,1];
bio(254).sigWidth=1;
bio(254).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_d.sing_out';
bio(254).ndims=2;
bio(254).size=[];
bio(254).isStruct=false;

bio(255).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3';
bio(255).sigName='Vz';
bio(255).portIdx=0;
bio(255).dim=[1,1];
bio(255).sigWidth=1;
bio(255).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_n.sing_out';
bio(255).ndims=2;
bio(255).size=[];
bio(255).isStruct=false;

bio(256).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function';
bio(256).sigName='q1';
bio(256).portIdx=0;
bio(256).dim=[1,1];
bio(256).sigWidth=1;
bio(256).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_g.sing_out';
bio(256).ndims=2;
bio(256).size=[];
bio(256).isStruct=false;

bio(257).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1';
bio(257).sigName='q2';
bio(257).portIdx=0;
bio(257).dim=[1,1];
bio(257).sigWidth=1;
bio(257).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1.sing_out';
bio(257).ndims=2;
bio(257).size=[];
bio(257).isStruct=false;

bio(258).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3';
bio(258).sigName='q3';
bio(258).portIdx=0;
bio(258).dim=[1,1];
bio(258).sigWidth=1;
bio(258).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3.sing_out';
bio(258).ndims=2;
bio(258).size=[];
bio(258).isStruct=false;

bio(259).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4';
bio(259).sigName='q4';
bio(259).portIdx=0;
bio(259).dim=[1,1];
bio(259).sigWidth=1;
bio(259).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction4.sing_out';
bio(259).ndims=2;
bio(259).size=[];
bio(259).isStruct=false;

bio(260).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function';
bio(260).sigName='Gx';
bio(260).portIdx=0;
bio(260).dim=[1,1];
bio(260).sigWidth=1;
bio(260).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_d.sing_out';
bio(260).ndims=2;
bio(260).size=[];
bio(260).isStruct=false;

bio(261).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1';
bio(261).sigName='Gy';
bio(261).portIdx=0;
bio(261).dim=[1,1];
bio(261).sigWidth=1;
bio(261).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_i.sing_out';
bio(261).ndims=2;
bio(261).size=[];
bio(261).isStruct=false;

bio(262).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3';
bio(262).sigName='Gz';
bio(262).portIdx=0;
bio(262).dim=[1,1];
bio(262).sigWidth=1;
bio(262).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_p.sing_out';
bio(262).ndims=2;
bio(262).size=[];
bio(262).isStruct=false;

bio(263).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function';
bio(263).sigName='Ax';
bio(263).portIdx=0;
bio(263).dim=[1,1];
bio(263).sigWidth=1;
bio(263).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction_f.sing_out';
bio(263).ndims=2;
bio(263).size=[];
bio(263).isStruct=false;

bio(264).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1';
bio(264).sigName='Ay';
bio(264).portIdx=0;
bio(264).dim=[1,1];
bio(264).sigWidth=1;
bio(264).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction1_p.sing_out';
bio(264).ndims=2;
bio(264).size=[];
bio(264).isStruct=false;

bio(265).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3';
bio(265).sigName='Az';
bio(265).portIdx=0;
bio(265).dim=[1,1];
bio(265).sigWidth=1;
bio(265).sigAddress='&Analog_Solution_B.sf_EmbeddedMATLABFunction3_a.sing_out';
bio(265).ndims=2;
bio(265).size=[];
bio(265).isStruct=false;

bio(266).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1';
bio(266).sigName='';
bio(266).portIdx=0;
bio(266).dim=[1,1];
bio(266).sigWidth=1;
bio(266).sigAddress='&Analog_Solution_B.Constant1_p';
bio(266).ndims=2;
bio(266).size=[];
bio(266).isStruct=false;

bio(267).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2';
bio(267).sigName='';
bio(267).portIdx=0;
bio(267).dim=[1,1];
bio(267).sigWidth=1;
bio(267).sigAddress='&Analog_Solution_B.Constant2';
bio(267).ndims=2;
bio(267).size=[];
bio(267).isStruct=false;

bio(268).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3';
bio(268).sigName='';
bio(268).portIdx=0;
bio(268).dim=[1,1];
bio(268).sigWidth=1;
bio(268).sigAddress='&Analog_Solution_B.Constant3_o';
bio(268).ndims=2;
bio(268).size=[];
bio(268).isStruct=false;

bio(269).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4';
bio(269).sigName='';
bio(269).portIdx=0;
bio(269).dim=[1,1];
bio(269).sigWidth=1;
bio(269).sigAddress='&Analog_Solution_B.Constant4';
bio(269).ndims=2;
bio(269).size=[];
bio(269).isStruct=false;

bio(270).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator';
bio(270).sigName='';
bio(270).portIdx=0;
bio(270).dim=[1,1];
bio(270).sigWidth=1;
bio(270).sigAddress='&Analog_Solution_B.LogicalOperator_c';
bio(270).ndims=2;
bio(270).size=[];
bio(270).isStruct=false;

bio(271).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator';
bio(271).sigName='';
bio(271).portIdx=0;
bio(271).dim=[4,1];
bio(271).sigWidth=4;
bio(271).sigAddress='&Analog_Solution_B.RelationalOperator_m[0]';
bio(271).ndims=2;
bio(271).size=[];
bio(271).isStruct=false;

bio(272).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator';
bio(272).sigName='';
bio(272).portIdx=0;
bio(272).dim=[4,1];
bio(272).sigWidth=4;
bio(272).sigAddress='&Analog_Solution_B.BitwiseLogicalOperator[0]';
bio(272).ndims=2;
bio(272).size=[];
bio(272).isStruct=false;

bio(273).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1';
bio(273).sigName='';
bio(273).portIdx=0;
bio(273).dim=[61,1];
bio(273).sigWidth=61;
bio(273).sigAddress='&Analog_Solution_B.FIFOread1_o1[0]';
bio(273).ndims=2;
bio(273).size=[];
bio(273).isStruct=false;

bio(274).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2';
bio(274).sigName='';
bio(274).portIdx=1;
bio(274).dim=[1,1];
bio(274).sigWidth=1;
bio(274).sigAddress='&Analog_Solution_B.FIFOread1_o2';
bio(274).ndims=2;
bio(274).size=[];
bio(274).isStruct=false;

bio(275).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1';
bio(275).sigName='';
bio(275).portIdx=0;
bio(275).dim=[61,1];
bio(275).sigWidth=61;
bio(275).sigAddress='&Analog_Solution_B.FIFOread2_o1[0]';
bio(275).ndims=2;
bio(275).size=[];
bio(275).isStruct=false;

bio(276).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2';
bio(276).sigName='';
bio(276).portIdx=1;
bio(276).dim=[1,1];
bio(276).sigWidth=1;
bio(276).sigAddress='&Analog_Solution_B.FIFOread2_o2';
bio(276).ndims=2;
bio(276).size=[];
bio(276).isStruct=false;

bio(277).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1';
bio(277).sigName='';
bio(277).portIdx=0;
bio(277).dim=[61,1];
bio(277).sigWidth=61;
bio(277).sigAddress='&Analog_Solution_B.FIFOread3_o1[0]';
bio(277).ndims=2;
bio(277).size=[];
bio(277).isStruct=false;

bio(278).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2';
bio(278).sigName='';
bio(278).portIdx=1;
bio(278).dim=[1,1];
bio(278).sigWidth=1;
bio(278).sigAddress='&Analog_Solution_B.FIFOread3_o2';
bio(278).ndims=2;
bio(278).size=[];
bio(278).isStruct=false;

bio(279).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1';
bio(279).sigName='';
bio(279).portIdx=0;
bio(279).dim=[61,1];
bio(279).sigWidth=61;
bio(279).sigAddress='&Analog_Solution_B.FIFOread4_o1[0]';
bio(279).ndims=2;
bio(279).size=[];
bio(279).isStruct=false;

bio(280).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2';
bio(280).sigName='';
bio(280).portIdx=1;
bio(280).dim=[1,1];
bio(280).sigWidth=1;
bio(280).sigAddress='&Analog_Solution_B.FIFOread4_o2';
bio(280).ndims=2;
bio(280).size=[];
bio(280).isStruct=false;

bio(281).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
bio(281).sigName='';
bio(281).portIdx=0;
bio(281).dim=[1,1];
bio(281).sigWidth=1;
bio(281).sigAddress='&Analog_Solution_B.FIFOwrite1';
bio(281).ndims=2;
bio(281).size=[];
bio(281).isStruct=false;

bio(282).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
bio(282).sigName='';
bio(282).portIdx=0;
bio(282).dim=[1,1];
bio(282).sigWidth=1;
bio(282).sigAddress='&Analog_Solution_B.FIFOwrite2';
bio(282).ndims=2;
bio(282).size=[];
bio(282).isStruct=false;

bio(283).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
bio(283).sigName='';
bio(283).portIdx=0;
bio(283).dim=[1,1];
bio(283).sigWidth=1;
bio(283).sigAddress='&Analog_Solution_B.FIFOwrite3';
bio(283).ndims=2;
bio(283).size=[];
bio(283).isStruct=false;

bio(284).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
bio(284).sigName='';
bio(284).portIdx=0;
bio(284).dim=[1,1];
bio(284).sigWidth=1;
bio(284).sigAddress='&Analog_Solution_B.FIFOwrite4';
bio(284).ndims=2;
bio(284).size=[];
bio(284).isStruct=false;

bio(285).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1';
bio(285).sigName='';
bio(285).portIdx=0;
bio(285).dim=[1,1];
bio(285).sigWidth=1;
bio(285).sigAddress='&Analog_Solution_B.FilterIntReason1';
bio(285).ndims=2;
bio(285).size=[];
bio(285).isStruct=false;

bio(286).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2';
bio(286).sigName='';
bio(286).portIdx=0;
bio(286).dim=[1,1];
bio(286).sigWidth=1;
bio(286).sigAddress='&Analog_Solution_B.FilterIntReason2';
bio(286).ndims=2;
bio(286).size=[];
bio(286).isStruct=false;

bio(287).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3';
bio(287).sigName='';
bio(287).portIdx=0;
bio(287).dim=[1,1];
bio(287).sigWidth=1;
bio(287).sigAddress='&Analog_Solution_B.FilterIntReason3';
bio(287).ndims=2;
bio(287).size=[];
bio(287).isStruct=false;

bio(288).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4';
bio(288).sigName='';
bio(288).portIdx=0;
bio(288).dim=[1,1];
bio(288).sigWidth=1;
bio(288).sigAddress='&Analog_Solution_B.FilterIntReason4';
bio(288).ndims=2;
bio(288).size=[];
bio(288).isStruct=false;

bio(289).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5';
bio(289).sigName='';
bio(289).portIdx=0;
bio(289).dim=[1,1];
bio(289).sigWidth=1;
bio(289).sigAddress='&Analog_Solution_B.FilterIntReason5';
bio(289).ndims=2;
bio(289).size=[];
bio(289).isStruct=false;

bio(290).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6';
bio(290).sigName='';
bio(290).portIdx=0;
bio(290).dim=[1,1];
bio(290).sigWidth=1;
bio(290).sigAddress='&Analog_Solution_B.FilterIntReason6';
bio(290).ndims=2;
bio(290).size=[];
bio(290).isStruct=false;

bio(291).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7';
bio(291).sigName='';
bio(291).portIdx=0;
bio(291).dim=[1,1];
bio(291).sigWidth=1;
bio(291).sigAddress='&Analog_Solution_B.FilterIntReason7';
bio(291).ndims=2;
bio(291).size=[];
bio(291).isStruct=false;

bio(292).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8';
bio(292).sigName='';
bio(292).portIdx=0;
bio(292).dim=[1,1];
bio(292).sigWidth=1;
bio(292).sigAddress='&Analog_Solution_B.FilterIntReason8';
bio(292).ndims=2;
bio(292).size=[];
bio(292).isStruct=false;

bio(293).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
bio(293).sigName='';
bio(293).portIdx=0;
bio(293).dim=[65,1];
bio(293).sigWidth=65;
bio(293).sigAddress='&Analog_Solution_B.ReadHWFIFO1[0]';
bio(293).ndims=2;
bio(293).size=[];
bio(293).isStruct=false;

bio(294).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
bio(294).sigName='';
bio(294).portIdx=0;
bio(294).dim=[65,1];
bio(294).sigWidth=65;
bio(294).sigAddress='&Analog_Solution_B.ReadHWFIFO2[0]';
bio(294).ndims=2;
bio(294).size=[];
bio(294).isStruct=false;

bio(295).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
bio(295).sigName='';
bio(295).portIdx=0;
bio(295).dim=[65,1];
bio(295).sigWidth=65;
bio(295).sigAddress='&Analog_Solution_B.ReadHWFIFO3[0]';
bio(295).ndims=2;
bio(295).size=[];
bio(295).isStruct=false;

bio(296).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
bio(296).sigName='';
bio(296).portIdx=0;
bio(296).dim=[65,1];
bio(296).sigWidth=65;
bio(296).sigAddress='&Analog_Solution_B.ReadHWFIFO4[0]';
bio(296).ndims=2;
bio(296).size=[];
bio(296).isStruct=false;

bio(297).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1';
bio(297).sigName='';
bio(297).portIdx=0;
bio(297).dim=[4,1];
bio(297).sigWidth=4;
bio(297).sigAddress='&Analog_Solution_B.ReadIntStatus1[0]';
bio(297).ndims=2;
bio(297).size=[];
bio(297).isStruct=false;

function len = getlenBIO
len = 297;

