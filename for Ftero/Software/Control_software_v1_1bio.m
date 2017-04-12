function bio=Control_software_v1_1bio
bio = [];
bio(1).blkName='Auxiliary variables/Sum';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&Control_software_v1_1_B.Sum_a';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Auxiliary variables/Unit Delay';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&Control_software_v1_1_B.UnitDelay';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Logging/Data Type Conversion1';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[6,1];
bio(3).sigWidth=6;
bio(3).sigAddress='&Control_software_v1_1_B.DataTypeConversion1[0]';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Logging/Wall Time 1';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[6,1];
bio(4).sigWidth=6;
bio(4).sigAddress='&Control_software_v1_1_B.WallTime1[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Outputs/Constant1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&Control_software_v1_1_B.Constant1';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Outputs/Constant3';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&Control_software_v1_1_B.Constant3';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Outputs/Relational Operator';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&Control_software_v1_1_B.RelationalOperator_c';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='Outputs/Saturation1';
bio(8).sigName='AO_WinchDriver';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&Control_software_v1_1_B.AO_WinchDriver';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Outputs/Byte Pack';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&Control_software_v1_1_B.BytePack';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Outputs/Byte Unpack1';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&Control_software_v1_1_B.ByteUnpack1';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Outputs/PNM Receive';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&Control_software_v1_1_B.PNMReceive';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Outputs/Switch';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&Control_software_v1_1_B.Switch_g';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Outputs/Switch1';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&Control_software_v1_1_B.Switch1_b';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Spooling_Pos_Controlled/Gain';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&Control_software_v1_1_B.Gain_kk';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Spooling_Pos_Controlled/Gain1';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&Control_software_v1_1_B.Gain1_p';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Spooling_Pos_Controlled/Umrechnung';
bio(16).sigName='SpoolingPosSoll';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&Control_software_v1_1_B.SpoolingPosSoll_o';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Spooling_Pos_Controlled/Relational Operator';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&Control_software_v1_1_B.RelationalOperator_o';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Spooling_Pos_Controlled/Relational Operator1';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&Control_software_v1_1_B.RelationalOperator1_ba';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Spooling_Pos_Controlled/Relational Operator2';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&Control_software_v1_1_B.RelationalOperator2';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Spooling_Pos_Controlled/Relational Operator3';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&Control_software_v1_1_B.RelationalOperator3';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Spooling_Pos_Controlled/Switch';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&Control_software_v1_1_B.Switch_l';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Spooling_Pos_Controlled/Switch1';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&Control_software_v1_1_B.Switch1_l';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Spooling_Pos_Controlled/Switch2';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&Control_software_v1_1_B.Switch2';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Spooling_Pos_Controlled/Switch3';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&Control_software_v1_1_B.Switch3';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Spooling_Pos_Controlled/Delay';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&Control_software_v1_1_B.Delay_a';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Spooling_Pos_Controlled/Delay1';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&Control_software_v1_1_B.Delay1_c';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Spooling_Speed_Controlled/Gain';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&Control_software_v1_1_B.Gain_k';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Spooling_Speed_Controlled/Gain1';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&Control_software_v1_1_B.Gain1_h';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Spooling_Speed_Controlled/Umrechnung';
bio(29).sigName='SpoolingPosSoll';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&Control_software_v1_1_B.SpoolingPosSoll';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Spooling_Speed_Controlled/Umrechnung1';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&Control_software_v1_1_B.Umrechnung1';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Spooling_Speed_Controlled/Relational Operator';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&Control_software_v1_1_B.RelationalOperator';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Spooling_Speed_Controlled/Relational Operator1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&Control_software_v1_1_B.RelationalOperator1_h';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Spooling_Speed_Controlled/Switch';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&Control_software_v1_1_B.Switch_b';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Winch_Conrtol/Sum';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&Control_software_v1_1_B.Sum_k';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Winch_Conrtol/Sum2';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&Control_software_v1_1_B.Sum2';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Winch_Conrtol/Switch';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&Control_software_v1_1_B.Switch_dl';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Winch_Conrtol/Switch1';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&Control_software_v1_1_B.Switch1_i3';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Winch_Conrtol/Switch10';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&Control_software_v1_1_B.Switch10';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Winch_Conrtol/Switch11';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&Control_software_v1_1_B.Switch11';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Winch_Conrtol/Switch8';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&Control_software_v1_1_B.Switch8';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Winch_Conrtol/Switch9';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&Control_software_v1_1_B.Switch9';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Winch_Conrtol/Delay';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&Control_software_v1_1_B.Delay';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Input conditioning and estimators/Subsystem/Gain';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&Control_software_v1_1_B.Gain';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Input conditioning and estimators/Subsystem/Gain1';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&Control_software_v1_1_B.Gain1';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Input conditioning and estimators/Subsystem/Saturation';
bio(45).sigName='CI_JoyS';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&Control_software_v1_1_B.CI_JoyS';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Input conditioning and estimators/Subsystem/Saturation1';
bio(46).sigName='CI_JoyW';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&Control_software_v1_1_B.CI_JoyW';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Input conditioning and estimators/Subsystem/Sum';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&Control_software_v1_1_B.Sum_n';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Input conditioning and estimators/Subsystem/Sum1';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&Control_software_v1_1_B.Sum1';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Input conditioning and estimators/Subsystem/Discrete Transfer Fcn';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&Control_software_v1_1_B.DiscreteTransferFcn';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&Control_software_v1_1_B.DiscreteTransferFcn1';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Input conditioning and estimators/Subsystem1/Gain';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&Control_software_v1_1_B.Gain_k4';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Input conditioning and estimators/Subsystem2/Gain';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&Control_software_v1_1_B.Gain_f';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Input conditioning and estimators/Subsystem2/Gain1';
bio(53).sigName='CI_PotSpd';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&Control_software_v1_1_B.CI_PotSpd';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Input conditioning and estimators/Subsystem2/Saturation';
bio(54).sigName='CI_PotPos';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&Control_software_v1_1_B.CI_PotPos';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Input conditioning and estimators/Subsystem2/Sum';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&Control_software_v1_1_B.Sum_b';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Input conditioning and estimators/Subsystem2/Sum1';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&Control_software_v1_1_B.Sum1_b';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Input conditioning and estimators/Subsystem2/Delay';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&Control_software_v1_1_B.Delay_e';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&Control_software_v1_1_B.DiscreteTransferFcn1_c';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Inputs/Analog Inputs/PCI-6221 AD/p1';
bio(59).sigName='AI_Joy_W';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&Control_software_v1_1_B.AI_Joy_W';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Inputs/Analog Inputs/PCI-6221 AD/p2';
bio(60).sigName='AI_Joy_S';
bio(60).portIdx=1;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&Control_software_v1_1_B.AI_Joy_S';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Inputs/Analog Inputs/PCI-6221 AD/p3';
bio(61).sigName='AI_mot_slide_pos';
bio(61).portIdx=2;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&Control_software_v1_1_B.AI_mot_slide_pos';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Inputs/Analog Inputs/PCI-6221 AD/p4';
bio(62).sigName='AI_mot_winch_pos';
bio(62).portIdx=3;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&Control_software_v1_1_B.AI_mot_winch_pos';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Inputs/Analog Inputs/PCI-6221 AD/p5';
bio(63).sigName='AI_pot_pos';
bio(63).portIdx=4;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&Control_software_v1_1_B.AI_pot_pos';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Inputs/Digital Inputs/PCI 6221 PFI DI ';
bio(64).sigName='DI_SlideLimitB';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&Control_software_v1_1_B.DI_SlideLimitB';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Inputs/Digital Inputs/PCI-6221 DI/p1';
bio(65).sigName='DI_Enable';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&Control_software_v1_1_B.DI_Enable';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Inputs/Digital Inputs/PCI-6221 DI/p2';
bio(66).sigName='DI_WinchMode';
bio(66).portIdx=1;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&Control_software_v1_1_B.DI_WinchMode';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Inputs/Digital Inputs/PCI-6221 DI/p3';
bio(67).sigName='DI_Takeoff';
bio(67).portIdx=2;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&Control_software_v1_1_B.DI_Takeoff';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Inputs/Digital Inputs/PCI-6221 DI/p4';
bio(68).sigName='DI_Landing';
bio(68).portIdx=3;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&Control_software_v1_1_B.DI_Landing';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Inputs/Digital Inputs/PCI-6221 DI/p5';
bio(69).sigName='DI_Operator';
bio(69).portIdx=4;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&Control_software_v1_1_B.DI_Operator';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Inputs/Digital Inputs/PCI-6221 DI/p6';
bio(70).sigName='DI_GliderPres';
bio(70).portIdx=5;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&Control_software_v1_1_B.DI_GliderPres';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Inputs/Digital Inputs/PCI-6221 DI/p7';
bio(71).sigName='DI_SlideLimitF';
bio(71).portIdx=6;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&Control_software_v1_1_B.DI_SlideLimitF';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Inputs/RS232_read/Constant';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&Control_software_v1_1_B.Constant';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Inputs/RS232_read/Constant1';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&Control_software_v1_1_B.Constant1_d';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Inputs/RS232_read/Constant2';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&Control_software_v1_1_B.Constant2_j';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Inputs/RS232_read/Constant3';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&Control_software_v1_1_B.Constant3_h';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Logging/Log_conditioning/Rate Transition';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[22,1];
bio(76).sigWidth=22;
bio(76).sigAddress='&Control_software_v1_1_B.RateTransition_i[0]';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Logging/Time_Scope_trigger/Switch';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&Control_software_v1_1_B.Switch_ku';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Logging/Time_Scope_trigger/Switch1';
bio(78).sigName='Trigger_time';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&Control_software_v1_1_B.Trigger_time';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Winch_Conrtol/Emergency/Gain';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&Control_software_v1_1_B.Gain_j';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Winch_Conrtol/Emergency/Relational Operator';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&Control_software_v1_1_B.RelationalOperator_j';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Winch_Conrtol/Emergency/Relational Operator1';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&Control_software_v1_1_B.RelationalOperator1_b';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Winch_Conrtol/Emergency/Sum';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&Control_software_v1_1_B.Sum_no';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Winch_Conrtol/Emergency/Sum1';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&Control_software_v1_1_B.Sum1_j';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Winch_Conrtol/Emergency/Switch';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&Control_software_v1_1_B.Switch_h';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Winch_Conrtol/Emergency/Switch1';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&Control_software_v1_1_B.Switch1_o';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Winch_Conrtol/Joystick Regelung1/Delay';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&Control_software_v1_1_B.Delay_k';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Winch_Conrtol/Subsystem/Logical Operator';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&Control_software_v1_1_B.LogicalOperator';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Winch_Conrtol/Subsystem/Logical Operator1';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&Control_software_v1_1_B.LogicalOperator1';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Winch_Conrtol/Subsystem/Logical Operator2';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&Control_software_v1_1_B.LogicalOperator2';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Winch_Conrtol/Subsystem/Logical Operator3';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&Control_software_v1_1_B.LogicalOperator3';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Winch_Conrtol/Subsystem/Logical Operator4';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&Control_software_v1_1_B.LogicalOperator4';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Winch_Conrtol/Subsystem/Logical Operator5';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&Control_software_v1_1_B.LogicalOperator5';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Winch_Conrtol/Subsystem/Logical Operator6';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&Control_software_v1_1_B.LogicalOperator6';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Winch_Conrtol/Subsystem/Logical Operator7';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&Control_software_v1_1_B.LogicalOperator7';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Winch_Conrtol/Subsystem/Switch';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&Control_software_v1_1_B.Switch';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Winch_Conrtol/Subsystem/Switch1';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&Control_software_v1_1_B.Switch1_p';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Winch_Conrtol/Subsystem/Switch2';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&Control_software_v1_1_B.Switch2_n';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Winch_Conrtol/Subsystem/Switch3';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&Control_software_v1_1_B.Switch3_b';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Winch_Conrtol/Subsystem/Switch4';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&Control_software_v1_1_B.Switch4';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Winch_Conrtol/Subsystem/Switch5';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&Control_software_v1_1_B.Switch5';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Winch_Conrtol/Subsystem/Switch6';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&Control_software_v1_1_B.Switch6';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Winch_Conrtol/Subsystem/Switch7';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&Control_software_v1_1_B.Switch7';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Winch_Conrtol/Subsystem/Delay1';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&Control_software_v1_1_B.Delay1';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Winch_Conrtol/Subsystem/Delay2';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&Control_software_v1_1_B.Delay2';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Winch_Conrtol/Subsystem/Delay3';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&Control_software_v1_1_B.Delay3';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Winch_Conrtol/Subsystem/Delay4';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&Control_software_v1_1_B.Delay4';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Winch_Conrtol/damper/Gain';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&Control_software_v1_1_B.Gain_fi';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Winch_Conrtol/damper/Sum';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&Control_software_v1_1_B.Sum_m';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Winch_Conrtol/damper/Sum1';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&Control_software_v1_1_B.Sum1_e';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Winch_Conrtol/damper/Switch';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&Control_software_v1_1_B.Switch_c';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Winch_Conrtol/damper/Switch1';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&Control_software_v1_1_B.Switch1_d';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Winch_Conrtol/damper/Delay';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&Control_software_v1_1_B.Delay_kl';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Winch_Conrtol/damper/Delay1';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&Control_software_v1_1_B.Delay1_j';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Gain';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&Control_software_v1_1_B.Gain_m';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Sum';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&Control_software_v1_1_B.Sum_p';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Sum1';
bio(116).sigName='';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&Control_software_v1_1_B.Sum1_n';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1';
bio(117).sigName='CI_WinchPos';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&Control_software_v1_1_B.CI_WinchPos';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[2,1];
bio(118).sigWidth=2;
bio(118).sigAddress='&Control_software_v1_1_B.DiscreteStateSpace[0]';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Gain';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&Control_software_v1_1_B.Gain_g';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Gain1';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&Control_software_v1_1_B.Gain1_d';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Saturation';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&Control_software_v1_1_B.Saturation';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&Control_software_v1_1_B.Saturation1';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&Control_software_v1_1_B.Sum_c';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum1';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&Control_software_v1_1_B.Sum1_nr';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Sum2';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&Control_software_v1_1_B.Sum2_a';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Switch';
bio(126).sigName='WinchMotTorqueEst';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&Control_software_v1_1_B.WinchMotTorqueEst';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn';
bio(127).sigName='WinchMotSpeedEst';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&Control_software_v1_1_B.WinchMotSpeedEst';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='Inputs/RS232_read/Compass_read/Embedded MATLAB Function';
bio(128).sigName='GU_Yaw';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&Control_software_v1_1_B.GU_Yaw';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Inputs/RS232_read/Compass_read/Rate Transition4';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&Control_software_v1_1_B.RateTransition4_p';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[41,1];
bio(130).sigWidth=41;
bio(130).sigAddress='&Control_software_v1_1_B.FIFOASCIIread1[0]';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1';
bio(131).sigName='GU_Lat';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&Control_software_v1_1_B.GU_Lat';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2';
bio(132).sigName='GU_Lon';
bio(132).portIdx=1;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&Control_software_v1_1_B.GU_Lon';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3';
bio(133).sigName='GU_h';
bio(133).portIdx=2;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&Control_software_v1_1_B.GU_h';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4';
bio(134).sigName='Geo_Gu_h';
bio(134).portIdx=3;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&Control_software_v1_1_B.Geo_GU_h';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Inputs/RS232_read/GPS_read/Rate Transition4';
bio(135).sigName='';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&Control_software_v1_1_B.RateTransition4_d';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
bio(136).sigName='';
bio(136).portIdx=0;
bio(136).dim=[91,1];
bio(136).sigWidth=91;
bio(136).sigAddress='&Control_software_v1_1_B.FIFOASCIIread1_k[0]';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Inputs/RS232_read/IMU_read/Rate Transition4';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&Control_software_v1_1_B.RateTransition4_f';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Inputs/RS232_read/IMU_read/FIFO ASCII read ';
bio(138).sigName='';
bio(138).portIdx=0;
bio(138).dim=[1025,1];
bio(138).sigWidth=1025;
bio(138).sigAddress='&Control_software_v1_1_B.FIFOASCIIread[0]';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition';
bio(139).sigName='';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&Control_software_v1_1_B.RateTransition';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=false;

bio(140).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition1';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&Control_software_v1_1_B.RateTransition1';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition2';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&Control_software_v1_1_B.RateTransition2';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition3';
bio(142).sigName='';
bio(142).portIdx=0;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&Control_software_v1_1_B.RateTransition3';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=false;

bio(143).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition4';
bio(143).sigName='';
bio(143).portIdx=0;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&Control_software_v1_1_B.RateTransition4';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition5';
bio(144).sigName='';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&Control_software_v1_1_B.RateTransition5';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition6';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&Control_software_v1_1_B.RateTransition6';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Inputs/RS232_read/QSC-100 F/Rate Transition7';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&Control_software_v1_1_B.RateTransition7';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 1/p1';
bio(147).sigName='';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&Control_software_v1_1_B.FIFOwrite1_o1';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 1/p2';
bio(148).sigName='';
bio(148).portIdx=1;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&Control_software_v1_1_B.FIFOwrite1_o2';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 2/p1';
bio(149).sigName='';
bio(149).portIdx=0;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&Control_software_v1_1_B.FIFOwrite2_o1';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 2/p2';
bio(150).sigName='';
bio(150).portIdx=1;
bio(150).dim=[1,1];
bio(150).sigWidth=1;
bio(150).sigAddress='&Control_software_v1_1_B.FIFOwrite2_o2';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 3/p1';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[1,1];
bio(151).sigWidth=1;
bio(151).sigAddress='&Control_software_v1_1_B.FIFOwrite3_o1';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 3/p2';
bio(152).sigName='';
bio(152).portIdx=1;
bio(152).dim=[1,1];
bio(152).sigWidth=1;
bio(152).sigAddress='&Control_software_v1_1_B.FIFOwrite3_o2';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 4/p1';
bio(153).sigName='';
bio(153).portIdx=0;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&Control_software_v1_1_B.FIFOwrite4_o1';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=false;

bio(154).blkName='Inputs/RS232_read/QSC-100 F/FIFO write 4/p2';
bio(154).sigName='';
bio(154).portIdx=1;
bio(154).dim=[1,1];
bio(154).sigWidth=1;
bio(154).sigAddress='&Control_software_v1_1_B.FIFOwrite4_o2';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain';
bio(155).sigName='';
bio(155).portIdx=0;
bio(155).dim=[1,1];
bio(155).sigWidth=1;
bio(155).sigAddress='&Control_software_v1_1_B.Gain_mz';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&Control_software_v1_1_B.RelationalOperator_a';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator1';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&Control_software_v1_1_B.RelationalOperator1';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=false;

bio(158).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum';
bio(158).sigName='';
bio(158).portIdx=0;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&Control_software_v1_1_B.Sum_my';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum1';
bio(159).sigName='';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&Control_software_v1_1_B.Sum1_k';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=false;

bio(160).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch';
bio(160).sigName='';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&Control_software_v1_1_B.Switch_k';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch1';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&Control_software_v1_1_B.Switch1';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Winch_Conrtol/Joystick Regelung1/damper/Gain';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[1,1];
bio(162).sigWidth=1;
bio(162).sigAddress='&Control_software_v1_1_B.Gain_mu';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Winch_Conrtol/Joystick Regelung1/damper/Sum';
bio(163).sigName='';
bio(163).portIdx=0;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&Control_software_v1_1_B.Sum';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=false;

bio(164).blkName='Winch_Conrtol/Joystick Regelung1/damper/Sum1';
bio(164).sigName='';
bio(164).portIdx=0;
bio(164).dim=[1,1];
bio(164).sigWidth=1;
bio(164).sigAddress='&Control_software_v1_1_B.Sum1_l';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Winch_Conrtol/Joystick Regelung1/damper/Switch';
bio(165).sigName='';
bio(165).portIdx=0;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&Control_software_v1_1_B.Switch_d';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=false;

bio(166).blkName='Winch_Conrtol/Joystick Regelung1/damper/Switch1';
bio(166).sigName='';
bio(166).portIdx=0;
bio(166).dim=[1,1];
bio(166).sigWidth=1;
bio(166).sigAddress='&Control_software_v1_1_B.Switch1_i';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Winch_Conrtol/Joystick Regelung1/damper/Delay';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&Control_software_v1_1_B.Delay_c';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Winch_Conrtol/Joystick Regelung1/damper/Delay1';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&Control_software_v1_1_B.Delay1_h';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Winch_Conrtol/damper/Compare To Zero/Compare';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&Control_software_v1_1_B.Compare_k';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Winch_Conrtol/damper/Compare To Zero1/Compare';
bio(170).sigName='';
bio(170).portIdx=0;
bio(170).dim=[1,1];
bio(170).sigWidth=1;
bio(170).sigAddress='&Control_software_v1_1_B.Compare_m';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function';
bio(171).sigName='';
bio(171).portIdx=0;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&Control_software_v1_1_B.CRC_valid';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Inputs/RS232_read/IMU_read/Data_validation/IMU_data';
bio(172).sigName='';
bio(172).portIdx=0;
bio(172).dim=[38,1];
bio(172).sigWidth=38;
bio(172).sigAddress='&Control_software_v1_1_B.IMU_data[0]';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Compare';
bio(173).sigName='';
bio(173).portIdx=0;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&Control_software_v1_1_B.Compare_b';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Compare';
bio(174).sigName='';
bio(174).portIdx=0;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&Control_software_v1_1_B.Compare';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function';
bio(175).sigName='time';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l.uint32_out';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1';
bio(176).sigName='GPSFlags';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e.uint8_out';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2';
bio(177).sigName='NbSat';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h.uint8_out';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function';
bio(178).sigName='Mx';
bio(178).portIdx=0;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b.sing_out';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1';
bio(179).sigName='My';
bio(179).portIdx=0;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j.sing_out';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3';
bio(180).sigName='Mz';
bio(180).portIdx=0;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps.sing_out';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function';
bio(181).sigName='year';
bio(181).portIdx=0;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a.uint8_out';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1';
bio(182).sigName='nanoseconds';
bio(182).portIdx=0;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c.uint32_out';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2';
bio(183).sigName='month';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p.uint8_out';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3';
bio(184).sigName='day';
bio(184).portIdx=0;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k.uint8_out';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4';
bio(185).sigName='hour';
bio(185).portIdx=0;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h.uint8_out';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5';
bio(186).sigName='min';
bio(186).portIdx=0;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction5.uint8_out';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6';
bio(187).sigName='sec';
bio(187).portIdx=0;
bio(187).dim=[1,1];
bio(187).sigWidth=1;
bio(187).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction6.uint8_out';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function';
bio(188).sigName='Time_sr';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf.uint32_out';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=false;

bio(189).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1';
bio(189).sigName='longitude';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g.int32_out';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=false;

bio(190).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2';
bio(190).sigName='height';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2.int32_out';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=false;

bio(191).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3';
bio(191).sigName='latitude';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw.int32_out';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1';
bio(192).sigName='v_east';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n.int32_out';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2';
bio(193).sigName='v_north';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n.int32_out';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3';
bio(194).sigName='v_down';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o.int32_out';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4';
bio(195).sigName='heading';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g.int32_out';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2';
bio(196).sigName='Altitude';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m.int32_out';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function';
bio(197).sigName='lat_filt';
bio(197).portIdx=0;
bio(197).dim=[1,1];
bio(197).sigWidth=1;
bio(197).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k.double_out';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=false;

bio(198).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1';
bio(198).sigName='long_filt';
bio(198).portIdx=0;
bio(198).dim=[1,1];
bio(198).sigWidth=1;
bio(198).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a.double_out';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=false;

bio(199).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2';
bio(199).sigName='height_filt';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g.double_out';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function';
bio(200).sigName='Vx';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j.sing_out';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1';
bio(201).sigName='Vy';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d.sing_out';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3';
bio(202).sigName='Vz';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n.sing_out';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function';
bio(203).sigName='q1';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g.sing_out';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1';
bio(204).sigName='q2';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1.sing_out';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3';
bio(205).sigName='q3';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3.sing_out';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4';
bio(206).sigName='q4';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction4.sing_out';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

bio(207).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function';
bio(207).sigName='Gx';
bio(207).portIdx=0;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d.sing_out';
bio(207).ndims=2;
bio(207).size=[];
bio(207).isStruct=false;

bio(208).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1';
bio(208).sigName='Gy';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i.sing_out';
bio(208).ndims=2;
bio(208).size=[];
bio(208).isStruct=false;

bio(209).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3';
bio(209).sigName='Gz';
bio(209).portIdx=0;
bio(209).dim=[1,1];
bio(209).sigWidth=1;
bio(209).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p.sing_out';
bio(209).ndims=2;
bio(209).size=[];
bio(209).isStruct=false;

bio(210).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function';
bio(210).sigName='Ax';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f.sing_out';
bio(210).ndims=2;
bio(210).size=[];
bio(210).isStruct=false;

bio(211).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1';
bio(211).sigName='Ay';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p.sing_out';
bio(211).ndims=2;
bio(211).size=[];
bio(211).isStruct=false;

bio(212).blkName='Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3';
bio(212).sigName='Az';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a.sing_out';
bio(212).ndims=2;
bio(212).size=[];
bio(212).isStruct=false;

bio(213).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1';
bio(213).sigName='';
bio(213).portIdx=0;
bio(213).dim=[1,1];
bio(213).sigWidth=1;
bio(213).sigAddress='&Control_software_v1_1_B.Constant1_p';
bio(213).ndims=2;
bio(213).size=[];
bio(213).isStruct=false;

bio(214).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2';
bio(214).sigName='';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&Control_software_v1_1_B.Constant2';
bio(214).ndims=2;
bio(214).size=[];
bio(214).isStruct=false;

bio(215).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3';
bio(215).sigName='';
bio(215).portIdx=0;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&Control_software_v1_1_B.Constant3_o';
bio(215).ndims=2;
bio(215).size=[];
bio(215).isStruct=false;

bio(216).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4';
bio(216).sigName='';
bio(216).portIdx=0;
bio(216).dim=[1,1];
bio(216).sigWidth=1;
bio(216).sigAddress='&Control_software_v1_1_B.Constant4';
bio(216).ndims=2;
bio(216).size=[];
bio(216).isStruct=false;

bio(217).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[1,1];
bio(217).sigWidth=1;
bio(217).sigAddress='&Control_software_v1_1_B.LogicalOperator_c';
bio(217).ndims=2;
bio(217).size=[];
bio(217).isStruct=false;

bio(218).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator';
bio(218).sigName='';
bio(218).portIdx=0;
bio(218).dim=[4,1];
bio(218).sigWidth=4;
bio(218).sigAddress='&Control_software_v1_1_B.RelationalOperator_m[0]';
bio(218).ndims=2;
bio(218).size=[];
bio(218).isStruct=false;

bio(219).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[4,1];
bio(219).sigWidth=4;
bio(219).sigAddress='&Control_software_v1_1_B.BitwiseLogicalOperator[0]';
bio(219).ndims=2;
bio(219).size=[];
bio(219).isStruct=false;

bio(220).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1';
bio(220).sigName='';
bio(220).portIdx=0;
bio(220).dim=[61,1];
bio(220).sigWidth=61;
bio(220).sigAddress='&Control_software_v1_1_B.FIFOread1_o1[0]';
bio(220).ndims=2;
bio(220).size=[];
bio(220).isStruct=false;

bio(221).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2';
bio(221).sigName='';
bio(221).portIdx=1;
bio(221).dim=[1,1];
bio(221).sigWidth=1;
bio(221).sigAddress='&Control_software_v1_1_B.FIFOread1_o2';
bio(221).ndims=2;
bio(221).size=[];
bio(221).isStruct=false;

bio(222).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1';
bio(222).sigName='';
bio(222).portIdx=0;
bio(222).dim=[61,1];
bio(222).sigWidth=61;
bio(222).sigAddress='&Control_software_v1_1_B.FIFOread2_o1[0]';
bio(222).ndims=2;
bio(222).size=[];
bio(222).isStruct=false;

bio(223).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2';
bio(223).sigName='';
bio(223).portIdx=1;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&Control_software_v1_1_B.FIFOread2_o2';
bio(223).ndims=2;
bio(223).size=[];
bio(223).isStruct=false;

bio(224).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1';
bio(224).sigName='';
bio(224).portIdx=0;
bio(224).dim=[61,1];
bio(224).sigWidth=61;
bio(224).sigAddress='&Control_software_v1_1_B.FIFOread3_o1[0]';
bio(224).ndims=2;
bio(224).size=[];
bio(224).isStruct=false;

bio(225).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2';
bio(225).sigName='';
bio(225).portIdx=1;
bio(225).dim=[1,1];
bio(225).sigWidth=1;
bio(225).sigAddress='&Control_software_v1_1_B.FIFOread3_o2';
bio(225).ndims=2;
bio(225).size=[];
bio(225).isStruct=false;

bio(226).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[61,1];
bio(226).sigWidth=61;
bio(226).sigAddress='&Control_software_v1_1_B.FIFOread4_o1[0]';
bio(226).ndims=2;
bio(226).size=[];
bio(226).isStruct=false;

bio(227).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2';
bio(227).sigName='';
bio(227).portIdx=1;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&Control_software_v1_1_B.FIFOread4_o2';
bio(227).ndims=2;
bio(227).size=[];
bio(227).isStruct=false;

bio(228).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
bio(228).sigName='';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&Control_software_v1_1_B.FIFOwrite1';
bio(228).ndims=2;
bio(228).size=[];
bio(228).isStruct=false;

bio(229).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
bio(229).sigName='';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&Control_software_v1_1_B.FIFOwrite2';
bio(229).ndims=2;
bio(229).size=[];
bio(229).isStruct=false;

bio(230).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
bio(230).sigName='';
bio(230).portIdx=0;
bio(230).dim=[1,1];
bio(230).sigWidth=1;
bio(230).sigAddress='&Control_software_v1_1_B.FIFOwrite3';
bio(230).ndims=2;
bio(230).size=[];
bio(230).isStruct=false;

bio(231).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
bio(231).sigName='';
bio(231).portIdx=0;
bio(231).dim=[1,1];
bio(231).sigWidth=1;
bio(231).sigAddress='&Control_software_v1_1_B.FIFOwrite4';
bio(231).ndims=2;
bio(231).size=[];
bio(231).isStruct=false;

bio(232).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1';
bio(232).sigName='';
bio(232).portIdx=0;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&Control_software_v1_1_B.FilterIntReason1';
bio(232).ndims=2;
bio(232).size=[];
bio(232).isStruct=false;

bio(233).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2';
bio(233).sigName='';
bio(233).portIdx=0;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&Control_software_v1_1_B.FilterIntReason2';
bio(233).ndims=2;
bio(233).size=[];
bio(233).isStruct=false;

bio(234).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3';
bio(234).sigName='';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&Control_software_v1_1_B.FilterIntReason3';
bio(234).ndims=2;
bio(234).size=[];
bio(234).isStruct=false;

bio(235).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4';
bio(235).sigName='';
bio(235).portIdx=0;
bio(235).dim=[1,1];
bio(235).sigWidth=1;
bio(235).sigAddress='&Control_software_v1_1_B.FilterIntReason4';
bio(235).ndims=2;
bio(235).size=[];
bio(235).isStruct=false;

bio(236).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5';
bio(236).sigName='';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&Control_software_v1_1_B.FilterIntReason5';
bio(236).ndims=2;
bio(236).size=[];
bio(236).isStruct=false;

bio(237).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6';
bio(237).sigName='';
bio(237).portIdx=0;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&Control_software_v1_1_B.FilterIntReason6';
bio(237).ndims=2;
bio(237).size=[];
bio(237).isStruct=false;

bio(238).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7';
bio(238).sigName='';
bio(238).portIdx=0;
bio(238).dim=[1,1];
bio(238).sigWidth=1;
bio(238).sigAddress='&Control_software_v1_1_B.FilterIntReason7';
bio(238).ndims=2;
bio(238).size=[];
bio(238).isStruct=false;

bio(239).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8';
bio(239).sigName='';
bio(239).portIdx=0;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&Control_software_v1_1_B.FilterIntReason8';
bio(239).ndims=2;
bio(239).size=[];
bio(239).isStruct=false;

bio(240).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
bio(240).sigName='';
bio(240).portIdx=0;
bio(240).dim=[65,1];
bio(240).sigWidth=65;
bio(240).sigAddress='&Control_software_v1_1_B.ReadHWFIFO1[0]';
bio(240).ndims=2;
bio(240).size=[];
bio(240).isStruct=false;

bio(241).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
bio(241).sigName='';
bio(241).portIdx=0;
bio(241).dim=[65,1];
bio(241).sigWidth=65;
bio(241).sigAddress='&Control_software_v1_1_B.ReadHWFIFO2[0]';
bio(241).ndims=2;
bio(241).size=[];
bio(241).isStruct=false;

bio(242).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
bio(242).sigName='';
bio(242).portIdx=0;
bio(242).dim=[65,1];
bio(242).sigWidth=65;
bio(242).sigAddress='&Control_software_v1_1_B.ReadHWFIFO3[0]';
bio(242).ndims=2;
bio(242).size=[];
bio(242).isStruct=false;

bio(243).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
bio(243).sigName='';
bio(243).portIdx=0;
bio(243).dim=[65,1];
bio(243).sigWidth=65;
bio(243).sigAddress='&Control_software_v1_1_B.ReadHWFIFO4[0]';
bio(243).ndims=2;
bio(243).size=[];
bio(243).isStruct=false;

bio(244).blkName='Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1';
bio(244).sigName='';
bio(244).portIdx=0;
bio(244).dim=[4,1];
bio(244).sigWidth=4;
bio(244).sigAddress='&Control_software_v1_1_B.ReadIntStatus1[0]';
bio(244).ndims=2;
bio(244).size=[];
bio(244).isStruct=false;

function len = getlenBIO
len = 244;

