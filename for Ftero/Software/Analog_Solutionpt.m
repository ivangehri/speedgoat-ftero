function pt=Analog_Solutionpt
pt = [];

  
pt(1).blockname = 'Auxiliary variables/Unit Delay';
pt(1).paramname = 'InitialCondition';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'Analog_Solution_P.UnitDelay_InitialCondition';
pt(1).baseaddr   = '&Analog_Solution_P.UnitDelay_InitialCondition';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Logging/Wall Time 1';
pt(2).paramname = 'P1';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'Analog_Solution_P.WallTime1_P1';
pt(2).baseaddr   = '&Analog_Solution_P.WallTime1_P1';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Logging/Wall Time 1';
pt(3).paramname = 'P2';
pt(3).class     = 'vector';
pt(3).nrows     = 1;
pt(3).ncols     = 6;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'Analog_Solution_P.WallTime1_P2';
pt(3).baseaddr   = '&Analog_Solution_P.WallTime1_P2[0]';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Logging/Wall Time 1';
pt(4).paramname = 'P3';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'Analog_Solution_P.WallTime1_P3';
pt(4).baseaddr   = '&Analog_Solution_P.WallTime1_P3';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Logging/Wall Time 1';
pt(5).paramname = 'P4';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'Analog_Solution_P.WallTime1_P4';
pt(5).baseaddr   = '&Analog_Solution_P.WallTime1_P4';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Logging/Wall Time 1';
pt(6).paramname = 'P5';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'Analog_Solution_P.WallTime1_P5';
pt(6).baseaddr   = '&Analog_Solution_P.WallTime1_P5';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Outputs/Constant1';
pt(7).paramname = 'Value';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'Analog_Solution_P.Constant1_Value_b';
pt(7).baseaddr   = '&Analog_Solution_P.Constant1_Value_b';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'Outputs/Constant2';
pt(8).paramname = 'Value';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'Analog_Solution_P.Constant2_Value_f';
pt(8).baseaddr   = '&Analog_Solution_P.Constant2_Value_f';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'Outputs/Constant3';
pt(9).paramname = 'Value';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'Analog_Solution_P.Constant3_Value_n';
pt(9).baseaddr   = '&Analog_Solution_P.Constant3_Value_n';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'Outputs/Constant4';
pt(10).paramname = 'Value';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'Analog_Solution_P.Constant4_Value';
pt(10).baseaddr   = '&Analog_Solution_P.Constant4_Value';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Outputs/Constant6';
pt(11).paramname = 'Value';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'Analog_Solution_P.Constant6_Value';
pt(11).baseaddr   = '&Analog_Solution_P.Constant6_Value';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Outputs/Constant7';
pt(12).paramname = 'Value';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'Analog_Solution_P.Constant7_Value';
pt(12).baseaddr   = '&Analog_Solution_P.Constant7_Value';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Outputs/Constant8';
pt(13).paramname = 'Value';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'Analog_Solution_P.Constant8_Value';
pt(13).baseaddr   = '&Analog_Solution_P.Constant8_Value';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(14).paramname = 'P1';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P1';
pt(14).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P1';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(15).paramname = 'P2';
pt(15).class     = 'vector';
pt(15).nrows     = 1;
pt(15).ncols     = 3;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P2';
pt(15).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P2[0]';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(16).paramname = 'P3';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P3';
pt(16).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P3';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(17).paramname = 'P4';
pt(17).class     = 'vector';
pt(17).nrows     = 1;
pt(17).ncols     = 3;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P4';
pt(17).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P4[0]';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(18).paramname = 'P5';
pt(18).class     = 'vector';
pt(18).nrows     = 1;
pt(18).ncols     = 3;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P5';
pt(18).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P5[0]';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(19).paramname = 'P6';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P6';
pt(19).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P6';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'Outputs/PCI 6221 PFI DO ';
pt(20).paramname = 'P7';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'Analog_Solution_P.PCI6221PFIDO_P7';
pt(20).baseaddr   = '&Analog_Solution_P.PCI6221PFIDO_P7';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'Outputs/PCI-6221 DA';
pt(21).paramname = 'P1';
pt(21).class     = 'vector';
pt(21).nrows     = 1;
pt(21).ncols     = 2;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'Analog_Solution_P.PCI6221DA_P1';
pt(21).baseaddr   = '&Analog_Solution_P.PCI6221DA_P1[0]';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'Outputs/PCI-6221 DA';
pt(22).paramname = 'P2';
pt(22).class     = 'vector';
pt(22).nrows     = 1;
pt(22).ncols     = 2;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'Analog_Solution_P.PCI6221DA_P2';
pt(22).baseaddr   = '&Analog_Solution_P.PCI6221DA_P2[0]';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'Outputs/PCI-6221 DA';
pt(23).paramname = 'P3';
pt(23).class     = 'vector';
pt(23).nrows     = 1;
pt(23).ncols     = 2;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'Analog_Solution_P.PCI6221DA_P3';
pt(23).baseaddr   = '&Analog_Solution_P.PCI6221DA_P3[0]';
pt(23).dtname     = 'real_T';



  
pt(24).blockname = 'Outputs/PCI-6221 DA';
pt(24).paramname = 'P4';
pt(24).class     = 'vector';
pt(24).nrows     = 1;
pt(24).ncols     = 2;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'Analog_Solution_P.PCI6221DA_P4';
pt(24).baseaddr   = '&Analog_Solution_P.PCI6221DA_P4[0]';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'Outputs/PCI-6221 DA';
pt(25).paramname = 'P5';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'Analog_Solution_P.PCI6221DA_P5';
pt(25).baseaddr   = '&Analog_Solution_P.PCI6221DA_P5';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'Outputs/PCI-6221 DA';
pt(26).paramname = 'P6';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'Analog_Solution_P.PCI6221DA_P6';
pt(26).baseaddr   = '&Analog_Solution_P.PCI6221DA_P6';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'Outputs/PCI-6221 DA';
pt(27).paramname = 'P7';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'Analog_Solution_P.PCI6221DA_P7';
pt(27).baseaddr   = '&Analog_Solution_P.PCI6221DA_P7';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Outputs/PCI-6221 DO';
pt(28).paramname = 'P1';
pt(28).class     = 'vector';
pt(28).nrows     = 1;
pt(28).ncols     = 2;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'Analog_Solution_P.PCI6221DO_P1';
pt(28).baseaddr   = '&Analog_Solution_P.PCI6221DO_P1[0]';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'Outputs/PCI-6221 DO';
pt(29).paramname = 'P2';
pt(29).class     = 'vector';
pt(29).nrows     = 1;
pt(29).ncols     = 2;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'Analog_Solution_P.PCI6221DO_P2';
pt(29).baseaddr   = '&Analog_Solution_P.PCI6221DO_P2[0]';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'Outputs/PCI-6221 DO';
pt(30).paramname = 'P3';
pt(30).class     = 'vector';
pt(30).nrows     = 1;
pt(30).ncols     = 2;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'Analog_Solution_P.PCI6221DO_P3';
pt(30).baseaddr   = '&Analog_Solution_P.PCI6221DO_P3[0]';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'Outputs/PCI-6221 DO';
pt(31).paramname = 'P4';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'Analog_Solution_P.PCI6221DO_P4';
pt(31).baseaddr   = '&Analog_Solution_P.PCI6221DO_P4';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Outputs/PCI-6221 DO';
pt(32).paramname = 'P5';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'Analog_Solution_P.PCI6221DO_P5';
pt(32).baseaddr   = '&Analog_Solution_P.PCI6221DO_P5';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'Outputs/PCI-6221 DO';
pt(33).paramname = 'P6';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'Analog_Solution_P.PCI6221DO_P6';
pt(33).baseaddr   = '&Analog_Solution_P.PCI6221DO_P6';
pt(33).dtname     = 'real_T';



  
pt(34).blockname = 'Outputs/PCI-6221 DO';
pt(34).paramname = 'P7';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'Analog_Solution_P.PCI6221DO_P7';
pt(34).baseaddr   = '&Analog_Solution_P.PCI6221DO_P7';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Outputs/Switch1';
pt(35).paramname = 'Threshold';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'Analog_Solution_P.Switch1_Threshold_g';
pt(35).baseaddr   = '&Analog_Solution_P.Switch1_Threshold_g';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Outputs/Switch2';
pt(36).paramname = 'Threshold';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'Analog_Solution_P.Switch2_Threshold_hu';
pt(36).baseaddr   = '&Analog_Solution_P.Switch2_Threshold_hu';
pt(36).dtname     = 'real_T';



  
pt(37).blockname = 'Spooling_Speed_Controlled/Const.';
pt(37).paramname = 'Value';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'Analog_Solution_P.Const_Value';
pt(37).baseaddr   = '&Analog_Solution_P.Const_Value';
pt(37).dtname     = 'real_T';



  
pt(38).blockname = 'Spooling_Speed_Controlled/Constant';
pt(38).paramname = 'Value';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'Analog_Solution_P.Constant_Value';
pt(38).baseaddr   = '&Analog_Solution_P.Constant_Value';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Spooling_Speed_Controlled/Constant1';
pt(39).paramname = 'Value';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'Analog_Solution_P.Constant1_Value';
pt(39).baseaddr   = '&Analog_Solution_P.Constant1_Value';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'Spooling_Speed_Controlled/Constant10';
pt(40).paramname = 'Value';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'Analog_Solution_P.Constant10_Value';
pt(40).baseaddr   = '&Analog_Solution_P.Constant10_Value';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'Spooling_Speed_Controlled/Constant11';
pt(41).paramname = 'Value';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'Analog_Solution_P.Constant11_Value';
pt(41).baseaddr   = '&Analog_Solution_P.Constant11_Value';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Spooling_Speed_Controlled/Constant12';
pt(42).paramname = 'Value';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'Analog_Solution_P.Constant12_Value';
pt(42).baseaddr   = '&Analog_Solution_P.Constant12_Value';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Spooling_Speed_Controlled/Constant13';
pt(43).paramname = 'Value';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'Analog_Solution_P.Constant13_Value';
pt(43).baseaddr   = '&Analog_Solution_P.Constant13_Value';
pt(43).dtname     = 'real_T';



  
pt(44).blockname = 'Spooling_Speed_Controlled/Constant14';
pt(44).paramname = 'Value';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'Analog_Solution_P.Constant14_Value';
pt(44).baseaddr   = '&Analog_Solution_P.Constant14_Value';
pt(44).dtname     = 'real_T';



  
pt(45).blockname = 'Spooling_Speed_Controlled/Constant2';
pt(45).paramname = 'Value';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'Analog_Solution_P.Constant2_Value_i';
pt(45).baseaddr   = '&Analog_Solution_P.Constant2_Value_i';
pt(45).dtname     = 'real_T';



  
pt(46).blockname = 'Spooling_Speed_Controlled/Constant3';
pt(46).paramname = 'Value';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'Analog_Solution_P.Constant3_Value';
pt(46).baseaddr   = '&Analog_Solution_P.Constant3_Value';
pt(46).dtname     = 'real_T';



  
pt(47).blockname = 'Spooling_Speed_Controlled/Constant4';
pt(47).paramname = 'Value';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'Analog_Solution_P.Constant4_Value_e';
pt(47).baseaddr   = '&Analog_Solution_P.Constant4_Value_e';
pt(47).dtname     = 'real_T';



  
pt(48).blockname = 'Spooling_Speed_Controlled/Constant5';
pt(48).paramname = 'Value';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'Analog_Solution_P.Constant5_Value_m';
pt(48).baseaddr   = '&Analog_Solution_P.Constant5_Value_m';
pt(48).dtname     = 'real_T';



  
pt(49).blockname = 'Spooling_Speed_Controlled/Constant6';
pt(49).paramname = 'Value';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'Analog_Solution_P.Constant6_Value_h';
pt(49).baseaddr   = '&Analog_Solution_P.Constant6_Value_h';
pt(49).dtname     = 'real_T';



  
pt(50).blockname = 'Spooling_Speed_Controlled/Constant7';
pt(50).paramname = 'Value';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'Analog_Solution_P.Constant7_Value_m';
pt(50).baseaddr   = '&Analog_Solution_P.Constant7_Value_m';
pt(50).dtname     = 'real_T';



  
pt(51).blockname = 'Spooling_Speed_Controlled/Constant8';
pt(51).paramname = 'Value';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';
pt(51).isStruct  = false;
pt(51).symbol     = 'Analog_Solution_P.Constant8_Value_e';
pt(51).baseaddr   = '&Analog_Solution_P.Constant8_Value_e';
pt(51).dtname     = 'real_T';



  
pt(52).blockname = 'Spooling_Speed_Controlled/Constant9';
pt(52).paramname = 'Value';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';
pt(52).isStruct  = false;
pt(52).symbol     = 'Analog_Solution_P.Constant9_Value';
pt(52).baseaddr   = '&Analog_Solution_P.Constant9_Value';
pt(52).dtname     = 'real_T';



  
pt(53).blockname = 'Spooling_Speed_Controlled/erste Spooling Grenze';
pt(53).paramname = 'Value';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';
pt(53).isStruct  = false;
pt(53).symbol     = 'Analog_Solution_P.ersteSpoolingGrenze_Value';
pt(53).baseaddr   = '&Analog_Solution_P.ersteSpoolingGrenze_Value';
pt(53).dtname     = 'real_T';



  
pt(54).blockname = 'Spooling_Speed_Controlled/untere Spooling Grenze';
pt(54).paramname = 'Value';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';
pt(54).isStruct  = false;
pt(54).symbol     = 'Analog_Solution_P.untereSpoolingGrenze_Value';
pt(54).baseaddr   = '&Analog_Solution_P.untereSpoolingGrenze_Value';
pt(54).dtname     = 'real_T';



  
pt(55).blockname = 'Spooling_Speed_Controlled/Gain';
pt(55).paramname = 'Gain';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';
pt(55).isStruct  = false;
pt(55).symbol     = 'Analog_Solution_P.Gain_Gain_j';
pt(55).baseaddr   = '&Analog_Solution_P.Gain_Gain_j';
pt(55).dtname     = 'real_T';



  
pt(56).blockname = 'Spooling_Speed_Controlled/Gain1';
pt(56).paramname = 'Gain';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_INT8';
pt(56).ndims     = '2';
pt(56).size      = '[]';
pt(56).isStruct  = false;
pt(56).symbol     = 'Analog_Solution_P.Gain1_Gain';
pt(56).baseaddr   = '&Analog_Solution_P.Gain1_Gain';
pt(56).dtname     = 'int8_T';



  
pt(57).blockname = 'Spooling_Speed_Controlled/Umrechnung';
pt(57).paramname = 'Gain';
pt(57).class     = 'scalar';
pt(57).nrows     = 1;
pt(57).ncols     = 1;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';
pt(57).isStruct  = false;
pt(57).symbol     = 'Analog_Solution_P.Umrechnung_Gain';
pt(57).baseaddr   = '&Analog_Solution_P.Umrechnung_Gain';
pt(57).dtname     = 'real_T';



  
pt(58).blockname = 'Spooling_Speed_Controlled/zweite Spooling Grenze';
pt(58).paramname = 'Gain';
pt(58).class     = 'scalar';
pt(58).nrows     = 1;
pt(58).ncols     = 1;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';
pt(58).isStruct  = false;
pt(58).symbol     = 'Analog_Solution_P.zweiteSpoolingGrenze_Gain';
pt(58).baseaddr   = '&Analog_Solution_P.zweiteSpoolingGrenze_Gain';
pt(58).dtname     = 'real_T';



  
pt(59).blockname = 'Spooling_Speed_Controlled/Switch';
pt(59).paramname = 'Threshold';
pt(59).class     = 'scalar';
pt(59).nrows     = 1;
pt(59).ncols     = 1;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';
pt(59).isStruct  = false;
pt(59).symbol     = 'Analog_Solution_P.Switch_Threshold';
pt(59).baseaddr   = '&Analog_Solution_P.Switch_Threshold';
pt(59).dtname     = 'real_T';



  
pt(60).blockname = 'Spooling_Speed_Controlled/Switch2';
pt(60).paramname = 'Threshold';
pt(60).class     = 'scalar';
pt(60).nrows     = 1;
pt(60).ncols     = 1;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';
pt(60).isStruct  = false;
pt(60).symbol     = 'Analog_Solution_P.Switch2_Threshold';
pt(60).baseaddr   = '&Analog_Solution_P.Switch2_Threshold';
pt(60).dtname     = 'real_T';



  
pt(61).blockname = 'Spooling_Speed_Controlled/Switch3';
pt(61).paramname = 'Threshold';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';
pt(61).isStruct  = false;
pt(61).symbol     = 'Analog_Solution_P.Switch3_Threshold_m';
pt(61).baseaddr   = '&Analog_Solution_P.Switch3_Threshold_m';
pt(61).dtname     = 'real_T';



  
pt(62).blockname = 'Spooling_Speed_Controlled/Switch7';
pt(62).paramname = 'Threshold';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';
pt(62).isStruct  = false;
pt(62).symbol     = 'Analog_Solution_P.Switch7_Threshold';
pt(62).baseaddr   = '&Analog_Solution_P.Switch7_Threshold';
pt(62).dtname     = 'real_T';



  
pt(63).blockname = 'Spooling_Speed_Controlled/Delay';
pt(63).paramname = 'DelayLength';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_UINT32';
pt(63).ndims     = '2';
pt(63).size      = '[]';
pt(63).isStruct  = false;
pt(63).symbol     = 'Analog_Solution_P.Delay_DelayLength_c';
pt(63).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_c';
pt(63).dtname     = 'uint32_T';



  
pt(64).blockname = 'Spooling_Speed_Controlled/Delay';
pt(64).paramname = 'InitialCondition';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';
pt(64).isStruct  = false;
pt(64).symbol     = 'Analog_Solution_P.Delay_InitialCondition_b';
pt(64).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_b';
pt(64).dtname     = 'real_T';



  
pt(65).blockname = 'Spooling_Speed_Controlled/Delay1';
pt(65).paramname = 'DelayLength';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_UINT32';
pt(65).ndims     = '2';
pt(65).size      = '[]';
pt(65).isStruct  = false;
pt(65).symbol     = 'Analog_Solution_P.Delay1_DelayLength';
pt(65).baseaddr   = '&Analog_Solution_P.Delay1_DelayLength';
pt(65).dtname     = 'uint32_T';



  
pt(66).blockname = 'Spooling_Speed_Controlled/Delay1';
pt(66).paramname = 'InitialCondition';
pt(66).class     = 'scalar';
pt(66).nrows     = 1;
pt(66).ncols     = 1;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';
pt(66).isStruct  = false;
pt(66).symbol     = 'Analog_Solution_P.Delay1_InitialCondition';
pt(66).baseaddr   = '&Analog_Solution_P.Delay1_InitialCondition';
pt(66).dtname     = 'real_T';



  
pt(67).blockname = 'Startup/Constant';
pt(67).paramname = 'Value';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';
pt(67).isStruct  = false;
pt(67).symbol     = 'Analog_Solution_P.Constant_Value_e';
pt(67).baseaddr   = '&Analog_Solution_P.Constant_Value_e';
pt(67).dtname     = 'real_T';



  
pt(68).blockname = 'Winch_Conrtol/Constant';
pt(68).paramname = 'Value';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';
pt(68).isStruct  = false;
pt(68).symbol     = 'Analog_Solution_P.Constant_Value_n';
pt(68).baseaddr   = '&Analog_Solution_P.Constant_Value_n';
pt(68).dtname     = 'real_T';



  
pt(69).blockname = 'Winch_Conrtol/Constant1';
pt(69).paramname = 'Value';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';
pt(69).isStruct  = false;
pt(69).symbol     = 'Analog_Solution_P.Constant1_Value_p';
pt(69).baseaddr   = '&Analog_Solution_P.Constant1_Value_p';
pt(69).dtname     = 'real_T';



  
pt(70).blockname = 'Winch_Conrtol/Constant2';
pt(70).paramname = 'Value';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';
pt(70).isStruct  = false;
pt(70).symbol     = 'Analog_Solution_P.Constant2_Value_h';
pt(70).baseaddr   = '&Analog_Solution_P.Constant2_Value_h';
pt(70).dtname     = 'real_T';



  
pt(71).blockname = 'Winch_Conrtol/Constant3';
pt(71).paramname = 'Value';
pt(71).class     = 'scalar';
pt(71).nrows     = 1;
pt(71).ncols     = 1;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';
pt(71).isStruct  = false;
pt(71).symbol     = 'Analog_Solution_P.Constant3_Value_a';
pt(71).baseaddr   = '&Analog_Solution_P.Constant3_Value_a';
pt(71).dtname     = 'real_T';



  
pt(72).blockname = 'Winch_Conrtol/konstante Ausrollgeschw.';
pt(72).paramname = 'Value';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';
pt(72).isStruct  = false;
pt(72).symbol     = 'Analog_Solution_P.konstanteAusrollgeschw_Value';
pt(72).baseaddr   = '&Analog_Solution_P.konstanteAusrollgeschw_Value';
pt(72).dtname     = 'real_T';



  
pt(73).blockname = 'Winch_Conrtol/konstante Ausrollgeschw.1';
pt(73).paramname = 'Value';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';
pt(73).isStruct  = false;
pt(73).symbol     = 'Analog_Solution_P.konstanteAusrollgeschw1_Value';
pt(73).baseaddr   = '&Analog_Solution_P.konstanteAusrollgeschw1_Value';
pt(73).dtname     = 'real_T';



  
pt(74).blockname = 'Winch_Conrtol/konstante Einrollgeschw.';
pt(74).paramname = 'Value';
pt(74).class     = 'scalar';
pt(74).nrows     = 1;
pt(74).ncols     = 1;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';
pt(74).isStruct  = false;
pt(74).symbol     = 'Analog_Solution_P.konstanteEinrollgeschw_Value';
pt(74).baseaddr   = '&Analog_Solution_P.konstanteEinrollgeschw_Value';
pt(74).dtname     = 'real_T';



  
pt(75).blockname = 'Winch_Conrtol/Switch';
pt(75).paramname = 'Threshold';
pt(75).class     = 'scalar';
pt(75).nrows     = 1;
pt(75).ncols     = 1;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';
pt(75).isStruct  = false;
pt(75).symbol     = 'Analog_Solution_P.Switch_Threshold_a';
pt(75).baseaddr   = '&Analog_Solution_P.Switch_Threshold_a';
pt(75).dtname     = 'real_T';



  
pt(76).blockname = 'Winch_Conrtol/Switch1';
pt(76).paramname = 'Threshold';
pt(76).class     = 'scalar';
pt(76).nrows     = 1;
pt(76).ncols     = 1;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';
pt(76).isStruct  = false;
pt(76).symbol     = 'Analog_Solution_P.Switch1_Threshold_f';
pt(76).baseaddr   = '&Analog_Solution_P.Switch1_Threshold_f';
pt(76).dtname     = 'real_T';



  
pt(77).blockname = 'Winch_Conrtol/Switch2';
pt(77).paramname = 'Threshold';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';
pt(77).isStruct  = false;
pt(77).symbol     = 'Analog_Solution_P.Switch2_Threshold_h';
pt(77).baseaddr   = '&Analog_Solution_P.Switch2_Threshold_h';
pt(77).dtname     = 'real_T';



  
pt(78).blockname = 'Winch_Conrtol/Delay';
pt(78).paramname = 'DelayLength';
pt(78).class     = 'scalar';
pt(78).nrows     = 1;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_UINT32';
pt(78).ndims     = '2';
pt(78).size      = '[]';
pt(78).isStruct  = false;
pt(78).symbol     = 'Analog_Solution_P.Delay_DelayLength_l';
pt(78).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_l';
pt(78).dtname     = 'uint32_T';



  
pt(79).blockname = 'Winch_Conrtol/Delay';
pt(79).paramname = 'InitialCondition';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';
pt(79).isStruct  = false;
pt(79).symbol     = 'Analog_Solution_P.Delay_InitialCondition_a';
pt(79).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_a';
pt(79).dtname     = 'real_T';



  
pt(80).blockname = 'Input conditioning and estimators/Subsystem/Saturation1';
pt(80).paramname = 'UpperLimit';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';
pt(80).isStruct  = false;
pt(80).symbol     = 'Analog_Solution_P.Saturation1_UpperSat';
pt(80).baseaddr   = '&Analog_Solution_P.Saturation1_UpperSat';
pt(80).dtname     = 'real_T';



  
pt(81).blockname = 'Input conditioning and estimators/Subsystem/Saturation1';
pt(81).paramname = 'LowerLimit';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';
pt(81).isStruct  = false;
pt(81).symbol     = 'Analog_Solution_P.Saturation1_LowerSat';
pt(81).baseaddr   = '&Analog_Solution_P.Saturation1_LowerSat';
pt(81).dtname     = 'real_T';



  
pt(82).blockname = 'Input conditioning and estimators/Subsystem/Discrete Transfer Fcn';
pt(82).paramname = 'InitialStates';
pt(82).class     = 'scalar';
pt(82).nrows     = 1;
pt(82).ncols     = 1;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';
pt(82).isStruct  = false;
pt(82).symbol     = 'Analog_Solution_P.DiscreteTransferFcn_InitialStat';
pt(82).baseaddr   = '&Analog_Solution_P.DiscreteTransferFcn_InitialStat';
pt(82).dtname     = 'real_T';



  
pt(83).blockname = 'Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1';
pt(83).paramname = 'InitialStates';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';
pt(83).isStruct  = false;
pt(83).symbol     = 'Analog_Solution_P.DiscreteTransferFcn1_InitialSta';
pt(83).baseaddr   = '&Analog_Solution_P.DiscreteTransferFcn1_InitialSta';
pt(83).dtname     = 'real_T';



  
pt(84).blockname = 'Input conditioning and estimators/Subsystem1/Gain';
pt(84).paramname = 'Gain';
pt(84).class     = 'scalar';
pt(84).nrows     = 1;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';
pt(84).isStruct  = false;
pt(84).symbol     = 'Analog_Solution_P.Gain_Gain';
pt(84).baseaddr   = '&Analog_Solution_P.Gain_Gain';
pt(84).dtname     = 'real_T';



  
pt(85).blockname = 'Input conditioning and estimators/Subsystem2/Delay';
pt(85).paramname = 'DelayLength';
pt(85).class     = 'scalar';
pt(85).nrows     = 1;
pt(85).ncols     = 1;
pt(85).subsource = 'SS_UINT32';
pt(85).ndims     = '2';
pt(85).size      = '[]';
pt(85).isStruct  = false;
pt(85).symbol     = 'Analog_Solution_P.Delay_DelayLength';
pt(85).baseaddr   = '&Analog_Solution_P.Delay_DelayLength';
pt(85).dtname     = 'uint32_T';



  
pt(86).blockname = 'Input conditioning and estimators/Subsystem2/Delay';
pt(86).paramname = 'InitialCondition';
pt(86).class     = 'scalar';
pt(86).nrows     = 1;
pt(86).ncols     = 1;
pt(86).subsource = 'SS_DOUBLE';
pt(86).ndims     = '2';
pt(86).size      = '[]';
pt(86).isStruct  = false;
pt(86).symbol     = 'Analog_Solution_P.Delay_InitialCondition';
pt(86).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition';
pt(86).dtname     = 'real_T';



  
pt(87).blockname = 'Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1';
pt(87).paramname = 'InitialStates';
pt(87).class     = 'scalar';
pt(87).nrows     = 1;
pt(87).ncols     = 1;
pt(87).subsource = 'SS_DOUBLE';
pt(87).ndims     = '2';
pt(87).size      = '[]';
pt(87).isStruct  = false;
pt(87).symbol     = 'Analog_Solution_P.DiscreteTransferFcn1_InitialS_d';
pt(87).baseaddr   = '&Analog_Solution_P.DiscreteTransferFcn1_InitialS_d';
pt(87).dtname     = 'real_T';



  
pt(88).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(88).paramname = 'P1';
pt(88).class     = 'vector';
pt(88).nrows     = 1;
pt(88).ncols     = 5;
pt(88).subsource = 'SS_DOUBLE';
pt(88).ndims     = '2';
pt(88).size      = '[]';
pt(88).isStruct  = false;
pt(88).symbol     = 'Analog_Solution_P.PCI6221AD_P1';
pt(88).baseaddr   = '&Analog_Solution_P.PCI6221AD_P1[0]';
pt(88).dtname     = 'real_T';



  
pt(89).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(89).paramname = 'P2';
pt(89).class     = 'vector';
pt(89).nrows     = 1;
pt(89).ncols     = 5;
pt(89).subsource = 'SS_DOUBLE';
pt(89).ndims     = '2';
pt(89).size      = '[]';
pt(89).isStruct  = false;
pt(89).symbol     = 'Analog_Solution_P.PCI6221AD_P2';
pt(89).baseaddr   = '&Analog_Solution_P.PCI6221AD_P2[0]';
pt(89).dtname     = 'real_T';



  
pt(90).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(90).paramname = 'P3';
pt(90).class     = 'vector';
pt(90).nrows     = 1;
pt(90).ncols     = 5;
pt(90).subsource = 'SS_DOUBLE';
pt(90).ndims     = '2';
pt(90).size      = '[]';
pt(90).isStruct  = false;
pt(90).symbol     = 'Analog_Solution_P.PCI6221AD_P3';
pt(90).baseaddr   = '&Analog_Solution_P.PCI6221AD_P3[0]';
pt(90).dtname     = 'real_T';



  
pt(91).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(91).paramname = 'P4';
pt(91).class     = 'scalar';
pt(91).nrows     = 1;
pt(91).ncols     = 1;
pt(91).subsource = 'SS_DOUBLE';
pt(91).ndims     = '2';
pt(91).size      = '[]';
pt(91).isStruct  = false;
pt(91).symbol     = 'Analog_Solution_P.PCI6221AD_P4';
pt(91).baseaddr   = '&Analog_Solution_P.PCI6221AD_P4';
pt(91).dtname     = 'real_T';



  
pt(92).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(92).paramname = 'P5';
pt(92).class     = 'scalar';
pt(92).nrows     = 1;
pt(92).ncols     = 1;
pt(92).subsource = 'SS_DOUBLE';
pt(92).ndims     = '2';
pt(92).size      = '[]';
pt(92).isStruct  = false;
pt(92).symbol     = 'Analog_Solution_P.PCI6221AD_P5';
pt(92).baseaddr   = '&Analog_Solution_P.PCI6221AD_P5';
pt(92).dtname     = 'real_T';



  
pt(93).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(93).paramname = 'P6';
pt(93).class     = 'scalar';
pt(93).nrows     = 1;
pt(93).ncols     = 1;
pt(93).subsource = 'SS_DOUBLE';
pt(93).ndims     = '2';
pt(93).size      = '[]';
pt(93).isStruct  = false;
pt(93).symbol     = 'Analog_Solution_P.PCI6221AD_P6';
pt(93).baseaddr   = '&Analog_Solution_P.PCI6221AD_P6';
pt(93).dtname     = 'real_T';



  
pt(94).blockname = 'Inputs/Analog Inputs/PCI-6221 AD';
pt(94).paramname = 'P7';
pt(94).class     = 'scalar';
pt(94).nrows     = 1;
pt(94).ncols     = 1;
pt(94).subsource = 'SS_DOUBLE';
pt(94).ndims     = '2';
pt(94).size      = '[]';
pt(94).isStruct  = false;
pt(94).symbol     = 'Analog_Solution_P.PCI6221AD_P7';
pt(94).baseaddr   = '&Analog_Solution_P.PCI6221AD_P7';
pt(94).dtname     = 'real_T';



  
pt(95).blockname = 'Inputs/Digital Inputs/PCI 6221 PFI DI ';
pt(95).paramname = 'P1';
pt(95).class     = 'scalar';
pt(95).nrows     = 1;
pt(95).ncols     = 1;
pt(95).subsource = 'SS_DOUBLE';
pt(95).ndims     = '2';
pt(95).size      = '[]';
pt(95).isStruct  = false;
pt(95).symbol     = 'Analog_Solution_P.PCI6221PFIDI_P1';
pt(95).baseaddr   = '&Analog_Solution_P.PCI6221PFIDI_P1';
pt(95).dtname     = 'real_T';



  
pt(96).blockname = 'Inputs/Digital Inputs/PCI 6221 PFI DI ';
pt(96).paramname = 'P2';
pt(96).class     = 'scalar';
pt(96).nrows     = 1;
pt(96).ncols     = 1;
pt(96).subsource = 'SS_DOUBLE';
pt(96).ndims     = '2';
pt(96).size      = '[]';
pt(96).isStruct  = false;
pt(96).symbol     = 'Analog_Solution_P.PCI6221PFIDI_P2';
pt(96).baseaddr   = '&Analog_Solution_P.PCI6221PFIDI_P2';
pt(96).dtname     = 'real_T';



  
pt(97).blockname = 'Inputs/Digital Inputs/PCI 6221 PFI DI ';
pt(97).paramname = 'P3';
pt(97).class     = 'scalar';
pt(97).nrows     = 1;
pt(97).ncols     = 1;
pt(97).subsource = 'SS_DOUBLE';
pt(97).ndims     = '2';
pt(97).size      = '[]';
pt(97).isStruct  = false;
pt(97).symbol     = 'Analog_Solution_P.PCI6221PFIDI_P3';
pt(97).baseaddr   = '&Analog_Solution_P.PCI6221PFIDI_P3';
pt(97).dtname     = 'real_T';



  
pt(98).blockname = 'Inputs/Digital Inputs/PCI 6221 PFI DI ';
pt(98).paramname = 'P4';
pt(98).class     = 'scalar';
pt(98).nrows     = 1;
pt(98).ncols     = 1;
pt(98).subsource = 'SS_DOUBLE';
pt(98).ndims     = '2';
pt(98).size      = '[]';
pt(98).isStruct  = false;
pt(98).symbol     = 'Analog_Solution_P.PCI6221PFIDI_P4';
pt(98).baseaddr   = '&Analog_Solution_P.PCI6221PFIDI_P4';
pt(98).dtname     = 'real_T';



  
pt(99).blockname = 'Inputs/Digital Inputs/PCI 6221 PFI DI ';
pt(99).paramname = 'P5';
pt(99).class     = 'scalar';
pt(99).nrows     = 1;
pt(99).ncols     = 1;
pt(99).subsource = 'SS_DOUBLE';
pt(99).ndims     = '2';
pt(99).size      = '[]';
pt(99).isStruct  = false;
pt(99).symbol     = 'Analog_Solution_P.PCI6221PFIDI_P5';
pt(99).baseaddr   = '&Analog_Solution_P.PCI6221PFIDI_P5';
pt(99).dtname     = 'real_T';



  
pt(100).blockname = 'Inputs/Digital Inputs/PCI-6221 DI';
pt(100).paramname = 'P1';
pt(100).class     = 'vector';
pt(100).nrows     = 1;
pt(100).ncols     = 7;
pt(100).subsource = 'SS_DOUBLE';
pt(100).ndims     = '2';
pt(100).size      = '[]';
pt(100).isStruct  = false;
pt(100).symbol     = 'Analog_Solution_P.PCI6221DI_P1';
pt(100).baseaddr   = '&Analog_Solution_P.PCI6221DI_P1[0]';
pt(100).dtname     = 'real_T';



  
pt(101).blockname = 'Inputs/Digital Inputs/PCI-6221 DI';
pt(101).paramname = 'P2';
pt(101).class     = 'scalar';
pt(101).nrows     = 1;
pt(101).ncols     = 1;
pt(101).subsource = 'SS_DOUBLE';
pt(101).ndims     = '2';
pt(101).size      = '[]';
pt(101).isStruct  = false;
pt(101).symbol     = 'Analog_Solution_P.PCI6221DI_P2';
pt(101).baseaddr   = '&Analog_Solution_P.PCI6221DI_P2';
pt(101).dtname     = 'real_T';



  
pt(102).blockname = 'Inputs/Digital Inputs/PCI-6221 DI';
pt(102).paramname = 'P3';
pt(102).class     = 'scalar';
pt(102).nrows     = 1;
pt(102).ncols     = 1;
pt(102).subsource = 'SS_DOUBLE';
pt(102).ndims     = '2';
pt(102).size      = '[]';
pt(102).isStruct  = false;
pt(102).symbol     = 'Analog_Solution_P.PCI6221DI_P3';
pt(102).baseaddr   = '&Analog_Solution_P.PCI6221DI_P3';
pt(102).dtname     = 'real_T';



  
pt(103).blockname = 'Inputs/Digital Inputs/PCI-6221 DI';
pt(103).paramname = 'P4';
pt(103).class     = 'scalar';
pt(103).nrows     = 1;
pt(103).ncols     = 1;
pt(103).subsource = 'SS_DOUBLE';
pt(103).ndims     = '2';
pt(103).size      = '[]';
pt(103).isStruct  = false;
pt(103).symbol     = 'Analog_Solution_P.PCI6221DI_P4';
pt(103).baseaddr   = '&Analog_Solution_P.PCI6221DI_P4';
pt(103).dtname     = 'real_T';



  
pt(104).blockname = 'Inputs/Digital Inputs/PCI-6221 DI';
pt(104).paramname = 'P5';
pt(104).class     = 'scalar';
pt(104).nrows     = 1;
pt(104).ncols     = 1;
pt(104).subsource = 'SS_DOUBLE';
pt(104).ndims     = '2';
pt(104).size      = '[]';
pt(104).isStruct  = false;
pt(104).symbol     = 'Analog_Solution_P.PCI6221DI_P5';
pt(104).baseaddr   = '&Analog_Solution_P.PCI6221DI_P5';
pt(104).dtname     = 'real_T';



  
pt(105).blockname = 'Inputs/RS232_read/Constant';
pt(105).paramname = 'Value';
pt(105).class     = 'scalar';
pt(105).nrows     = 1;
pt(105).ncols     = 1;
pt(105).subsource = 'SS_UINT8';
pt(105).ndims     = '2';
pt(105).size      = '[]';
pt(105).isStruct  = false;
pt(105).symbol     = 'Analog_Solution_P.Constant_Value_bd';
pt(105).baseaddr   = '&Analog_Solution_P.Constant_Value_bd';
pt(105).dtname     = 'uint8_T';



  
pt(106).blockname = 'Inputs/RS232_read/Constant1';
pt(106).paramname = 'Value';
pt(106).class     = 'scalar';
pt(106).nrows     = 1;
pt(106).ncols     = 1;
pt(106).subsource = 'SS_UINT8';
pt(106).ndims     = '2';
pt(106).size      = '[]';
pt(106).isStruct  = false;
pt(106).symbol     = 'Analog_Solution_P.Constant1_Value_c';
pt(106).baseaddr   = '&Analog_Solution_P.Constant1_Value_c';
pt(106).dtname     = 'uint8_T';



  
pt(107).blockname = 'Inputs/RS232_read/Constant2';
pt(107).paramname = 'Value';
pt(107).class     = 'scalar';
pt(107).nrows     = 1;
pt(107).ncols     = 1;
pt(107).subsource = 'SS_UINT8';
pt(107).ndims     = '2';
pt(107).size      = '[]';
pt(107).isStruct  = false;
pt(107).symbol     = 'Analog_Solution_P.Constant2_Value_j';
pt(107).baseaddr   = '&Analog_Solution_P.Constant2_Value_j';
pt(107).dtname     = 'uint8_T';



  
pt(108).blockname = 'Inputs/RS232_read/Constant3';
pt(108).paramname = 'Value';
pt(108).class     = 'scalar';
pt(108).nrows     = 1;
pt(108).ncols     = 1;
pt(108).subsource = 'SS_UINT8';
pt(108).ndims     = '2';
pt(108).size      = '[]';
pt(108).isStruct  = false;
pt(108).symbol     = 'Analog_Solution_P.Constant3_Value_d2';
pt(108).baseaddr   = '&Analog_Solution_P.Constant3_Value_d2';
pt(108).dtname     = 'uint8_T';



  
pt(109).blockname = 'Logging/Time_Scope_trigger/Constant';
pt(109).paramname = 'Value';
pt(109).class     = 'scalar';
pt(109).nrows     = 1;
pt(109).ncols     = 1;
pt(109).subsource = 'SS_DOUBLE';
pt(109).ndims     = '2';
pt(109).size      = '[]';
pt(109).isStruct  = false;
pt(109).symbol     = 'Analog_Solution_P.Constant_Value_d';
pt(109).baseaddr   = '&Analog_Solution_P.Constant_Value_d';
pt(109).dtname     = 'real_T';



  
pt(110).blockname = 'Logging/Time_Scope_trigger/Constant1';
pt(110).paramname = 'Value';
pt(110).class     = 'scalar';
pt(110).nrows     = 1;
pt(110).ncols     = 1;
pt(110).subsource = 'SS_DOUBLE';
pt(110).ndims     = '2';
pt(110).size      = '[]';
pt(110).isStruct  = false;
pt(110).symbol     = 'Analog_Solution_P.Constant1_Value_po';
pt(110).baseaddr   = '&Analog_Solution_P.Constant1_Value_po';
pt(110).dtname     = 'real_T';



  
pt(111).blockname = 'Logging/Time_Scope_trigger/Constant2';
pt(111).paramname = 'Value';
pt(111).class     = 'scalar';
pt(111).nrows     = 1;
pt(111).ncols     = 1;
pt(111).subsource = 'SS_DOUBLE';
pt(111).ndims     = '2';
pt(111).size      = '[]';
pt(111).isStruct  = false;
pt(111).symbol     = 'Analog_Solution_P.Constant2_Value_dl';
pt(111).baseaddr   = '&Analog_Solution_P.Constant2_Value_dl';
pt(111).dtname     = 'real_T';



  
pt(112).blockname = 'Outputs/Subsystem/Constant';
pt(112).paramname = 'Value';
pt(112).class     = 'scalar';
pt(112).nrows     = 1;
pt(112).ncols     = 1;
pt(112).subsource = 'SS_DOUBLE';
pt(112).ndims     = '2';
pt(112).size      = '[]';
pt(112).isStruct  = false;
pt(112).symbol     = 'Analog_Solution_P.Constant_Value_c';
pt(112).baseaddr   = '&Analog_Solution_P.Constant_Value_c';
pt(112).dtname     = 'real_T';



  
pt(113).blockname = 'Outputs/Subsystem/Constant5';
pt(113).paramname = 'Value';
pt(113).class     = 'scalar';
pt(113).nrows     = 1;
pt(113).ncols     = 1;
pt(113).subsource = 'SS_DOUBLE';
pt(113).ndims     = '2';
pt(113).size      = '[]';
pt(113).isStruct  = false;
pt(113).symbol     = 'Analog_Solution_P.Constant5_Value';
pt(113).baseaddr   = '&Analog_Solution_P.Constant5_Value';
pt(113).dtname     = 'real_T';



  
pt(114).blockname = 'Outputs/Subsystem/Obere Grenze';
pt(114).paramname = 'Value';
pt(114).class     = 'scalar';
pt(114).nrows     = 1;
pt(114).ncols     = 1;
pt(114).subsource = 'SS_DOUBLE';
pt(114).ndims     = '2';
pt(114).size      = '[]';
pt(114).isStruct  = false;
pt(114).symbol     = 'Analog_Solution_P.ObereGrenze_Value';
pt(114).baseaddr   = '&Analog_Solution_P.ObereGrenze_Value';
pt(114).dtname     = 'real_T';



  
pt(115).blockname = 'Outputs/Subsystem/Untere Grenze';
pt(115).paramname = 'Value';
pt(115).class     = 'scalar';
pt(115).nrows     = 1;
pt(115).ncols     = 1;
pt(115).subsource = 'SS_DOUBLE';
pt(115).ndims     = '2';
pt(115).size      = '[]';
pt(115).isStruct  = false;
pt(115).symbol     = 'Analog_Solution_P.UntereGrenze_Value';
pt(115).baseaddr   = '&Analog_Solution_P.UntereGrenze_Value';
pt(115).dtname     = 'real_T';



  
pt(116).blockname = 'Spooling_Speed_Controlled/Subsystem/Constant';
pt(116).paramname = 'Value';
pt(116).class     = 'scalar';
pt(116).nrows     = 1;
pt(116).ncols     = 1;
pt(116).subsource = 'SS_DOUBLE';
pt(116).ndims     = '2';
pt(116).size      = '[]';
pt(116).isStruct  = false;
pt(116).symbol     = 'Analog_Solution_P.Constant_Value_b';
pt(116).baseaddr   = '&Analog_Solution_P.Constant_Value_b';
pt(116).dtname     = 'real_T';



  
pt(117).blockname = 'Spooling_Speed_Controlled/Subsystem/Constant1';
pt(117).paramname = 'Value';
pt(117).class     = 'scalar';
pt(117).nrows     = 1;
pt(117).ncols     = 1;
pt(117).subsource = 'SS_DOUBLE';
pt(117).ndims     = '2';
pt(117).size      = '[]';
pt(117).isStruct  = false;
pt(117).symbol     = 'Analog_Solution_P.Constant1_Value_g';
pt(117).baseaddr   = '&Analog_Solution_P.Constant1_Value_g';
pt(117).dtname     = 'real_T';



  
pt(118).blockname = 'Spooling_Speed_Controlled/Subsystem/Constant2';
pt(118).paramname = 'Value';
pt(118).class     = 'scalar';
pt(118).nrows     = 1;
pt(118).ncols     = 1;
pt(118).subsource = 'SS_DOUBLE';
pt(118).ndims     = '2';
pt(118).size      = '[]';
pt(118).isStruct  = false;
pt(118).symbol     = 'Analog_Solution_P.Constant2_Value_d';
pt(118).baseaddr   = '&Analog_Solution_P.Constant2_Value_d';
pt(118).dtname     = 'real_T';



  
pt(119).blockname = 'Spooling_Speed_Controlled/Subsystem/Sample Zeit';
pt(119).paramname = 'Gain';
pt(119).class     = 'scalar';
pt(119).nrows     = 1;
pt(119).ncols     = 1;
pt(119).subsource = 'SS_DOUBLE';
pt(119).ndims     = '2';
pt(119).size      = '[]';
pt(119).isStruct  = false;
pt(119).symbol     = 'Analog_Solution_P.SampleZeit_Gain';
pt(119).baseaddr   = '&Analog_Solution_P.SampleZeit_Gain';
pt(119).dtname     = 'real_T';



  
pt(120).blockname = 'Spooling_Speed_Controlled/Subsystem/Delay';
pt(120).paramname = 'DelayLength';
pt(120).class     = 'scalar';
pt(120).nrows     = 1;
pt(120).ncols     = 1;
pt(120).subsource = 'SS_UINT32';
pt(120).ndims     = '2';
pt(120).size      = '[]';
pt(120).isStruct  = false;
pt(120).symbol     = 'Analog_Solution_P.Delay_DelayLength_o';
pt(120).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_o';
pt(120).dtname     = 'uint32_T';



  
pt(121).blockname = 'Spooling_Speed_Controlled/Subsystem/Delay';
pt(121).paramname = 'InitialCondition';
pt(121).class     = 'scalar';
pt(121).nrows     = 1;
pt(121).ncols     = 1;
pt(121).subsource = 'SS_DOUBLE';
pt(121).ndims     = '2';
pt(121).size      = '[]';
pt(121).isStruct  = false;
pt(121).symbol     = 'Analog_Solution_P.Delay_InitialCondition_bo';
pt(121).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_bo';
pt(121).dtname     = 'real_T';



  
pt(122).blockname = 'Spooling_Speed_Controlled/Subsystem/Delay1';
pt(122).paramname = 'DelayLength';
pt(122).class     = 'scalar';
pt(122).nrows     = 1;
pt(122).ncols     = 1;
pt(122).subsource = 'SS_UINT32';
pt(122).ndims     = '2';
pt(122).size      = '[]';
pt(122).isStruct  = false;
pt(122).symbol     = 'Analog_Solution_P.Delay1_DelayLength_f';
pt(122).baseaddr   = '&Analog_Solution_P.Delay1_DelayLength_f';
pt(122).dtname     = 'uint32_T';



  
pt(123).blockname = 'Spooling_Speed_Controlled/Subsystem/Delay1';
pt(123).paramname = 'InitialCondition';
pt(123).class     = 'scalar';
pt(123).nrows     = 1;
pt(123).ncols     = 1;
pt(123).subsource = 'SS_DOUBLE';
pt(123).ndims     = '2';
pt(123).size      = '[]';
pt(123).isStruct  = false;
pt(123).symbol     = 'Analog_Solution_P.Delay1_InitialCondition_n4';
pt(123).baseaddr   = '&Analog_Solution_P.Delay1_InitialCondition_n4';
pt(123).dtname     = 'real_T';



  
pt(124).blockname = 'Startup/Initialize Spooling Position/Gain';
pt(124).paramname = 'Gain';
pt(124).class     = 'scalar';
pt(124).nrows     = 1;
pt(124).ncols     = 1;
pt(124).subsource = 'SS_DOUBLE';
pt(124).ndims     = '2';
pt(124).size      = '[]';
pt(124).isStruct  = false;
pt(124).symbol     = 'Analog_Solution_P.Gain_Gain_j0';
pt(124).baseaddr   = '&Analog_Solution_P.Gain_Gain_j0';
pt(124).dtname     = 'real_T';



  
pt(125).blockname = 'Winch_Conrtol/Emergency/Beschleunigung';
pt(125).paramname = 'Value';
pt(125).class     = 'scalar';
pt(125).nrows     = 1;
pt(125).ncols     = 1;
pt(125).subsource = 'SS_DOUBLE';
pt(125).ndims     = '2';
pt(125).size      = '[]';
pt(125).isStruct  = false;
pt(125).symbol     = 'Analog_Solution_P.Beschleunigung_Value_o';
pt(125).baseaddr   = '&Analog_Solution_P.Beschleunigung_Value_o';
pt(125).dtname     = 'real_T';



  
pt(126).blockname = 'Winch_Conrtol/Emergency/obere Kraftsensor Grenze';
pt(126).paramname = 'Value';
pt(126).class     = 'scalar';
pt(126).nrows     = 1;
pt(126).ncols     = 1;
pt(126).subsource = 'SS_DOUBLE';
pt(126).ndims     = '2';
pt(126).size      = '[]';
pt(126).isStruct  = false;
pt(126).symbol     = 'Analog_Solution_P.obereKraftsensorGrenze_Value';
pt(126).baseaddr   = '&Analog_Solution_P.obereKraftsensorGrenze_Value';
pt(126).dtname     = 'real_T';



  
pt(127).blockname = 'Winch_Conrtol/Emergency/untere Kraftsensor Grenze';
pt(127).paramname = 'Value';
pt(127).class     = 'scalar';
pt(127).nrows     = 1;
pt(127).ncols     = 1;
pt(127).subsource = 'SS_DOUBLE';
pt(127).ndims     = '2';
pt(127).size      = '[]';
pt(127).isStruct  = false;
pt(127).symbol     = 'Analog_Solution_P.untereKraftsensorGrenze_Value';
pt(127).baseaddr   = '&Analog_Solution_P.untereKraftsensorGrenze_Value';
pt(127).dtname     = 'real_T';



  
pt(128).blockname = 'Winch_Conrtol/Emergency/Gain';
pt(128).paramname = 'Gain';
pt(128).class     = 'scalar';
pt(128).nrows     = 1;
pt(128).ncols     = 1;
pt(128).subsource = 'SS_DOUBLE';
pt(128).ndims     = '2';
pt(128).size      = '[]';
pt(128).isStruct  = false;
pt(128).symbol     = 'Analog_Solution_P.Gain_Gain_p';
pt(128).baseaddr   = '&Analog_Solution_P.Gain_Gain_p';
pt(128).dtname     = 'real_T';



  
pt(129).blockname = 'Winch_Conrtol/Joystick Regelung1/Delay';
pt(129).paramname = 'DelayLength';
pt(129).class     = 'scalar';
pt(129).nrows     = 1;
pt(129).ncols     = 1;
pt(129).subsource = 'SS_UINT32';
pt(129).ndims     = '2';
pt(129).size      = '[]';
pt(129).isStruct  = false;
pt(129).symbol     = 'Analog_Solution_P.Delay_DelayLength_g';
pt(129).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_g';
pt(129).dtname     = 'uint32_T';



  
pt(130).blockname = 'Winch_Conrtol/Joystick Regelung1/Delay';
pt(130).paramname = 'InitialCondition';
pt(130).class     = 'scalar';
pt(130).nrows     = 1;
pt(130).ncols     = 1;
pt(130).subsource = 'SS_DOUBLE';
pt(130).ndims     = '2';
pt(130).size      = '[]';
pt(130).isStruct  = false;
pt(130).symbol     = 'Analog_Solution_P.Delay_InitialCondition_b5';
pt(130).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_b5';
pt(130).dtname     = 'real_T';



  
pt(131).blockname = 'Winch_Conrtol/Subsystem/Constant2';
pt(131).paramname = 'Value';
pt(131).class     = 'scalar';
pt(131).nrows     = 1;
pt(131).ncols     = 1;
pt(131).subsource = 'SS_DOUBLE';
pt(131).ndims     = '2';
pt(131).size      = '[]';
pt(131).isStruct  = false;
pt(131).symbol     = 'Analog_Solution_P.Constant2_Value_k';
pt(131).baseaddr   = '&Analog_Solution_P.Constant2_Value_k';
pt(131).dtname     = 'real_T';



  
pt(132).blockname = 'Winch_Conrtol/Subsystem/Constant3';
pt(132).paramname = 'Value';
pt(132).class     = 'scalar';
pt(132).nrows     = 1;
pt(132).ncols     = 1;
pt(132).subsource = 'SS_DOUBLE';
pt(132).ndims     = '2';
pt(132).size      = '[]';
pt(132).isStruct  = false;
pt(132).symbol     = 'Analog_Solution_P.Constant3_Value_j';
pt(132).baseaddr   = '&Analog_Solution_P.Constant3_Value_j';
pt(132).dtname     = 'real_T';



  
pt(133).blockname = 'Winch_Conrtol/Subsystem/Switch';
pt(133).paramname = 'Threshold';
pt(133).class     = 'scalar';
pt(133).nrows     = 1;
pt(133).ncols     = 1;
pt(133).subsource = 'SS_DOUBLE';
pt(133).ndims     = '2';
pt(133).size      = '[]';
pt(133).isStruct  = false;
pt(133).symbol     = 'Analog_Solution_P.Switch_Threshold_h2';
pt(133).baseaddr   = '&Analog_Solution_P.Switch_Threshold_h2';
pt(133).dtname     = 'real_T';



  
pt(134).blockname = 'Winch_Conrtol/Subsystem/Switch1';
pt(134).paramname = 'Threshold';
pt(134).class     = 'scalar';
pt(134).nrows     = 1;
pt(134).ncols     = 1;
pt(134).subsource = 'SS_DOUBLE';
pt(134).ndims     = '2';
pt(134).size      = '[]';
pt(134).isStruct  = false;
pt(134).symbol     = 'Analog_Solution_P.Switch1_Threshold_e';
pt(134).baseaddr   = '&Analog_Solution_P.Switch1_Threshold_e';
pt(134).dtname     = 'real_T';



  
pt(135).blockname = 'Winch_Conrtol/Subsystem/Switch2';
pt(135).paramname = 'Threshold';
pt(135).class     = 'scalar';
pt(135).nrows     = 1;
pt(135).ncols     = 1;
pt(135).subsource = 'SS_DOUBLE';
pt(135).ndims     = '2';
pt(135).size      = '[]';
pt(135).isStruct  = false;
pt(135).symbol     = 'Analog_Solution_P.Switch2_Threshold_n';
pt(135).baseaddr   = '&Analog_Solution_P.Switch2_Threshold_n';
pt(135).dtname     = 'real_T';



  
pt(136).blockname = 'Winch_Conrtol/Subsystem/Switch3';
pt(136).paramname = 'Threshold';
pt(136).class     = 'scalar';
pt(136).nrows     = 1;
pt(136).ncols     = 1;
pt(136).subsource = 'SS_DOUBLE';
pt(136).ndims     = '2';
pt(136).size      = '[]';
pt(136).isStruct  = false;
pt(136).symbol     = 'Analog_Solution_P.Switch3_Threshold';
pt(136).baseaddr   = '&Analog_Solution_P.Switch3_Threshold';
pt(136).dtname     = 'real_T';



  
pt(137).blockname = 'Winch_Conrtol/Subsystem/Switch4';
pt(137).paramname = 'Threshold';
pt(137).class     = 'scalar';
pt(137).nrows     = 1;
pt(137).ncols     = 1;
pt(137).subsource = 'SS_DOUBLE';
pt(137).ndims     = '2';
pt(137).size      = '[]';
pt(137).isStruct  = false;
pt(137).symbol     = 'Analog_Solution_P.Switch4_Threshold';
pt(137).baseaddr   = '&Analog_Solution_P.Switch4_Threshold';
pt(137).dtname     = 'real_T';



  
pt(138).blockname = 'Winch_Conrtol/Subsystem/Switch5';
pt(138).paramname = 'Threshold';
pt(138).class     = 'scalar';
pt(138).nrows     = 1;
pt(138).ncols     = 1;
pt(138).subsource = 'SS_DOUBLE';
pt(138).ndims     = '2';
pt(138).size      = '[]';
pt(138).isStruct  = false;
pt(138).symbol     = 'Analog_Solution_P.Switch5_Threshold';
pt(138).baseaddr   = '&Analog_Solution_P.Switch5_Threshold';
pt(138).dtname     = 'real_T';



  
pt(139).blockname = 'Winch_Conrtol/Subsystem/Switch6';
pt(139).paramname = 'Threshold';
pt(139).class     = 'scalar';
pt(139).nrows     = 1;
pt(139).ncols     = 1;
pt(139).subsource = 'SS_DOUBLE';
pt(139).ndims     = '2';
pt(139).size      = '[]';
pt(139).isStruct  = false;
pt(139).symbol     = 'Analog_Solution_P.Switch6_Threshold';
pt(139).baseaddr   = '&Analog_Solution_P.Switch6_Threshold';
pt(139).dtname     = 'real_T';



  
pt(140).blockname = 'Winch_Conrtol/Subsystem/Switch7';
pt(140).paramname = 'Threshold';
pt(140).class     = 'scalar';
pt(140).nrows     = 1;
pt(140).ncols     = 1;
pt(140).subsource = 'SS_DOUBLE';
pt(140).ndims     = '2';
pt(140).size      = '[]';
pt(140).isStruct  = false;
pt(140).symbol     = 'Analog_Solution_P.Switch7_Threshold_o';
pt(140).baseaddr   = '&Analog_Solution_P.Switch7_Threshold_o';
pt(140).dtname     = 'real_T';



  
pt(141).blockname = 'Winch_Conrtol/Subsystem/Delay1';
pt(141).paramname = 'DelayLength';
pt(141).class     = 'scalar';
pt(141).nrows     = 1;
pt(141).ncols     = 1;
pt(141).subsource = 'SS_UINT32';
pt(141).ndims     = '2';
pt(141).size      = '[]';
pt(141).isStruct  = false;
pt(141).symbol     = 'Analog_Solution_P.Delay1_DelayLength_d';
pt(141).baseaddr   = '&Analog_Solution_P.Delay1_DelayLength_d';
pt(141).dtname     = 'uint32_T';



  
pt(142).blockname = 'Winch_Conrtol/Subsystem/Delay1';
pt(142).paramname = 'InitialCondition';
pt(142).class     = 'scalar';
pt(142).nrows     = 1;
pt(142).ncols     = 1;
pt(142).subsource = 'SS_DOUBLE';
pt(142).ndims     = '2';
pt(142).size      = '[]';
pt(142).isStruct  = false;
pt(142).symbol     = 'Analog_Solution_P.Delay1_InitialCondition_a';
pt(142).baseaddr   = '&Analog_Solution_P.Delay1_InitialCondition_a';
pt(142).dtname     = 'real_T';



  
pt(143).blockname = 'Winch_Conrtol/Subsystem/Delay2';
pt(143).paramname = 'DelayLength';
pt(143).class     = 'scalar';
pt(143).nrows     = 1;
pt(143).ncols     = 1;
pt(143).subsource = 'SS_UINT32';
pt(143).ndims     = '2';
pt(143).size      = '[]';
pt(143).isStruct  = false;
pt(143).symbol     = 'Analog_Solution_P.Delay2_DelayLength';
pt(143).baseaddr   = '&Analog_Solution_P.Delay2_DelayLength';
pt(143).dtname     = 'uint32_T';



  
pt(144).blockname = 'Winch_Conrtol/Subsystem/Delay2';
pt(144).paramname = 'InitialCondition';
pt(144).class     = 'scalar';
pt(144).nrows     = 1;
pt(144).ncols     = 1;
pt(144).subsource = 'SS_DOUBLE';
pt(144).ndims     = '2';
pt(144).size      = '[]';
pt(144).isStruct  = false;
pt(144).symbol     = 'Analog_Solution_P.Delay2_InitialCondition';
pt(144).baseaddr   = '&Analog_Solution_P.Delay2_InitialCondition';
pt(144).dtname     = 'real_T';



  
pt(145).blockname = 'Winch_Conrtol/Subsystem/Delay3';
pt(145).paramname = 'DelayLength';
pt(145).class     = 'scalar';
pt(145).nrows     = 1;
pt(145).ncols     = 1;
pt(145).subsource = 'SS_UINT32';
pt(145).ndims     = '2';
pt(145).size      = '[]';
pt(145).isStruct  = false;
pt(145).symbol     = 'Analog_Solution_P.Delay3_DelayLength';
pt(145).baseaddr   = '&Analog_Solution_P.Delay3_DelayLength';
pt(145).dtname     = 'uint32_T';



  
pt(146).blockname = 'Winch_Conrtol/Subsystem/Delay3';
pt(146).paramname = 'InitialCondition';
pt(146).class     = 'scalar';
pt(146).nrows     = 1;
pt(146).ncols     = 1;
pt(146).subsource = 'SS_DOUBLE';
pt(146).ndims     = '2';
pt(146).size      = '[]';
pt(146).isStruct  = false;
pt(146).symbol     = 'Analog_Solution_P.Delay3_InitialCondition';
pt(146).baseaddr   = '&Analog_Solution_P.Delay3_InitialCondition';
pt(146).dtname     = 'real_T';



  
pt(147).blockname = 'Winch_Conrtol/Subsystem/Delay4';
pt(147).paramname = 'DelayLength';
pt(147).class     = 'scalar';
pt(147).nrows     = 1;
pt(147).ncols     = 1;
pt(147).subsource = 'SS_UINT32';
pt(147).ndims     = '2';
pt(147).size      = '[]';
pt(147).isStruct  = false;
pt(147).symbol     = 'Analog_Solution_P.Delay4_DelayLength';
pt(147).baseaddr   = '&Analog_Solution_P.Delay4_DelayLength';
pt(147).dtname     = 'uint32_T';



  
pt(148).blockname = 'Winch_Conrtol/Subsystem/Delay4';
pt(148).paramname = 'InitialCondition';
pt(148).class     = 'scalar';
pt(148).nrows     = 1;
pt(148).ncols     = 1;
pt(148).subsource = 'SS_DOUBLE';
pt(148).ndims     = '2';
pt(148).size      = '[]';
pt(148).isStruct  = false;
pt(148).symbol     = 'Analog_Solution_P.Delay4_InitialCondition';
pt(148).baseaddr   = '&Analog_Solution_P.Delay4_InitialCondition';
pt(148).dtname     = 'real_T';



  
pt(149).blockname = 'Winch_Conrtol/damper/Beschleunigung';
pt(149).paramname = 'Value';
pt(149).class     = 'scalar';
pt(149).nrows     = 1;
pt(149).ncols     = 1;
pt(149).subsource = 'SS_DOUBLE';
pt(149).ndims     = '2';
pt(149).size      = '[]';
pt(149).isStruct  = false;
pt(149).symbol     = 'Analog_Solution_P.Beschleunigung_Value';
pt(149).baseaddr   = '&Analog_Solution_P.Beschleunigung_Value';
pt(149).dtname     = 'real_T';



  
pt(150).blockname = 'Winch_Conrtol/damper/Constant1';
pt(150).paramname = 'Value';
pt(150).class     = 'scalar';
pt(150).nrows     = 1;
pt(150).ncols     = 1;
pt(150).subsource = 'SS_DOUBLE';
pt(150).ndims     = '2';
pt(150).size      = '[]';
pt(150).isStruct  = false;
pt(150).symbol     = 'Analog_Solution_P.Constant1_Value_gd';
pt(150).baseaddr   = '&Analog_Solution_P.Constant1_Value_gd';
pt(150).dtname     = 'real_T';



  
pt(151).blockname = 'Winch_Conrtol/damper/Gain';
pt(151).paramname = 'Gain';
pt(151).class     = 'scalar';
pt(151).nrows     = 1;
pt(151).ncols     = 1;
pt(151).subsource = 'SS_DOUBLE';
pt(151).ndims     = '2';
pt(151).size      = '[]';
pt(151).isStruct  = false;
pt(151).symbol     = 'Analog_Solution_P.Gain_Gain_f';
pt(151).baseaddr   = '&Analog_Solution_P.Gain_Gain_f';
pt(151).dtname     = 'real_T';



  
pt(152).blockname = 'Winch_Conrtol/damper/Delay';
pt(152).paramname = 'DelayLength';
pt(152).class     = 'scalar';
pt(152).nrows     = 1;
pt(152).ncols     = 1;
pt(152).subsource = 'SS_UINT32';
pt(152).ndims     = '2';
pt(152).size      = '[]';
pt(152).isStruct  = false;
pt(152).symbol     = 'Analog_Solution_P.Delay_DelayLength_n';
pt(152).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_n';
pt(152).dtname     = 'uint32_T';



  
pt(153).blockname = 'Winch_Conrtol/damper/Delay';
pt(153).paramname = 'InitialCondition';
pt(153).class     = 'scalar';
pt(153).nrows     = 1;
pt(153).ncols     = 1;
pt(153).subsource = 'SS_DOUBLE';
pt(153).ndims     = '2';
pt(153).size      = '[]';
pt(153).isStruct  = false;
pt(153).symbol     = 'Analog_Solution_P.Delay_InitialCondition_c';
pt(153).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_c';
pt(153).dtname     = 'real_T';



  
pt(154).blockname = 'Winch_Conrtol/damper/Delay1';
pt(154).paramname = 'DelayLength';
pt(154).class     = 'scalar';
pt(154).nrows     = 1;
pt(154).ncols     = 1;
pt(154).subsource = 'SS_UINT32';
pt(154).ndims     = '2';
pt(154).size      = '[]';
pt(154).isStruct  = false;
pt(154).symbol     = 'Analog_Solution_P.Delay1_DelayLength_i';
pt(154).baseaddr   = '&Analog_Solution_P.Delay1_DelayLength_i';
pt(154).dtname     = 'uint32_T';



  
pt(155).blockname = 'Winch_Conrtol/damper/Delay1';
pt(155).paramname = 'InitialCondition';
pt(155).class     = 'scalar';
pt(155).nrows     = 1;
pt(155).ncols     = 1;
pt(155).subsource = 'SS_DOUBLE';
pt(155).ndims     = '2';
pt(155).size      = '[]';
pt(155).isStruct  = false;
pt(155).symbol     = 'Analog_Solution_P.Delay1_InitialCondition_a0';
pt(155).baseaddr   = '&Analog_Solution_P.Delay1_InitialCondition_a0';
pt(155).dtname     = 'real_T';



  
pt(156).blockname = 'Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1';
pt(156).paramname = 'InitialStates';
pt(156).class     = 'scalar';
pt(156).nrows     = 1;
pt(156).ncols     = 1;
pt(156).subsource = 'SS_DOUBLE';
pt(156).ndims     = '2';
pt(156).size      = '[]';
pt(156).isStruct  = false;
pt(156).symbol     = 'Analog_Solution_P.DiscreteTransferFcn1_InitialS_h';
pt(156).baseaddr   = '&Analog_Solution_P.DiscreteTransferFcn1_InitialS_h';
pt(156).dtname     = 'real_T';



  
pt(157).blockname = 'Input conditioning and estimators/Subsystem1/Subsystem2/Constant2';
pt(157).paramname = 'Value';
pt(157).class     = 'scalar';
pt(157).nrows     = 1;
pt(157).ncols     = 1;
pt(157).subsource = 'SS_DOUBLE';
pt(157).ndims     = '2';
pt(157).size      = '[]';
pt(157).isStruct  = false;
pt(157).symbol     = 'Analog_Solution_P.Constant2_Value';
pt(157).baseaddr   = '&Analog_Solution_P.Constant2_Value';
pt(157).dtname     = 'real_T';



  
pt(158).blockname = 'Input conditioning and estimators/Subsystem1/Subsystem2/Switch';
pt(158).paramname = 'Threshold';
pt(158).class     = 'scalar';
pt(158).nrows     = 1;
pt(158).ncols     = 1;
pt(158).subsource = 'SS_DOUBLE';
pt(158).ndims     = '2';
pt(158).size      = '[]';
pt(158).isStruct  = false;
pt(158).symbol     = 'Analog_Solution_P.Switch_Threshold_h';
pt(158).baseaddr   = '&Analog_Solution_P.Switch_Threshold_h';
pt(158).dtname     = 'real_T';



  
pt(159).blockname = 'Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn';
pt(159).paramname = 'InitialStates';
pt(159).class     = 'scalar';
pt(159).nrows     = 1;
pt(159).ncols     = 1;
pt(159).subsource = 'SS_DOUBLE';
pt(159).ndims     = '2';
pt(159).size      = '[]';
pt(159).isStruct  = false;
pt(159).symbol     = 'Analog_Solution_P.DiscreteTransferFcn_InitialSt_m';
pt(159).baseaddr   = '&Analog_Solution_P.DiscreteTransferFcn_InitialSt_m';
pt(159).dtname     = 'real_T';



  
pt(160).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(160).paramname = 'P1';
pt(160).class     = 'scalar';
pt(160).nrows     = 1;
pt(160).ncols     = 1;
pt(160).subsource = 'SS_DOUBLE';
pt(160).ndims     = '2';
pt(160).size      = '[]';
pt(160).isStruct  = false;
pt(160).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P1';
pt(160).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P1';
pt(160).dtname     = 'real_T';



  
pt(161).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(161).paramname = 'P2';
pt(161).class     = 'scalar';
pt(161).nrows     = 1;
pt(161).ncols     = 1;
pt(161).subsource = 'SS_DOUBLE';
pt(161).ndims     = '2';
pt(161).size      = '[]';
pt(161).isStruct  = false;
pt(161).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P2';
pt(161).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P2';
pt(161).dtname     = 'real_T';



  
pt(162).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(162).paramname = 'P3';
pt(162).class     = 'scalar';
pt(162).nrows     = 1;
pt(162).ncols     = 1;
pt(162).subsource = 'SS_DOUBLE';
pt(162).ndims     = '2';
pt(162).size      = '[]';
pt(162).isStruct  = false;
pt(162).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P3';
pt(162).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P3';
pt(162).dtname     = 'real_T';



  
pt(163).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(163).paramname = 'P4';
pt(163).class     = 'vector';
pt(163).nrows     = 1;
pt(163).ncols     = 2;
pt(163).subsource = 'SS_DOUBLE';
pt(163).ndims     = '2';
pt(163).size      = '[]';
pt(163).isStruct  = false;
pt(163).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P4';
pt(163).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P4[0]';
pt(163).dtname     = 'real_T';



  
pt(164).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(164).paramname = 'P5';
pt(164).class     = 'scalar';
pt(164).nrows     = 1;
pt(164).ncols     = 1;
pt(164).subsource = 'SS_DOUBLE';
pt(164).ndims     = '2';
pt(164).size      = '[]';
pt(164).isStruct  = false;
pt(164).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P5';
pt(164).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P5';
pt(164).dtname     = 'real_T';



  
pt(165).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(165).paramname = 'P6';
pt(165).class     = 'scalar';
pt(165).nrows     = 1;
pt(165).ncols     = 1;
pt(165).subsource = 'SS_DOUBLE';
pt(165).ndims     = '2';
pt(165).size      = '[]';
pt(165).isStruct  = false;
pt(165).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P6';
pt(165).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P6';
pt(165).dtname     = 'real_T';



  
pt(166).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(166).paramname = 'P7';
pt(166).class     = 'scalar';
pt(166).nrows     = 1;
pt(166).ncols     = 1;
pt(166).subsource = 'SS_DOUBLE';
pt(166).ndims     = '2';
pt(166).size      = '[]';
pt(166).isStruct  = false;
pt(166).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P7';
pt(166).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P7';
pt(166).dtname     = 'real_T';



  
pt(167).blockname = 'Inputs/RS232_read/Compass_read/FIFO ASCII read 1';
pt(167).paramname = 'P8';
pt(167).class     = 'scalar';
pt(167).nrows     = 1;
pt(167).ncols     = 1;
pt(167).subsource = 'SS_DOUBLE';
pt(167).ndims     = '2';
pt(167).size      = '[]';
pt(167).isStruct  = false;
pt(167).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P8';
pt(167).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P8';
pt(167).dtname     = 'real_T';



  
pt(168).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(168).paramname = 'P1';
pt(168).class     = 'scalar';
pt(168).nrows     = 1;
pt(168).ncols     = 1;
pt(168).subsource = 'SS_DOUBLE';
pt(168).ndims     = '2';
pt(168).size      = '[]';
pt(168).isStruct  = false;
pt(168).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P1_l';
pt(168).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P1_l';
pt(168).dtname     = 'real_T';



  
pt(169).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(169).paramname = 'P2';
pt(169).class     = 'scalar';
pt(169).nrows     = 1;
pt(169).ncols     = 1;
pt(169).subsource = 'SS_DOUBLE';
pt(169).ndims     = '2';
pt(169).size      = '[]';
pt(169).isStruct  = false;
pt(169).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P2_b';
pt(169).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P2_b';
pt(169).dtname     = 'real_T';



  
pt(170).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(170).paramname = 'P3';
pt(170).class     = 'scalar';
pt(170).nrows     = 1;
pt(170).ncols     = 1;
pt(170).subsource = 'SS_DOUBLE';
pt(170).ndims     = '2';
pt(170).size      = '[]';
pt(170).isStruct  = false;
pt(170).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P3_n';
pt(170).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P3_n';
pt(170).dtname     = 'real_T';



  
pt(171).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(171).paramname = 'P4';
pt(171).class     = 'vector';
pt(171).nrows     = 1;
pt(171).ncols     = 6;
pt(171).subsource = 'SS_DOUBLE';
pt(171).ndims     = '2';
pt(171).size      = '[]';
pt(171).isStruct  = false;
pt(171).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P4_e';
pt(171).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P4_e[0]';
pt(171).dtname     = 'real_T';



  
pt(172).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(172).paramname = 'P5';
pt(172).class     = 'scalar';
pt(172).nrows     = 1;
pt(172).ncols     = 1;
pt(172).subsource = 'SS_DOUBLE';
pt(172).ndims     = '2';
pt(172).size      = '[]';
pt(172).isStruct  = false;
pt(172).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P5_o';
pt(172).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P5_o';
pt(172).dtname     = 'real_T';



  
pt(173).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(173).paramname = 'P6';
pt(173).class     = 'vector';
pt(173).nrows     = 1;
pt(173).ncols     = 2;
pt(173).subsource = 'SS_DOUBLE';
pt(173).ndims     = '2';
pt(173).size      = '[]';
pt(173).isStruct  = false;
pt(173).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P6_i';
pt(173).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P6_i[0]';
pt(173).dtname     = 'real_T';



  
pt(174).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(174).paramname = 'P7';
pt(174).class     = 'scalar';
pt(174).nrows     = 1;
pt(174).ncols     = 1;
pt(174).subsource = 'SS_DOUBLE';
pt(174).ndims     = '2';
pt(174).size      = '[]';
pt(174).isStruct  = false;
pt(174).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P7_i';
pt(174).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P7_i';
pt(174).dtname     = 'real_T';



  
pt(175).blockname = 'Inputs/RS232_read/GPS_read/FIFO ASCII read 1';
pt(175).paramname = 'P8';
pt(175).class     = 'scalar';
pt(175).nrows     = 1;
pt(175).ncols     = 1;
pt(175).subsource = 'SS_DOUBLE';
pt(175).ndims     = '2';
pt(175).size      = '[]';
pt(175).isStruct  = false;
pt(175).symbol     = 'Analog_Solution_P.FIFOASCIIread1_P8_n';
pt(175).baseaddr   = '&Analog_Solution_P.FIFOASCIIread1_P8_n';
pt(175).dtname     = 'real_T';



  
pt(176).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(176).paramname = 'P1';
pt(176).class     = 'scalar';
pt(176).nrows     = 1;
pt(176).ncols     = 1;
pt(176).subsource = 'SS_DOUBLE';
pt(176).ndims     = '2';
pt(176).size      = '[]';
pt(176).isStruct  = false;
pt(176).symbol     = 'Analog_Solution_P.FIFOASCIIread_P1';
pt(176).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P1';
pt(176).dtname     = 'real_T';



  
pt(177).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(177).paramname = 'P2';
pt(177).class     = 'scalar';
pt(177).nrows     = 1;
pt(177).ncols     = 1;
pt(177).subsource = 'SS_DOUBLE';
pt(177).ndims     = '2';
pt(177).size      = '[]';
pt(177).isStruct  = false;
pt(177).symbol     = 'Analog_Solution_P.FIFOASCIIread_P2';
pt(177).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P2';
pt(177).dtname     = 'real_T';



  
pt(178).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(178).paramname = 'P3';
pt(178).class     = 'scalar';
pt(178).nrows     = 1;
pt(178).ncols     = 1;
pt(178).subsource = 'SS_DOUBLE';
pt(178).ndims     = '2';
pt(178).size      = '[]';
pt(178).isStruct  = false;
pt(178).symbol     = 'Analog_Solution_P.FIFOASCIIread_P3';
pt(178).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P3';
pt(178).dtname     = 'real_T';



  
pt(179).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(179).paramname = 'P4';
pt(179).class     = 'vector';
pt(179).nrows     = 1;
pt(179).ncols     = 4;
pt(179).subsource = 'SS_DOUBLE';
pt(179).ndims     = '2';
pt(179).size      = '[]';
pt(179).isStruct  = false;
pt(179).symbol     = 'Analog_Solution_P.FIFOASCIIread_P4';
pt(179).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P4[0]';
pt(179).dtname     = 'real_T';



  
pt(180).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(180).paramname = 'P5';
pt(180).class     = 'scalar';
pt(180).nrows     = 1;
pt(180).ncols     = 1;
pt(180).subsource = 'SS_DOUBLE';
pt(180).ndims     = '2';
pt(180).size      = '[]';
pt(180).isStruct  = false;
pt(180).symbol     = 'Analog_Solution_P.FIFOASCIIread_P5';
pt(180).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P5';
pt(180).dtname     = 'real_T';



  
pt(181).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(181).paramname = 'P6';
pt(181).class     = 'vector';
pt(181).nrows     = 1;
pt(181).ncols     = 2;
pt(181).subsource = 'SS_DOUBLE';
pt(181).ndims     = '2';
pt(181).size      = '[]';
pt(181).isStruct  = false;
pt(181).symbol     = 'Analog_Solution_P.FIFOASCIIread_P6';
pt(181).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P6[0]';
pt(181).dtname     = 'real_T';



  
pt(182).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(182).paramname = 'P7';
pt(182).class     = 'scalar';
pt(182).nrows     = 1;
pt(182).ncols     = 1;
pt(182).subsource = 'SS_DOUBLE';
pt(182).ndims     = '2';
pt(182).size      = '[]';
pt(182).isStruct  = false;
pt(182).symbol     = 'Analog_Solution_P.FIFOASCIIread_P7';
pt(182).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P7';
pt(182).dtname     = 'real_T';



  
pt(183).blockname = 'Inputs/RS232_read/IMU_read/FIFO ASCII read ';
pt(183).paramname = 'P8';
pt(183).class     = 'scalar';
pt(183).nrows     = 1;
pt(183).ncols     = 1;
pt(183).subsource = 'SS_DOUBLE';
pt(183).ndims     = '2';
pt(183).size      = '[]';
pt(183).isStruct  = false;
pt(183).symbol     = 'Analog_Solution_P.FIFOASCIIread_P8';
pt(183).baseaddr   = '&Analog_Solution_P.FIFOASCIIread_P8';
pt(183).dtname     = 'real_T';



  
pt(184).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 1';
pt(184).paramname = 'P1';
pt(184).class     = 'scalar';
pt(184).nrows     = 1;
pt(184).ncols     = 1;
pt(184).subsource = 'SS_DOUBLE';
pt(184).ndims     = '2';
pt(184).size      = '[]';
pt(184).isStruct  = false;
pt(184).symbol     = 'Analog_Solution_P.EnableTX1_P1';
pt(184).baseaddr   = '&Analog_Solution_P.EnableTX1_P1';
pt(184).dtname     = 'real_T';



  
pt(185).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 1';
pt(185).paramname = 'P2';
pt(185).class     = 'scalar';
pt(185).nrows     = 1;
pt(185).ncols     = 1;
pt(185).subsource = 'SS_DOUBLE';
pt(185).ndims     = '2';
pt(185).size      = '[]';
pt(185).isStruct  = false;
pt(185).symbol     = 'Analog_Solution_P.EnableTX1_P2';
pt(185).baseaddr   = '&Analog_Solution_P.EnableTX1_P2';
pt(185).dtname     = 'real_T';



  
pt(186).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 1';
pt(186).paramname = 'P3';
pt(186).class     = 'scalar';
pt(186).nrows     = 1;
pt(186).ncols     = 1;
pt(186).subsource = 'SS_DOUBLE';
pt(186).ndims     = '2';
pt(186).size      = '[]';
pt(186).isStruct  = false;
pt(186).symbol     = 'Analog_Solution_P.EnableTX1_P3';
pt(186).baseaddr   = '&Analog_Solution_P.EnableTX1_P3';
pt(186).dtname     = 'real_T';



  
pt(187).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 2';
pt(187).paramname = 'P1';
pt(187).class     = 'scalar';
pt(187).nrows     = 1;
pt(187).ncols     = 1;
pt(187).subsource = 'SS_DOUBLE';
pt(187).ndims     = '2';
pt(187).size      = '[]';
pt(187).isStruct  = false;
pt(187).symbol     = 'Analog_Solution_P.EnableTX2_P1';
pt(187).baseaddr   = '&Analog_Solution_P.EnableTX2_P1';
pt(187).dtname     = 'real_T';



  
pt(188).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 2';
pt(188).paramname = 'P2';
pt(188).class     = 'scalar';
pt(188).nrows     = 1;
pt(188).ncols     = 1;
pt(188).subsource = 'SS_DOUBLE';
pt(188).ndims     = '2';
pt(188).size      = '[]';
pt(188).isStruct  = false;
pt(188).symbol     = 'Analog_Solution_P.EnableTX2_P2';
pt(188).baseaddr   = '&Analog_Solution_P.EnableTX2_P2';
pt(188).dtname     = 'real_T';



  
pt(189).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 2';
pt(189).paramname = 'P3';
pt(189).class     = 'scalar';
pt(189).nrows     = 1;
pt(189).ncols     = 1;
pt(189).subsource = 'SS_DOUBLE';
pt(189).ndims     = '2';
pt(189).size      = '[]';
pt(189).isStruct  = false;
pt(189).symbol     = 'Analog_Solution_P.EnableTX2_P3';
pt(189).baseaddr   = '&Analog_Solution_P.EnableTX2_P3';
pt(189).dtname     = 'real_T';



  
pt(190).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 3';
pt(190).paramname = 'P1';
pt(190).class     = 'scalar';
pt(190).nrows     = 1;
pt(190).ncols     = 1;
pt(190).subsource = 'SS_DOUBLE';
pt(190).ndims     = '2';
pt(190).size      = '[]';
pt(190).isStruct  = false;
pt(190).symbol     = 'Analog_Solution_P.EnableTX3_P1';
pt(190).baseaddr   = '&Analog_Solution_P.EnableTX3_P1';
pt(190).dtname     = 'real_T';



  
pt(191).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 3';
pt(191).paramname = 'P2';
pt(191).class     = 'scalar';
pt(191).nrows     = 1;
pt(191).ncols     = 1;
pt(191).subsource = 'SS_DOUBLE';
pt(191).ndims     = '2';
pt(191).size      = '[]';
pt(191).isStruct  = false;
pt(191).symbol     = 'Analog_Solution_P.EnableTX3_P2';
pt(191).baseaddr   = '&Analog_Solution_P.EnableTX3_P2';
pt(191).dtname     = 'real_T';



  
pt(192).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 3';
pt(192).paramname = 'P3';
pt(192).class     = 'scalar';
pt(192).nrows     = 1;
pt(192).ncols     = 1;
pt(192).subsource = 'SS_DOUBLE';
pt(192).ndims     = '2';
pt(192).size      = '[]';
pt(192).isStruct  = false;
pt(192).symbol     = 'Analog_Solution_P.EnableTX3_P3';
pt(192).baseaddr   = '&Analog_Solution_P.EnableTX3_P3';
pt(192).dtname     = 'real_T';



  
pt(193).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 4';
pt(193).paramname = 'P1';
pt(193).class     = 'scalar';
pt(193).nrows     = 1;
pt(193).ncols     = 1;
pt(193).subsource = 'SS_DOUBLE';
pt(193).ndims     = '2';
pt(193).size      = '[]';
pt(193).isStruct  = false;
pt(193).symbol     = 'Analog_Solution_P.EnableTX4_P1';
pt(193).baseaddr   = '&Analog_Solution_P.EnableTX4_P1';
pt(193).dtname     = 'real_T';



  
pt(194).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 4';
pt(194).paramname = 'P2';
pt(194).class     = 'scalar';
pt(194).nrows     = 1;
pt(194).ncols     = 1;
pt(194).subsource = 'SS_DOUBLE';
pt(194).ndims     = '2';
pt(194).size      = '[]';
pt(194).isStruct  = false;
pt(194).symbol     = 'Analog_Solution_P.EnableTX4_P2';
pt(194).baseaddr   = '&Analog_Solution_P.EnableTX4_P2';
pt(194).dtname     = 'real_T';



  
pt(195).blockname = 'Inputs/RS232_read/QSC-100 F/Enable TX 4';
pt(195).paramname = 'P3';
pt(195).class     = 'scalar';
pt(195).nrows     = 1;
pt(195).ncols     = 1;
pt(195).subsource = 'SS_DOUBLE';
pt(195).ndims     = '2';
pt(195).size      = '[]';
pt(195).isStruct  = false;
pt(195).symbol     = 'Analog_Solution_P.EnableTX4_P3';
pt(195).baseaddr   = '&Analog_Solution_P.EnableTX4_P3';
pt(195).dtname     = 'real_T';



  
pt(196).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 1';
pt(196).paramname = 'P1';
pt(196).class     = 'scalar';
pt(196).nrows     = 1;
pt(196).ncols     = 1;
pt(196).subsource = 'SS_DOUBLE';
pt(196).ndims     = '2';
pt(196).size      = '[]';
pt(196).isStruct  = false;
pt(196).symbol     = 'Analog_Solution_P.FIFOwrite1_P1_n';
pt(196).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P1_n';
pt(196).dtname     = 'real_T';



  
pt(197).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 1';
pt(197).paramname = 'P2';
pt(197).class     = 'scalar';
pt(197).nrows     = 1;
pt(197).ncols     = 1;
pt(197).subsource = 'SS_DOUBLE';
pt(197).ndims     = '2';
pt(197).size      = '[]';
pt(197).isStruct  = false;
pt(197).symbol     = 'Analog_Solution_P.FIFOwrite1_P2_o';
pt(197).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P2_o';
pt(197).dtname     = 'real_T';



  
pt(198).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 1';
pt(198).paramname = 'P3';
pt(198).class     = 'scalar';
pt(198).nrows     = 1;
pt(198).ncols     = 1;
pt(198).subsource = 'SS_DOUBLE';
pt(198).ndims     = '2';
pt(198).size      = '[]';
pt(198).isStruct  = false;
pt(198).symbol     = 'Analog_Solution_P.FIFOwrite1_P3_n';
pt(198).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P3_n';
pt(198).dtname     = 'real_T';



  
pt(199).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 1';
pt(199).paramname = 'P4';
pt(199).class     = 'scalar';
pt(199).nrows     = 1;
pt(199).ncols     = 1;
pt(199).subsource = 'SS_DOUBLE';
pt(199).ndims     = '2';
pt(199).size      = '[]';
pt(199).isStruct  = false;
pt(199).symbol     = 'Analog_Solution_P.FIFOwrite1_P4_j';
pt(199).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P4_j';
pt(199).dtname     = 'real_T';



  
pt(200).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 1';
pt(200).paramname = 'P5';
pt(200).class     = 'vector';
pt(200).nrows     = 1;
pt(200).ncols     = 34;
pt(200).subsource = 'SS_DOUBLE';
pt(200).ndims     = '2';
pt(200).size      = '[]';
pt(200).isStruct  = false;
pt(200).symbol     = 'Analog_Solution_P.FIFOwrite1_P5_o';
pt(200).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P5_o[0]';
pt(200).dtname     = 'real_T';



  
pt(201).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 2';
pt(201).paramname = 'P1';
pt(201).class     = 'scalar';
pt(201).nrows     = 1;
pt(201).ncols     = 1;
pt(201).subsource = 'SS_DOUBLE';
pt(201).ndims     = '2';
pt(201).size      = '[]';
pt(201).isStruct  = false;
pt(201).symbol     = 'Analog_Solution_P.FIFOwrite2_P1_l';
pt(201).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P1_l';
pt(201).dtname     = 'real_T';



  
pt(202).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 2';
pt(202).paramname = 'P2';
pt(202).class     = 'scalar';
pt(202).nrows     = 1;
pt(202).ncols     = 1;
pt(202).subsource = 'SS_DOUBLE';
pt(202).ndims     = '2';
pt(202).size      = '[]';
pt(202).isStruct  = false;
pt(202).symbol     = 'Analog_Solution_P.FIFOwrite2_P2_i';
pt(202).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P2_i';
pt(202).dtname     = 'real_T';



  
pt(203).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 2';
pt(203).paramname = 'P3';
pt(203).class     = 'scalar';
pt(203).nrows     = 1;
pt(203).ncols     = 1;
pt(203).subsource = 'SS_DOUBLE';
pt(203).ndims     = '2';
pt(203).size      = '[]';
pt(203).isStruct  = false;
pt(203).symbol     = 'Analog_Solution_P.FIFOwrite2_P3_h';
pt(203).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P3_h';
pt(203).dtname     = 'real_T';



  
pt(204).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 2';
pt(204).paramname = 'P4';
pt(204).class     = 'scalar';
pt(204).nrows     = 1;
pt(204).ncols     = 1;
pt(204).subsource = 'SS_DOUBLE';
pt(204).ndims     = '2';
pt(204).size      = '[]';
pt(204).isStruct  = false;
pt(204).symbol     = 'Analog_Solution_P.FIFOwrite2_P4_d';
pt(204).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P4_d';
pt(204).dtname     = 'real_T';



  
pt(205).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 2';
pt(205).paramname = 'P5';
pt(205).class     = 'vector';
pt(205).nrows     = 1;
pt(205).ncols     = 34;
pt(205).subsource = 'SS_DOUBLE';
pt(205).ndims     = '2';
pt(205).size      = '[]';
pt(205).isStruct  = false;
pt(205).symbol     = 'Analog_Solution_P.FIFOwrite2_P5_g';
pt(205).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P5_g[0]';
pt(205).dtname     = 'real_T';



  
pt(206).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 3';
pt(206).paramname = 'P1';
pt(206).class     = 'scalar';
pt(206).nrows     = 1;
pt(206).ncols     = 1;
pt(206).subsource = 'SS_DOUBLE';
pt(206).ndims     = '2';
pt(206).size      = '[]';
pt(206).isStruct  = false;
pt(206).symbol     = 'Analog_Solution_P.FIFOwrite3_P1_p';
pt(206).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P1_p';
pt(206).dtname     = 'real_T';



  
pt(207).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 3';
pt(207).paramname = 'P2';
pt(207).class     = 'scalar';
pt(207).nrows     = 1;
pt(207).ncols     = 1;
pt(207).subsource = 'SS_DOUBLE';
pt(207).ndims     = '2';
pt(207).size      = '[]';
pt(207).isStruct  = false;
pt(207).symbol     = 'Analog_Solution_P.FIFOwrite3_P2_n';
pt(207).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P2_n';
pt(207).dtname     = 'real_T';



  
pt(208).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 3';
pt(208).paramname = 'P3';
pt(208).class     = 'scalar';
pt(208).nrows     = 1;
pt(208).ncols     = 1;
pt(208).subsource = 'SS_DOUBLE';
pt(208).ndims     = '2';
pt(208).size      = '[]';
pt(208).isStruct  = false;
pt(208).symbol     = 'Analog_Solution_P.FIFOwrite3_P3_k';
pt(208).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P3_k';
pt(208).dtname     = 'real_T';



  
pt(209).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 3';
pt(209).paramname = 'P4';
pt(209).class     = 'scalar';
pt(209).nrows     = 1;
pt(209).ncols     = 1;
pt(209).subsource = 'SS_DOUBLE';
pt(209).ndims     = '2';
pt(209).size      = '[]';
pt(209).isStruct  = false;
pt(209).symbol     = 'Analog_Solution_P.FIFOwrite3_P4_m';
pt(209).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P4_m';
pt(209).dtname     = 'real_T';



  
pt(210).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 3';
pt(210).paramname = 'P5';
pt(210).class     = 'vector';
pt(210).nrows     = 1;
pt(210).ncols     = 34;
pt(210).subsource = 'SS_DOUBLE';
pt(210).ndims     = '2';
pt(210).size      = '[]';
pt(210).isStruct  = false;
pt(210).symbol     = 'Analog_Solution_P.FIFOwrite3_P5_a';
pt(210).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P5_a[0]';
pt(210).dtname     = 'real_T';



  
pt(211).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 4';
pt(211).paramname = 'P1';
pt(211).class     = 'scalar';
pt(211).nrows     = 1;
pt(211).ncols     = 1;
pt(211).subsource = 'SS_DOUBLE';
pt(211).ndims     = '2';
pt(211).size      = '[]';
pt(211).isStruct  = false;
pt(211).symbol     = 'Analog_Solution_P.FIFOwrite4_P1_e';
pt(211).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P1_e';
pt(211).dtname     = 'real_T';



  
pt(212).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 4';
pt(212).paramname = 'P2';
pt(212).class     = 'scalar';
pt(212).nrows     = 1;
pt(212).ncols     = 1;
pt(212).subsource = 'SS_DOUBLE';
pt(212).ndims     = '2';
pt(212).size      = '[]';
pt(212).isStruct  = false;
pt(212).symbol     = 'Analog_Solution_P.FIFOwrite4_P2_n';
pt(212).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P2_n';
pt(212).dtname     = 'real_T';



  
pt(213).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 4';
pt(213).paramname = 'P3';
pt(213).class     = 'scalar';
pt(213).nrows     = 1;
pt(213).ncols     = 1;
pt(213).subsource = 'SS_DOUBLE';
pt(213).ndims     = '2';
pt(213).size      = '[]';
pt(213).isStruct  = false;
pt(213).symbol     = 'Analog_Solution_P.FIFOwrite4_P3_p';
pt(213).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P3_p';
pt(213).dtname     = 'real_T';



  
pt(214).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 4';
pt(214).paramname = 'P4';
pt(214).class     = 'scalar';
pt(214).nrows     = 1;
pt(214).ncols     = 1;
pt(214).subsource = 'SS_DOUBLE';
pt(214).ndims     = '2';
pt(214).size      = '[]';
pt(214).isStruct  = false;
pt(214).symbol     = 'Analog_Solution_P.FIFOwrite4_P4_f';
pt(214).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P4_f';
pt(214).dtname     = 'real_T';



  
pt(215).blockname = 'Inputs/RS232_read/QSC-100 F/FIFO write 4';
pt(215).paramname = 'P5';
pt(215).class     = 'vector';
pt(215).nrows     = 1;
pt(215).ncols     = 34;
pt(215).subsource = 'SS_DOUBLE';
pt(215).ndims     = '2';
pt(215).size      = '[]';
pt(215).isStruct  = false;
pt(215).symbol     = 'Analog_Solution_P.FIFOwrite4_P5_e';
pt(215).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P5_e[0]';
pt(215).dtname     = 'real_T';



  
pt(216).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(216).paramname = 'P1';
pt(216).class     = 'scalar';
pt(216).nrows     = 1;
pt(216).ncols     = 1;
pt(216).subsource = 'SS_DOUBLE';
pt(216).ndims     = '2';
pt(216).size      = '[]';
pt(216).isStruct  = false;
pt(216).symbol     = 'Analog_Solution_P.Setup1_P1';
pt(216).baseaddr   = '&Analog_Solution_P.Setup1_P1';
pt(216).dtname     = 'real_T';



  
pt(217).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(217).paramname = 'P2';
pt(217).class     = 'scalar';
pt(217).nrows     = 1;
pt(217).ncols     = 1;
pt(217).subsource = 'SS_DOUBLE';
pt(217).ndims     = '2';
pt(217).size      = '[]';
pt(217).isStruct  = false;
pt(217).symbol     = 'Analog_Solution_P.Setup1_P2';
pt(217).baseaddr   = '&Analog_Solution_P.Setup1_P2';
pt(217).dtname     = 'real_T';



  
pt(218).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(218).paramname = 'P3';
pt(218).class     = 'scalar';
pt(218).nrows     = 1;
pt(218).ncols     = 1;
pt(218).subsource = 'SS_DOUBLE';
pt(218).ndims     = '2';
pt(218).size      = '[]';
pt(218).isStruct  = false;
pt(218).symbol     = 'Analog_Solution_P.Setup1_P3';
pt(218).baseaddr   = '&Analog_Solution_P.Setup1_P3';
pt(218).dtname     = 'real_T';



  
pt(219).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(219).paramname = 'P4';
pt(219).class     = 'scalar';
pt(219).nrows     = 1;
pt(219).ncols     = 1;
pt(219).subsource = 'SS_DOUBLE';
pt(219).ndims     = '2';
pt(219).size      = '[]';
pt(219).isStruct  = false;
pt(219).symbol     = 'Analog_Solution_P.Setup1_P4';
pt(219).baseaddr   = '&Analog_Solution_P.Setup1_P4';
pt(219).dtname     = 'real_T';



  
pt(220).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(220).paramname = 'P5';
pt(220).class     = 'scalar';
pt(220).nrows     = 1;
pt(220).ncols     = 1;
pt(220).subsource = 'SS_DOUBLE';
pt(220).ndims     = '2';
pt(220).size      = '[]';
pt(220).isStruct  = false;
pt(220).symbol     = 'Analog_Solution_P.Setup1_P5';
pt(220).baseaddr   = '&Analog_Solution_P.Setup1_P5';
pt(220).dtname     = 'real_T';



  
pt(221).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(221).paramname = 'P6';
pt(221).class     = 'scalar';
pt(221).nrows     = 1;
pt(221).ncols     = 1;
pt(221).subsource = 'SS_DOUBLE';
pt(221).ndims     = '2';
pt(221).size      = '[]';
pt(221).isStruct  = false;
pt(221).symbol     = 'Analog_Solution_P.Setup1_P6';
pt(221).baseaddr   = '&Analog_Solution_P.Setup1_P6';
pt(221).dtname     = 'real_T';



  
pt(222).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(222).paramname = 'P7';
pt(222).class     = 'scalar';
pt(222).nrows     = 1;
pt(222).ncols     = 1;
pt(222).subsource = 'SS_DOUBLE';
pt(222).ndims     = '2';
pt(222).size      = '[]';
pt(222).isStruct  = false;
pt(222).symbol     = 'Analog_Solution_P.Setup1_P7';
pt(222).baseaddr   = '&Analog_Solution_P.Setup1_P7';
pt(222).dtname     = 'real_T';



  
pt(223).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(223).paramname = 'P8';
pt(223).class     = 'scalar';
pt(223).nrows     = 1;
pt(223).ncols     = 1;
pt(223).subsource = 'SS_DOUBLE';
pt(223).ndims     = '2';
pt(223).size      = '[]';
pt(223).isStruct  = false;
pt(223).symbol     = 'Analog_Solution_P.Setup1_P8';
pt(223).baseaddr   = '&Analog_Solution_P.Setup1_P8';
pt(223).dtname     = 'real_T';



  
pt(224).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(224).paramname = 'P9';
pt(224).class     = 'scalar';
pt(224).nrows     = 1;
pt(224).ncols     = 1;
pt(224).subsource = 'SS_DOUBLE';
pt(224).ndims     = '2';
pt(224).size      = '[]';
pt(224).isStruct  = false;
pt(224).symbol     = 'Analog_Solution_P.Setup1_P9';
pt(224).baseaddr   = '&Analog_Solution_P.Setup1_P9';
pt(224).dtname     = 'real_T';



  
pt(225).blockname = 'Inputs/RS232_read/QSC-100 F/Setup1';
pt(225).paramname = 'P10';
pt(225).class     = 'scalar';
pt(225).nrows     = 1;
pt(225).ncols     = 1;
pt(225).subsource = 'SS_DOUBLE';
pt(225).ndims     = '2';
pt(225).size      = '[]';
pt(225).isStruct  = false;
pt(225).symbol     = 'Analog_Solution_P.Setup1_P10';
pt(225).baseaddr   = '&Analog_Solution_P.Setup1_P10';
pt(225).dtname     = 'real_T';



  
pt(226).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(226).paramname = 'P1';
pt(226).class     = 'scalar';
pt(226).nrows     = 1;
pt(226).ncols     = 1;
pt(226).subsource = 'SS_DOUBLE';
pt(226).ndims     = '2';
pt(226).size      = '[]';
pt(226).isStruct  = false;
pt(226).symbol     = 'Analog_Solution_P.Setup2_P1';
pt(226).baseaddr   = '&Analog_Solution_P.Setup2_P1';
pt(226).dtname     = 'real_T';



  
pt(227).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(227).paramname = 'P2';
pt(227).class     = 'scalar';
pt(227).nrows     = 1;
pt(227).ncols     = 1;
pt(227).subsource = 'SS_DOUBLE';
pt(227).ndims     = '2';
pt(227).size      = '[]';
pt(227).isStruct  = false;
pt(227).symbol     = 'Analog_Solution_P.Setup2_P2';
pt(227).baseaddr   = '&Analog_Solution_P.Setup2_P2';
pt(227).dtname     = 'real_T';



  
pt(228).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(228).paramname = 'P3';
pt(228).class     = 'scalar';
pt(228).nrows     = 1;
pt(228).ncols     = 1;
pt(228).subsource = 'SS_DOUBLE';
pt(228).ndims     = '2';
pt(228).size      = '[]';
pt(228).isStruct  = false;
pt(228).symbol     = 'Analog_Solution_P.Setup2_P3';
pt(228).baseaddr   = '&Analog_Solution_P.Setup2_P3';
pt(228).dtname     = 'real_T';



  
pt(229).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(229).paramname = 'P4';
pt(229).class     = 'scalar';
pt(229).nrows     = 1;
pt(229).ncols     = 1;
pt(229).subsource = 'SS_DOUBLE';
pt(229).ndims     = '2';
pt(229).size      = '[]';
pt(229).isStruct  = false;
pt(229).symbol     = 'Analog_Solution_P.Setup2_P4';
pt(229).baseaddr   = '&Analog_Solution_P.Setup2_P4';
pt(229).dtname     = 'real_T';



  
pt(230).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(230).paramname = 'P5';
pt(230).class     = 'scalar';
pt(230).nrows     = 1;
pt(230).ncols     = 1;
pt(230).subsource = 'SS_DOUBLE';
pt(230).ndims     = '2';
pt(230).size      = '[]';
pt(230).isStruct  = false;
pt(230).symbol     = 'Analog_Solution_P.Setup2_P5';
pt(230).baseaddr   = '&Analog_Solution_P.Setup2_P5';
pt(230).dtname     = 'real_T';



  
pt(231).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(231).paramname = 'P6';
pt(231).class     = 'scalar';
pt(231).nrows     = 1;
pt(231).ncols     = 1;
pt(231).subsource = 'SS_DOUBLE';
pt(231).ndims     = '2';
pt(231).size      = '[]';
pt(231).isStruct  = false;
pt(231).symbol     = 'Analog_Solution_P.Setup2_P6';
pt(231).baseaddr   = '&Analog_Solution_P.Setup2_P6';
pt(231).dtname     = 'real_T';



  
pt(232).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(232).paramname = 'P7';
pt(232).class     = 'scalar';
pt(232).nrows     = 1;
pt(232).ncols     = 1;
pt(232).subsource = 'SS_DOUBLE';
pt(232).ndims     = '2';
pt(232).size      = '[]';
pt(232).isStruct  = false;
pt(232).symbol     = 'Analog_Solution_P.Setup2_P7';
pt(232).baseaddr   = '&Analog_Solution_P.Setup2_P7';
pt(232).dtname     = 'real_T';



  
pt(233).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(233).paramname = 'P8';
pt(233).class     = 'scalar';
pt(233).nrows     = 1;
pt(233).ncols     = 1;
pt(233).subsource = 'SS_DOUBLE';
pt(233).ndims     = '2';
pt(233).size      = '[]';
pt(233).isStruct  = false;
pt(233).symbol     = 'Analog_Solution_P.Setup2_P8';
pt(233).baseaddr   = '&Analog_Solution_P.Setup2_P8';
pt(233).dtname     = 'real_T';



  
pt(234).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(234).paramname = 'P9';
pt(234).class     = 'scalar';
pt(234).nrows     = 1;
pt(234).ncols     = 1;
pt(234).subsource = 'SS_DOUBLE';
pt(234).ndims     = '2';
pt(234).size      = '[]';
pt(234).isStruct  = false;
pt(234).symbol     = 'Analog_Solution_P.Setup2_P9';
pt(234).baseaddr   = '&Analog_Solution_P.Setup2_P9';
pt(234).dtname     = 'real_T';



  
pt(235).blockname = 'Inputs/RS232_read/QSC-100 F/Setup2';
pt(235).paramname = 'P10';
pt(235).class     = 'scalar';
pt(235).nrows     = 1;
pt(235).ncols     = 1;
pt(235).subsource = 'SS_DOUBLE';
pt(235).ndims     = '2';
pt(235).size      = '[]';
pt(235).isStruct  = false;
pt(235).symbol     = 'Analog_Solution_P.Setup2_P10';
pt(235).baseaddr   = '&Analog_Solution_P.Setup2_P10';
pt(235).dtname     = 'real_T';



  
pt(236).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(236).paramname = 'P1';
pt(236).class     = 'scalar';
pt(236).nrows     = 1;
pt(236).ncols     = 1;
pt(236).subsource = 'SS_DOUBLE';
pt(236).ndims     = '2';
pt(236).size      = '[]';
pt(236).isStruct  = false;
pt(236).symbol     = 'Analog_Solution_P.Setup3_P1';
pt(236).baseaddr   = '&Analog_Solution_P.Setup3_P1';
pt(236).dtname     = 'real_T';



  
pt(237).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(237).paramname = 'P2';
pt(237).class     = 'scalar';
pt(237).nrows     = 1;
pt(237).ncols     = 1;
pt(237).subsource = 'SS_DOUBLE';
pt(237).ndims     = '2';
pt(237).size      = '[]';
pt(237).isStruct  = false;
pt(237).symbol     = 'Analog_Solution_P.Setup3_P2';
pt(237).baseaddr   = '&Analog_Solution_P.Setup3_P2';
pt(237).dtname     = 'real_T';



  
pt(238).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(238).paramname = 'P3';
pt(238).class     = 'scalar';
pt(238).nrows     = 1;
pt(238).ncols     = 1;
pt(238).subsource = 'SS_DOUBLE';
pt(238).ndims     = '2';
pt(238).size      = '[]';
pt(238).isStruct  = false;
pt(238).symbol     = 'Analog_Solution_P.Setup3_P3';
pt(238).baseaddr   = '&Analog_Solution_P.Setup3_P3';
pt(238).dtname     = 'real_T';



  
pt(239).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(239).paramname = 'P4';
pt(239).class     = 'scalar';
pt(239).nrows     = 1;
pt(239).ncols     = 1;
pt(239).subsource = 'SS_DOUBLE';
pt(239).ndims     = '2';
pt(239).size      = '[]';
pt(239).isStruct  = false;
pt(239).symbol     = 'Analog_Solution_P.Setup3_P4';
pt(239).baseaddr   = '&Analog_Solution_P.Setup3_P4';
pt(239).dtname     = 'real_T';



  
pt(240).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(240).paramname = 'P5';
pt(240).class     = 'scalar';
pt(240).nrows     = 1;
pt(240).ncols     = 1;
pt(240).subsource = 'SS_DOUBLE';
pt(240).ndims     = '2';
pt(240).size      = '[]';
pt(240).isStruct  = false;
pt(240).symbol     = 'Analog_Solution_P.Setup3_P5';
pt(240).baseaddr   = '&Analog_Solution_P.Setup3_P5';
pt(240).dtname     = 'real_T';



  
pt(241).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(241).paramname = 'P6';
pt(241).class     = 'scalar';
pt(241).nrows     = 1;
pt(241).ncols     = 1;
pt(241).subsource = 'SS_DOUBLE';
pt(241).ndims     = '2';
pt(241).size      = '[]';
pt(241).isStruct  = false;
pt(241).symbol     = 'Analog_Solution_P.Setup3_P6';
pt(241).baseaddr   = '&Analog_Solution_P.Setup3_P6';
pt(241).dtname     = 'real_T';



  
pt(242).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(242).paramname = 'P7';
pt(242).class     = 'scalar';
pt(242).nrows     = 1;
pt(242).ncols     = 1;
pt(242).subsource = 'SS_DOUBLE';
pt(242).ndims     = '2';
pt(242).size      = '[]';
pt(242).isStruct  = false;
pt(242).symbol     = 'Analog_Solution_P.Setup3_P7';
pt(242).baseaddr   = '&Analog_Solution_P.Setup3_P7';
pt(242).dtname     = 'real_T';



  
pt(243).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(243).paramname = 'P8';
pt(243).class     = 'scalar';
pt(243).nrows     = 1;
pt(243).ncols     = 1;
pt(243).subsource = 'SS_DOUBLE';
pt(243).ndims     = '2';
pt(243).size      = '[]';
pt(243).isStruct  = false;
pt(243).symbol     = 'Analog_Solution_P.Setup3_P8';
pt(243).baseaddr   = '&Analog_Solution_P.Setup3_P8';
pt(243).dtname     = 'real_T';



  
pt(244).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(244).paramname = 'P9';
pt(244).class     = 'scalar';
pt(244).nrows     = 1;
pt(244).ncols     = 1;
pt(244).subsource = 'SS_DOUBLE';
pt(244).ndims     = '2';
pt(244).size      = '[]';
pt(244).isStruct  = false;
pt(244).symbol     = 'Analog_Solution_P.Setup3_P9';
pt(244).baseaddr   = '&Analog_Solution_P.Setup3_P9';
pt(244).dtname     = 'real_T';



  
pt(245).blockname = 'Inputs/RS232_read/QSC-100 F/Setup3';
pt(245).paramname = 'P10';
pt(245).class     = 'scalar';
pt(245).nrows     = 1;
pt(245).ncols     = 1;
pt(245).subsource = 'SS_DOUBLE';
pt(245).ndims     = '2';
pt(245).size      = '[]';
pt(245).isStruct  = false;
pt(245).symbol     = 'Analog_Solution_P.Setup3_P10';
pt(245).baseaddr   = '&Analog_Solution_P.Setup3_P10';
pt(245).dtname     = 'real_T';



  
pt(246).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(246).paramname = 'P1';
pt(246).class     = 'scalar';
pt(246).nrows     = 1;
pt(246).ncols     = 1;
pt(246).subsource = 'SS_DOUBLE';
pt(246).ndims     = '2';
pt(246).size      = '[]';
pt(246).isStruct  = false;
pt(246).symbol     = 'Analog_Solution_P.Setup4_P1';
pt(246).baseaddr   = '&Analog_Solution_P.Setup4_P1';
pt(246).dtname     = 'real_T';



  
pt(247).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(247).paramname = 'P2';
pt(247).class     = 'scalar';
pt(247).nrows     = 1;
pt(247).ncols     = 1;
pt(247).subsource = 'SS_DOUBLE';
pt(247).ndims     = '2';
pt(247).size      = '[]';
pt(247).isStruct  = false;
pt(247).symbol     = 'Analog_Solution_P.Setup4_P2';
pt(247).baseaddr   = '&Analog_Solution_P.Setup4_P2';
pt(247).dtname     = 'real_T';



  
pt(248).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(248).paramname = 'P3';
pt(248).class     = 'scalar';
pt(248).nrows     = 1;
pt(248).ncols     = 1;
pt(248).subsource = 'SS_DOUBLE';
pt(248).ndims     = '2';
pt(248).size      = '[]';
pt(248).isStruct  = false;
pt(248).symbol     = 'Analog_Solution_P.Setup4_P3';
pt(248).baseaddr   = '&Analog_Solution_P.Setup4_P3';
pt(248).dtname     = 'real_T';



  
pt(249).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(249).paramname = 'P4';
pt(249).class     = 'scalar';
pt(249).nrows     = 1;
pt(249).ncols     = 1;
pt(249).subsource = 'SS_DOUBLE';
pt(249).ndims     = '2';
pt(249).size      = '[]';
pt(249).isStruct  = false;
pt(249).symbol     = 'Analog_Solution_P.Setup4_P4';
pt(249).baseaddr   = '&Analog_Solution_P.Setup4_P4';
pt(249).dtname     = 'real_T';



  
pt(250).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(250).paramname = 'P5';
pt(250).class     = 'scalar';
pt(250).nrows     = 1;
pt(250).ncols     = 1;
pt(250).subsource = 'SS_DOUBLE';
pt(250).ndims     = '2';
pt(250).size      = '[]';
pt(250).isStruct  = false;
pt(250).symbol     = 'Analog_Solution_P.Setup4_P5';
pt(250).baseaddr   = '&Analog_Solution_P.Setup4_P5';
pt(250).dtname     = 'real_T';



  
pt(251).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(251).paramname = 'P6';
pt(251).class     = 'scalar';
pt(251).nrows     = 1;
pt(251).ncols     = 1;
pt(251).subsource = 'SS_DOUBLE';
pt(251).ndims     = '2';
pt(251).size      = '[]';
pt(251).isStruct  = false;
pt(251).symbol     = 'Analog_Solution_P.Setup4_P6';
pt(251).baseaddr   = '&Analog_Solution_P.Setup4_P6';
pt(251).dtname     = 'real_T';



  
pt(252).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(252).paramname = 'P7';
pt(252).class     = 'scalar';
pt(252).nrows     = 1;
pt(252).ncols     = 1;
pt(252).subsource = 'SS_DOUBLE';
pt(252).ndims     = '2';
pt(252).size      = '[]';
pt(252).isStruct  = false;
pt(252).symbol     = 'Analog_Solution_P.Setup4_P7';
pt(252).baseaddr   = '&Analog_Solution_P.Setup4_P7';
pt(252).dtname     = 'real_T';



  
pt(253).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(253).paramname = 'P8';
pt(253).class     = 'scalar';
pt(253).nrows     = 1;
pt(253).ncols     = 1;
pt(253).subsource = 'SS_DOUBLE';
pt(253).ndims     = '2';
pt(253).size      = '[]';
pt(253).isStruct  = false;
pt(253).symbol     = 'Analog_Solution_P.Setup4_P8';
pt(253).baseaddr   = '&Analog_Solution_P.Setup4_P8';
pt(253).dtname     = 'real_T';



  
pt(254).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(254).paramname = 'P9';
pt(254).class     = 'scalar';
pt(254).nrows     = 1;
pt(254).ncols     = 1;
pt(254).subsource = 'SS_DOUBLE';
pt(254).ndims     = '2';
pt(254).size      = '[]';
pt(254).isStruct  = false;
pt(254).symbol     = 'Analog_Solution_P.Setup4_P9';
pt(254).baseaddr   = '&Analog_Solution_P.Setup4_P9';
pt(254).dtname     = 'real_T';



  
pt(255).blockname = 'Inputs/RS232_read/QSC-100 F/Setup4';
pt(255).paramname = 'P10';
pt(255).class     = 'scalar';
pt(255).nrows     = 1;
pt(255).ncols     = 1;
pt(255).subsource = 'SS_DOUBLE';
pt(255).ndims     = '2';
pt(255).size      = '[]';
pt(255).isStruct  = false;
pt(255).symbol     = 'Analog_Solution_P.Setup4_P10';
pt(255).baseaddr   = '&Analog_Solution_P.Setup4_P10';
pt(255).dtname     = 'real_T';



  
pt(256).blockname = 'Outputs/Joystick Regelung1/Joystick-Steuerung/Const';
pt(256).paramname = 'Value';
pt(256).class     = 'scalar';
pt(256).nrows     = 1;
pt(256).ncols     = 1;
pt(256).subsource = 'SS_DOUBLE';
pt(256).ndims     = '2';
pt(256).size      = '[]';
pt(256).isStruct  = false;
pt(256).symbol     = 'Analog_Solution_P.Const_Value_n';
pt(256).baseaddr   = '&Analog_Solution_P.Const_Value_n';
pt(256).dtname     = 'real_T';



  
pt(257).blockname = 'Outputs/Joystick Regelung1/Joystick-Steuerung/Speed';
pt(257).paramname = 'Value';
pt(257).class     = 'scalar';
pt(257).nrows     = 1;
pt(257).ncols     = 1;
pt(257).subsource = 'SS_DOUBLE';
pt(257).ndims     = '2';
pt(257).size      = '[]';
pt(257).isStruct  = false;
pt(257).symbol     = 'Analog_Solution_P.Speed_Value';
pt(257).baseaddr   = '&Analog_Solution_P.Speed_Value';
pt(257).dtname     = 'real_T';



  
pt(258).blockname = 'Outputs/Joystick Regelung1/Joystick-Steuerung/obere Grenze';
pt(258).paramname = 'Value';
pt(258).class     = 'scalar';
pt(258).nrows     = 1;
pt(258).ncols     = 1;
pt(258).subsource = 'SS_DOUBLE';
pt(258).ndims     = '2';
pt(258).size      = '[]';
pt(258).isStruct  = false;
pt(258).symbol     = 'Analog_Solution_P.obereGrenze_Value';
pt(258).baseaddr   = '&Analog_Solution_P.obereGrenze_Value';
pt(258).dtname     = 'real_T';



  
pt(259).blockname = 'Outputs/Joystick Regelung1/Joystick-Steuerung/untere Grenze';
pt(259).paramname = 'Value';
pt(259).class     = 'scalar';
pt(259).nrows     = 1;
pt(259).ncols     = 1;
pt(259).subsource = 'SS_DOUBLE';
pt(259).ndims     = '2';
pt(259).size      = '[]';
pt(259).isStruct  = false;
pt(259).symbol     = 'Analog_Solution_P.untereGrenze_Value';
pt(259).baseaddr   = '&Analog_Solution_P.untereGrenze_Value';
pt(259).dtname     = 'real_T';



  
pt(260).blockname = 'Outputs/Joystick Regelung1/Joystick-Steuerung/Gain';
pt(260).paramname = 'Gain';
pt(260).class     = 'scalar';
pt(260).nrows     = 1;
pt(260).ncols     = 1;
pt(260).subsource = 'SS_DOUBLE';
pt(260).ndims     = '2';
pt(260).size      = '[]';
pt(260).isStruct  = false;
pt(260).symbol     = 'Analog_Solution_P.Gain_Gain_d';
pt(260).baseaddr   = '&Analog_Solution_P.Gain_Gain_d';
pt(260).dtname     = 'real_T';



  
pt(261).blockname = 'Startup/Initialize Spooling Position/FirstDirectionDone?/Constant1';
pt(261).paramname = 'Value';
pt(261).class     = 'scalar';
pt(261).nrows     = 1;
pt(261).ncols     = 1;
pt(261).subsource = 'SS_DOUBLE';
pt(261).ndims     = '2';
pt(261).size      = '[]';
pt(261).isStruct  = false;
pt(261).symbol     = 'Analog_Solution_P.Constant1_Value_e';
pt(261).baseaddr   = '&Analog_Solution_P.Constant1_Value_e';
pt(261).dtname     = 'real_T';



  
pt(262).blockname = 'Startup/Initialize Spooling Position/FirstDirectionDone?/Constant2';
pt(262).paramname = 'Value';
pt(262).class     = 'scalar';
pt(262).nrows     = 1;
pt(262).ncols     = 1;
pt(262).subsource = 'SS_DOUBLE';
pt(262).ndims     = '2';
pt(262).size      = '[]';
pt(262).isStruct  = false;
pt(262).symbol     = 'Analog_Solution_P.Constant2_Value_l';
pt(262).baseaddr   = '&Analog_Solution_P.Constant2_Value_l';
pt(262).dtname     = 'real_T';



  
pt(263).blockname = 'Startup/Initialize Spooling Position/FirstDirectionDone?/Switch1';
pt(263).paramname = 'Threshold';
pt(263).class     = 'scalar';
pt(263).nrows     = 1;
pt(263).ncols     = 1;
pt(263).subsource = 'SS_DOUBLE';
pt(263).ndims     = '2';
pt(263).size      = '[]';
pt(263).isStruct  = false;
pt(263).symbol     = 'Analog_Solution_P.Switch1_Threshold_n';
pt(263).baseaddr   = '&Analog_Solution_P.Switch1_Threshold_n';
pt(263).dtname     = 'real_T';



  
pt(264).blockname = 'Startup/Initialize Spooling Position/FirstDirectionDone?/Delay';
pt(264).paramname = 'DelayLength';
pt(264).class     = 'scalar';
pt(264).nrows     = 1;
pt(264).ncols     = 1;
pt(264).subsource = 'SS_UINT32';
pt(264).ndims     = '2';
pt(264).size      = '[]';
pt(264).isStruct  = false;
pt(264).symbol     = 'Analog_Solution_P.Delay_DelayLength_gz';
pt(264).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_gz';
pt(264).dtname     = 'uint32_T';



  
pt(265).blockname = 'Startup/Initialize Spooling Position/FirstDirectionDone?/Delay';
pt(265).paramname = 'InitialCondition';
pt(265).class     = 'scalar';
pt(265).nrows     = 1;
pt(265).ncols     = 1;
pt(265).subsource = 'SS_DOUBLE';
pt(265).ndims     = '2';
pt(265).size      = '[]';
pt(265).isStruct  = false;
pt(265).symbol     = 'Analog_Solution_P.Delay_InitialCondition_aq';
pt(265).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_aq';
pt(265).dtname     = 'real_T';



  
pt(266).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Constant';
pt(266).paramname = 'Value';
pt(266).class     = 'scalar';
pt(266).nrows     = 1;
pt(266).ncols     = 1;
pt(266).subsource = 'SS_DOUBLE';
pt(266).ndims     = '2';
pt(266).size      = '[]';
pt(266).isStruct  = false;
pt(266).symbol     = 'Analog_Solution_P.Constant_Value_md';
pt(266).baseaddr   = '&Analog_Solution_P.Constant_Value_md';
pt(266).dtname     = 'real_T';



  
pt(267).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Constant1';
pt(267).paramname = 'Value';
pt(267).class     = 'scalar';
pt(267).nrows     = 1;
pt(267).ncols     = 1;
pt(267).subsource = 'SS_DOUBLE';
pt(267).ndims     = '2';
pt(267).size      = '[]';
pt(267).isStruct  = false;
pt(267).symbol     = 'Analog_Solution_P.Constant1_Value_n';
pt(267).baseaddr   = '&Analog_Solution_P.Constant1_Value_n';
pt(267).dtname     = 'real_T';



  
pt(268).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Konstante Geschw. zum Spooling Grenze finden';
pt(268).paramname = 'Value';
pt(268).class     = 'scalar';
pt(268).nrows     = 1;
pt(268).ncols     = 1;
pt(268).subsource = 'SS_DOUBLE';
pt(268).ndims     = '2';
pt(268).size      = '[]';
pt(268).isStruct  = false;
pt(268).symbol     = 'Analog_Solution_P.KonstanteGeschwzumSpoolingGrenz';
pt(268).baseaddr   = '&Analog_Solution_P.KonstanteGeschwzumSpoolingGrenz';
pt(268).dtname     = 'real_T';



  
pt(269).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Gain';
pt(269).paramname = 'Gain';
pt(269).class     = 'scalar';
pt(269).nrows     = 1;
pt(269).ncols     = 1;
pt(269).subsource = 'SS_DOUBLE';
pt(269).ndims     = '2';
pt(269).size      = '[]';
pt(269).isStruct  = false;
pt(269).symbol     = 'Analog_Solution_P.Gain_Gain_dq';
pt(269).baseaddr   = '&Analog_Solution_P.Gain_Gain_dq';
pt(269).dtname     = 'real_T';



  
pt(270).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch';
pt(270).paramname = 'Threshold';
pt(270).class     = 'scalar';
pt(270).nrows     = 1;
pt(270).ncols     = 1;
pt(270).subsource = 'SS_DOUBLE';
pt(270).ndims     = '2';
pt(270).size      = '[]';
pt(270).isStruct  = false;
pt(270).symbol     = 'Analog_Solution_P.Switch_Threshold_o';
pt(270).baseaddr   = '&Analog_Solution_P.Switch_Threshold_o';
pt(270).dtname     = 'real_T';



  
pt(271).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Switch1';
pt(271).paramname = 'Threshold';
pt(271).class     = 'scalar';
pt(271).nrows     = 1;
pt(271).ncols     = 1;
pt(271).subsource = 'SS_DOUBLE';
pt(271).ndims     = '2';
pt(271).size      = '[]';
pt(271).isStruct  = false;
pt(271).symbol     = 'Analog_Solution_P.Switch1_Threshold';
pt(271).baseaddr   = '&Analog_Solution_P.Switch1_Threshold';
pt(271).dtname     = 'real_T';



  
pt(272).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Delay';
pt(272).paramname = 'DelayLength';
pt(272).class     = 'scalar';
pt(272).nrows     = 1;
pt(272).ncols     = 1;
pt(272).subsource = 'SS_UINT32';
pt(272).ndims     = '2';
pt(272).size      = '[]';
pt(272).isStruct  = false;
pt(272).symbol     = 'Analog_Solution_P.Delay_DelayLength_b';
pt(272).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_b';
pt(272).dtname     = 'uint32_T';



  
pt(273).blockname = 'Startup/Initialize Spooling Position/SteerSpoolingMotor/Delay';
pt(273).paramname = 'InitialCondition';
pt(273).class     = 'scalar';
pt(273).nrows     = 1;
pt(273).ncols     = 1;
pt(273).subsource = 'SS_DOUBLE';
pt(273).ndims     = '2';
pt(273).size      = '[]';
pt(273).isStruct  = false;
pt(273).symbol     = 'Analog_Solution_P.Delay_InitialCondition_m';
pt(273).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_m';
pt(273).dtname     = 'real_T';



  
pt(274).blockname = 'Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Beschleunigung';
pt(274).paramname = 'Value';
pt(274).class     = 'scalar';
pt(274).nrows     = 1;
pt(274).ncols     = 1;
pt(274).subsource = 'SS_DOUBLE';
pt(274).ndims     = '2';
pt(274).size      = '[]';
pt(274).isStruct  = false;
pt(274).symbol     = 'Analog_Solution_P.Beschleunigung_Value_i';
pt(274).baseaddr   = '&Analog_Solution_P.Beschleunigung_Value_i';
pt(274).dtname     = 'real_T';



  
pt(275).blockname = 'Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/obere Grenze';
pt(275).paramname = 'Value';
pt(275).class     = 'scalar';
pt(275).nrows     = 1;
pt(275).ncols     = 1;
pt(275).subsource = 'SS_DOUBLE';
pt(275).ndims     = '2';
pt(275).size      = '[]';
pt(275).isStruct  = false;
pt(275).symbol     = 'Analog_Solution_P.obereGrenze_Value_p';
pt(275).baseaddr   = '&Analog_Solution_P.obereGrenze_Value_p';
pt(275).dtname     = 'real_T';



  
pt(276).blockname = 'Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/untere Grenze';
pt(276).paramname = 'Value';
pt(276).class     = 'scalar';
pt(276).nrows     = 1;
pt(276).ncols     = 1;
pt(276).subsource = 'SS_DOUBLE';
pt(276).ndims     = '2';
pt(276).size      = '[]';
pt(276).isStruct  = false;
pt(276).symbol     = 'Analog_Solution_P.untereGrenze_Value_p';
pt(276).baseaddr   = '&Analog_Solution_P.untereGrenze_Value_p';
pt(276).dtname     = 'real_T';



  
pt(277).blockname = 'Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain';
pt(277).paramname = 'Gain';
pt(277).class     = 'scalar';
pt(277).nrows     = 1;
pt(277).ncols     = 1;
pt(277).subsource = 'SS_DOUBLE';
pt(277).ndims     = '2';
pt(277).size      = '[]';
pt(277).isStruct  = false;
pt(277).symbol     = 'Analog_Solution_P.Gain_Gain_a';
pt(277).baseaddr   = '&Analog_Solution_P.Gain_Gain_a';
pt(277).dtname     = 'real_T';



  
pt(278).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Beschleunigung';
pt(278).paramname = 'Value';
pt(278).class     = 'scalar';
pt(278).nrows     = 1;
pt(278).ncols     = 1;
pt(278).subsource = 'SS_DOUBLE';
pt(278).ndims     = '2';
pt(278).size      = '[]';
pt(278).isStruct  = false;
pt(278).symbol     = 'Analog_Solution_P.Beschleunigung_Value_p';
pt(278).baseaddr   = '&Analog_Solution_P.Beschleunigung_Value_p';
pt(278).dtname     = 'real_T';



  
pt(279).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Constant1';
pt(279).paramname = 'Value';
pt(279).class     = 'scalar';
pt(279).nrows     = 1;
pt(279).ncols     = 1;
pt(279).subsource = 'SS_DOUBLE';
pt(279).ndims     = '2';
pt(279).size      = '[]';
pt(279).isStruct  = false;
pt(279).symbol     = 'Analog_Solution_P.Constant1_Value_pr';
pt(279).baseaddr   = '&Analog_Solution_P.Constant1_Value_pr';
pt(279).dtname     = 'real_T';



  
pt(280).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Gain';
pt(280).paramname = 'Gain';
pt(280).class     = 'scalar';
pt(280).nrows     = 1;
pt(280).ncols     = 1;
pt(280).subsource = 'SS_DOUBLE';
pt(280).ndims     = '2';
pt(280).size      = '[]';
pt(280).isStruct  = false;
pt(280).symbol     = 'Analog_Solution_P.Gain_Gain_e';
pt(280).baseaddr   = '&Analog_Solution_P.Gain_Gain_e';
pt(280).dtname     = 'real_T';



  
pt(281).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Delay';
pt(281).paramname = 'DelayLength';
pt(281).class     = 'scalar';
pt(281).nrows     = 1;
pt(281).ncols     = 1;
pt(281).subsource = 'SS_UINT32';
pt(281).ndims     = '2';
pt(281).size      = '[]';
pt(281).isStruct  = false;
pt(281).symbol     = 'Analog_Solution_P.Delay_DelayLength_a';
pt(281).baseaddr   = '&Analog_Solution_P.Delay_DelayLength_a';
pt(281).dtname     = 'uint32_T';



  
pt(282).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Delay';
pt(282).paramname = 'InitialCondition';
pt(282).class     = 'scalar';
pt(282).nrows     = 1;
pt(282).ncols     = 1;
pt(282).subsource = 'SS_DOUBLE';
pt(282).ndims     = '2';
pt(282).size      = '[]';
pt(282).isStruct  = false;
pt(282).symbol     = 'Analog_Solution_P.Delay_InitialCondition_au';
pt(282).baseaddr   = '&Analog_Solution_P.Delay_InitialCondition_au';
pt(282).dtname     = 'real_T';



  
pt(283).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Delay1';
pt(283).paramname = 'DelayLength';
pt(283).class     = 'scalar';
pt(283).nrows     = 1;
pt(283).ncols     = 1;
pt(283).subsource = 'SS_UINT32';
pt(283).ndims     = '2';
pt(283).size      = '[]';
pt(283).isStruct  = false;
pt(283).symbol     = 'Analog_Solution_P.Delay1_DelayLength_h';
pt(283).baseaddr   = '&Analog_Solution_P.Delay1_DelayLength_h';
pt(283).dtname     = 'uint32_T';



  
pt(284).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Delay1';
pt(284).paramname = 'InitialCondition';
pt(284).class     = 'scalar';
pt(284).nrows     = 1;
pt(284).ncols     = 1;
pt(284).subsource = 'SS_DOUBLE';
pt(284).ndims     = '2';
pt(284).size      = '[]';
pt(284).isStruct  = false;
pt(284).symbol     = 'Analog_Solution_P.Delay1_InitialCondition_n';
pt(284).baseaddr   = '&Analog_Solution_P.Delay1_InitialCondition_n';
pt(284).dtname     = 'real_T';



  
pt(285).blockname = 'Winch_Conrtol/damper/Compare To Zero/Constant';
pt(285).paramname = 'Value';
pt(285).class     = 'scalar';
pt(285).nrows     = 1;
pt(285).ncols     = 1;
pt(285).subsource = 'SS_DOUBLE';
pt(285).ndims     = '2';
pt(285).size      = '[]';
pt(285).isStruct  = false;
pt(285).symbol     = 'Analog_Solution_P.Constant_Value_m0';
pt(285).baseaddr   = '&Analog_Solution_P.Constant_Value_m0';
pt(285).dtname     = 'real_T';



  
pt(286).blockname = 'Winch_Conrtol/damper/Compare To Zero1/Constant';
pt(286).paramname = 'Value';
pt(286).class     = 'scalar';
pt(286).nrows     = 1;
pt(286).ncols     = 1;
pt(286).subsource = 'SS_DOUBLE';
pt(286).ndims     = '2';
pt(286).size      = '[]';
pt(286).isStruct  = false;
pt(286).symbol     = 'Analog_Solution_P.Constant_Value_i';
pt(286).baseaddr   = '&Analog_Solution_P.Constant_Value_i';
pt(286).dtname     = 'real_T';



  
pt(287).blockname = 'Inputs/RS232_read/IMU_read/Data_validation/IMU_data_valid';
pt(287).paramname = 'InitialOutput';
pt(287).class     = 'scalar';
pt(287).nrows     = 1;
pt(287).ncols     = 1;
pt(287).subsource = 'SS_DOUBLE';
pt(287).ndims     = '2';
pt(287).size      = '[]';
pt(287).isStruct  = false;
pt(287).symbol     = 'Analog_Solution_P.IMU_data_valid_Y0';
pt(287).baseaddr   = '&Analog_Solution_P.IMU_data_valid_Y0';
pt(287).dtname     = 'real_T';



  
pt(288).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Constant';
pt(288).paramname = 'Value';
pt(288).class     = 'scalar';
pt(288).nrows     = 1;
pt(288).ncols     = 1;
pt(288).subsource = 'SS_DOUBLE';
pt(288).ndims     = '2';
pt(288).size      = '[]';
pt(288).isStruct  = false;
pt(288).symbol     = 'Analog_Solution_P.Constant_Value_h';
pt(288).baseaddr   = '&Analog_Solution_P.Constant_Value_h';
pt(288).dtname     = 'real_T';



  
pt(289).blockname = 'Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Constant';
pt(289).paramname = 'Value';
pt(289).class     = 'scalar';
pt(289).nrows     = 1;
pt(289).ncols     = 1;
pt(289).subsource = 'SS_DOUBLE';
pt(289).ndims     = '2';
pt(289).size      = '[]';
pt(289).isStruct  = false;
pt(289).symbol     = 'Analog_Solution_P.Constant_Value_m';
pt(289).baseaddr   = '&Analog_Solution_P.Constant_Value_m';
pt(289).dtname     = 'real_T';



  
pt(290).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1';
pt(290).paramname = 'Value';
pt(290).class     = 'scalar';
pt(290).nrows     = 1;
pt(290).ncols     = 1;
pt(290).subsource = 'SS_UINT32';
pt(290).ndims     = '2';
pt(290).size      = '[]';
pt(290).isStruct  = false;
pt(290).symbol     = 'Analog_Solution_P.Constant1_Value_be';
pt(290).baseaddr   = '&Analog_Solution_P.Constant1_Value_be';
pt(290).dtname     = 'uint32_T';



  
pt(291).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2';
pt(291).paramname = 'Value';
pt(291).class     = 'scalar';
pt(291).nrows     = 1;
pt(291).ncols     = 1;
pt(291).subsource = 'SS_UINT32';
pt(291).ndims     = '2';
pt(291).size      = '[]';
pt(291).isStruct  = false;
pt(291).symbol     = 'Analog_Solution_P.Constant2_Value_n';
pt(291).baseaddr   = '&Analog_Solution_P.Constant2_Value_n';
pt(291).dtname     = 'uint32_T';



  
pt(292).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3';
pt(292).paramname = 'Value';
pt(292).class     = 'scalar';
pt(292).nrows     = 1;
pt(292).ncols     = 1;
pt(292).subsource = 'SS_UINT32';
pt(292).ndims     = '2';
pt(292).size      = '[]';
pt(292).isStruct  = false;
pt(292).symbol     = 'Analog_Solution_P.Constant3_Value_d';
pt(292).baseaddr   = '&Analog_Solution_P.Constant3_Value_d';
pt(292).dtname     = 'uint32_T';



  
pt(293).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4';
pt(293).paramname = 'Value';
pt(293).class     = 'scalar';
pt(293).nrows     = 1;
pt(293).ncols     = 1;
pt(293).subsource = 'SS_UINT32';
pt(293).ndims     = '2';
pt(293).size      = '[]';
pt(293).isStruct  = false;
pt(293).symbol     = 'Analog_Solution_P.Constant4_Value_b';
pt(293).baseaddr   = '&Analog_Solution_P.Constant4_Value_b';
pt(293).dtname     = 'uint32_T';



  
pt(294).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant9';
pt(294).paramname = 'Value';
pt(294).class     = 'scalar';
pt(294).nrows     = 1;
pt(294).ncols     = 1;
pt(294).subsource = 'SS_UINT32';
pt(294).ndims     = '2';
pt(294).size      = '[]';
pt(294).isStruct  = false;
pt(294).symbol     = 'Analog_Solution_P.Constant9_Value_o';
pt(294).baseaddr   = '&Analog_Solution_P.Constant9_Value_o';
pt(294).dtname     = 'uint32_T';



  
pt(295).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator';
pt(295).paramname = 'BitMask';
pt(295).class     = 'scalar';
pt(295).nrows     = 1;
pt(295).ncols     = 1;
pt(295).subsource = 'SS_UINT32';
pt(295).ndims     = '2';
pt(295).size      = '[]';
pt(295).isStruct  = false;
pt(295).symbol     = 'Analog_Solution_P.BitwiseLogicalOperator_BitMask';
pt(295).baseaddr   = '&Analog_Solution_P.BitwiseLogicalOperator_BitMask';
pt(295).dtname     = 'uint32_T';



  
pt(296).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(296).paramname = 'P1';
pt(296).class     = 'scalar';
pt(296).nrows     = 1;
pt(296).ncols     = 1;
pt(296).subsource = 'SS_DOUBLE';
pt(296).ndims     = '2';
pt(296).size      = '[]';
pt(296).isStruct  = false;
pt(296).symbol     = 'Analog_Solution_P.FIFOread1_P1';
pt(296).baseaddr   = '&Analog_Solution_P.FIFOread1_P1';
pt(296).dtname     = 'real_T';



  
pt(297).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(297).paramname = 'P2';
pt(297).class     = 'scalar';
pt(297).nrows     = 1;
pt(297).ncols     = 1;
pt(297).subsource = 'SS_DOUBLE';
pt(297).ndims     = '2';
pt(297).size      = '[]';
pt(297).isStruct  = false;
pt(297).symbol     = 'Analog_Solution_P.FIFOread1_P2';
pt(297).baseaddr   = '&Analog_Solution_P.FIFOread1_P2';
pt(297).dtname     = 'real_T';



  
pt(298).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(298).paramname = 'P3';
pt(298).class     = 'scalar';
pt(298).nrows     = 1;
pt(298).ncols     = 1;
pt(298).subsource = 'SS_DOUBLE';
pt(298).ndims     = '2';
pt(298).size      = '[]';
pt(298).isStruct  = false;
pt(298).symbol     = 'Analog_Solution_P.FIFOread1_P3';
pt(298).baseaddr   = '&Analog_Solution_P.FIFOread1_P3';
pt(298).dtname     = 'real_T';



  
pt(299).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(299).paramname = 'P4';
pt(299).class     = 'scalar';
pt(299).nrows     = 1;
pt(299).ncols     = 1;
pt(299).subsource = 'SS_DOUBLE';
pt(299).ndims     = '2';
pt(299).size      = '[]';
pt(299).isStruct  = false;
pt(299).symbol     = 'Analog_Solution_P.FIFOread1_P4';
pt(299).baseaddr   = '&Analog_Solution_P.FIFOread1_P4';
pt(299).dtname     = 'real_T';



  
pt(300).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(300).paramname = 'P5';
pt(300).class     = 'scalar';
pt(300).nrows     = 1;
pt(300).ncols     = 1;
pt(300).subsource = 'SS_DOUBLE';
pt(300).ndims     = '2';
pt(300).size      = '[]';
pt(300).isStruct  = false;
pt(300).symbol     = 'Analog_Solution_P.FIFOread1_P5';
pt(300).baseaddr   = '&Analog_Solution_P.FIFOread1_P5';
pt(300).dtname     = 'real_T';



  
pt(301).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(301).paramname = 'P6';
pt(301).class     = 'scalar';
pt(301).nrows     = 1;
pt(301).ncols     = 1;
pt(301).subsource = 'SS_DOUBLE';
pt(301).ndims     = '2';
pt(301).size      = '[]';
pt(301).isStruct  = false;
pt(301).symbol     = 'Analog_Solution_P.FIFOread1_P6';
pt(301).baseaddr   = '&Analog_Solution_P.FIFOread1_P6';
pt(301).dtname     = 'real_T';



  
pt(302).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(302).paramname = 'P7';
pt(302).class     = 'scalar';
pt(302).nrows     = 1;
pt(302).ncols     = 1;
pt(302).subsource = 'SS_DOUBLE';
pt(302).ndims     = '2';
pt(302).size      = '[]';
pt(302).isStruct  = false;
pt(302).symbol     = 'Analog_Solution_P.FIFOread1_P7';
pt(302).baseaddr   = '&Analog_Solution_P.FIFOread1_P7';
pt(302).dtname     = 'real_T';



  
pt(303).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1';
pt(303).paramname = 'P8';
pt(303).class     = 'scalar';
pt(303).nrows     = 1;
pt(303).ncols     = 1;
pt(303).subsource = 'SS_DOUBLE';
pt(303).ndims     = '2';
pt(303).size      = '[]';
pt(303).isStruct  = false;
pt(303).symbol     = 'Analog_Solution_P.FIFOread1_P8';
pt(303).baseaddr   = '&Analog_Solution_P.FIFOread1_P8';
pt(303).dtname     = 'real_T';



  
pt(304).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(304).paramname = 'P1';
pt(304).class     = 'scalar';
pt(304).nrows     = 1;
pt(304).ncols     = 1;
pt(304).subsource = 'SS_DOUBLE';
pt(304).ndims     = '2';
pt(304).size      = '[]';
pt(304).isStruct  = false;
pt(304).symbol     = 'Analog_Solution_P.FIFOread2_P1';
pt(304).baseaddr   = '&Analog_Solution_P.FIFOread2_P1';
pt(304).dtname     = 'real_T';



  
pt(305).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(305).paramname = 'P2';
pt(305).class     = 'scalar';
pt(305).nrows     = 1;
pt(305).ncols     = 1;
pt(305).subsource = 'SS_DOUBLE';
pt(305).ndims     = '2';
pt(305).size      = '[]';
pt(305).isStruct  = false;
pt(305).symbol     = 'Analog_Solution_P.FIFOread2_P2';
pt(305).baseaddr   = '&Analog_Solution_P.FIFOread2_P2';
pt(305).dtname     = 'real_T';



  
pt(306).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(306).paramname = 'P3';
pt(306).class     = 'scalar';
pt(306).nrows     = 1;
pt(306).ncols     = 1;
pt(306).subsource = 'SS_DOUBLE';
pt(306).ndims     = '2';
pt(306).size      = '[]';
pt(306).isStruct  = false;
pt(306).symbol     = 'Analog_Solution_P.FIFOread2_P3';
pt(306).baseaddr   = '&Analog_Solution_P.FIFOread2_P3';
pt(306).dtname     = 'real_T';



  
pt(307).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(307).paramname = 'P4';
pt(307).class     = 'scalar';
pt(307).nrows     = 1;
pt(307).ncols     = 1;
pt(307).subsource = 'SS_DOUBLE';
pt(307).ndims     = '2';
pt(307).size      = '[]';
pt(307).isStruct  = false;
pt(307).symbol     = 'Analog_Solution_P.FIFOread2_P4';
pt(307).baseaddr   = '&Analog_Solution_P.FIFOread2_P4';
pt(307).dtname     = 'real_T';



  
pt(308).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(308).paramname = 'P5';
pt(308).class     = 'scalar';
pt(308).nrows     = 1;
pt(308).ncols     = 1;
pt(308).subsource = 'SS_DOUBLE';
pt(308).ndims     = '2';
pt(308).size      = '[]';
pt(308).isStruct  = false;
pt(308).symbol     = 'Analog_Solution_P.FIFOread2_P5';
pt(308).baseaddr   = '&Analog_Solution_P.FIFOread2_P5';
pt(308).dtname     = 'real_T';



  
pt(309).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(309).paramname = 'P6';
pt(309).class     = 'scalar';
pt(309).nrows     = 1;
pt(309).ncols     = 1;
pt(309).subsource = 'SS_DOUBLE';
pt(309).ndims     = '2';
pt(309).size      = '[]';
pt(309).isStruct  = false;
pt(309).symbol     = 'Analog_Solution_P.FIFOread2_P6';
pt(309).baseaddr   = '&Analog_Solution_P.FIFOread2_P6';
pt(309).dtname     = 'real_T';



  
pt(310).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(310).paramname = 'P7';
pt(310).class     = 'scalar';
pt(310).nrows     = 1;
pt(310).ncols     = 1;
pt(310).subsource = 'SS_DOUBLE';
pt(310).ndims     = '2';
pt(310).size      = '[]';
pt(310).isStruct  = false;
pt(310).symbol     = 'Analog_Solution_P.FIFOread2_P7';
pt(310).baseaddr   = '&Analog_Solution_P.FIFOread2_P7';
pt(310).dtname     = 'real_T';



  
pt(311).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2';
pt(311).paramname = 'P8';
pt(311).class     = 'scalar';
pt(311).nrows     = 1;
pt(311).ncols     = 1;
pt(311).subsource = 'SS_DOUBLE';
pt(311).ndims     = '2';
pt(311).size      = '[]';
pt(311).isStruct  = false;
pt(311).symbol     = 'Analog_Solution_P.FIFOread2_P8';
pt(311).baseaddr   = '&Analog_Solution_P.FIFOread2_P8';
pt(311).dtname     = 'real_T';



  
pt(312).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(312).paramname = 'P1';
pt(312).class     = 'scalar';
pt(312).nrows     = 1;
pt(312).ncols     = 1;
pt(312).subsource = 'SS_DOUBLE';
pt(312).ndims     = '2';
pt(312).size      = '[]';
pt(312).isStruct  = false;
pt(312).symbol     = 'Analog_Solution_P.FIFOread3_P1';
pt(312).baseaddr   = '&Analog_Solution_P.FIFOread3_P1';
pt(312).dtname     = 'real_T';



  
pt(313).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(313).paramname = 'P2';
pt(313).class     = 'scalar';
pt(313).nrows     = 1;
pt(313).ncols     = 1;
pt(313).subsource = 'SS_DOUBLE';
pt(313).ndims     = '2';
pt(313).size      = '[]';
pt(313).isStruct  = false;
pt(313).symbol     = 'Analog_Solution_P.FIFOread3_P2';
pt(313).baseaddr   = '&Analog_Solution_P.FIFOread3_P2';
pt(313).dtname     = 'real_T';



  
pt(314).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(314).paramname = 'P3';
pt(314).class     = 'scalar';
pt(314).nrows     = 1;
pt(314).ncols     = 1;
pt(314).subsource = 'SS_DOUBLE';
pt(314).ndims     = '2';
pt(314).size      = '[]';
pt(314).isStruct  = false;
pt(314).symbol     = 'Analog_Solution_P.FIFOread3_P3';
pt(314).baseaddr   = '&Analog_Solution_P.FIFOread3_P3';
pt(314).dtname     = 'real_T';



  
pt(315).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(315).paramname = 'P4';
pt(315).class     = 'scalar';
pt(315).nrows     = 1;
pt(315).ncols     = 1;
pt(315).subsource = 'SS_DOUBLE';
pt(315).ndims     = '2';
pt(315).size      = '[]';
pt(315).isStruct  = false;
pt(315).symbol     = 'Analog_Solution_P.FIFOread3_P4';
pt(315).baseaddr   = '&Analog_Solution_P.FIFOread3_P4';
pt(315).dtname     = 'real_T';



  
pt(316).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(316).paramname = 'P5';
pt(316).class     = 'scalar';
pt(316).nrows     = 1;
pt(316).ncols     = 1;
pt(316).subsource = 'SS_DOUBLE';
pt(316).ndims     = '2';
pt(316).size      = '[]';
pt(316).isStruct  = false;
pt(316).symbol     = 'Analog_Solution_P.FIFOread3_P5';
pt(316).baseaddr   = '&Analog_Solution_P.FIFOread3_P5';
pt(316).dtname     = 'real_T';



  
pt(317).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(317).paramname = 'P6';
pt(317).class     = 'scalar';
pt(317).nrows     = 1;
pt(317).ncols     = 1;
pt(317).subsource = 'SS_DOUBLE';
pt(317).ndims     = '2';
pt(317).size      = '[]';
pt(317).isStruct  = false;
pt(317).symbol     = 'Analog_Solution_P.FIFOread3_P6';
pt(317).baseaddr   = '&Analog_Solution_P.FIFOread3_P6';
pt(317).dtname     = 'real_T';



  
pt(318).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(318).paramname = 'P7';
pt(318).class     = 'scalar';
pt(318).nrows     = 1;
pt(318).ncols     = 1;
pt(318).subsource = 'SS_DOUBLE';
pt(318).ndims     = '2';
pt(318).size      = '[]';
pt(318).isStruct  = false;
pt(318).symbol     = 'Analog_Solution_P.FIFOread3_P7';
pt(318).baseaddr   = '&Analog_Solution_P.FIFOread3_P7';
pt(318).dtname     = 'real_T';



  
pt(319).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3';
pt(319).paramname = 'P8';
pt(319).class     = 'scalar';
pt(319).nrows     = 1;
pt(319).ncols     = 1;
pt(319).subsource = 'SS_DOUBLE';
pt(319).ndims     = '2';
pt(319).size      = '[]';
pt(319).isStruct  = false;
pt(319).symbol     = 'Analog_Solution_P.FIFOread3_P8';
pt(319).baseaddr   = '&Analog_Solution_P.FIFOread3_P8';
pt(319).dtname     = 'real_T';



  
pt(320).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(320).paramname = 'P1';
pt(320).class     = 'scalar';
pt(320).nrows     = 1;
pt(320).ncols     = 1;
pt(320).subsource = 'SS_DOUBLE';
pt(320).ndims     = '2';
pt(320).size      = '[]';
pt(320).isStruct  = false;
pt(320).symbol     = 'Analog_Solution_P.FIFOread4_P1';
pt(320).baseaddr   = '&Analog_Solution_P.FIFOread4_P1';
pt(320).dtname     = 'real_T';



  
pt(321).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(321).paramname = 'P2';
pt(321).class     = 'scalar';
pt(321).nrows     = 1;
pt(321).ncols     = 1;
pt(321).subsource = 'SS_DOUBLE';
pt(321).ndims     = '2';
pt(321).size      = '[]';
pt(321).isStruct  = false;
pt(321).symbol     = 'Analog_Solution_P.FIFOread4_P2';
pt(321).baseaddr   = '&Analog_Solution_P.FIFOread4_P2';
pt(321).dtname     = 'real_T';



  
pt(322).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(322).paramname = 'P3';
pt(322).class     = 'scalar';
pt(322).nrows     = 1;
pt(322).ncols     = 1;
pt(322).subsource = 'SS_DOUBLE';
pt(322).ndims     = '2';
pt(322).size      = '[]';
pt(322).isStruct  = false;
pt(322).symbol     = 'Analog_Solution_P.FIFOread4_P3';
pt(322).baseaddr   = '&Analog_Solution_P.FIFOread4_P3';
pt(322).dtname     = 'real_T';



  
pt(323).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(323).paramname = 'P4';
pt(323).class     = 'scalar';
pt(323).nrows     = 1;
pt(323).ncols     = 1;
pt(323).subsource = 'SS_DOUBLE';
pt(323).ndims     = '2';
pt(323).size      = '[]';
pt(323).isStruct  = false;
pt(323).symbol     = 'Analog_Solution_P.FIFOread4_P4';
pt(323).baseaddr   = '&Analog_Solution_P.FIFOread4_P4';
pt(323).dtname     = 'real_T';



  
pt(324).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(324).paramname = 'P5';
pt(324).class     = 'scalar';
pt(324).nrows     = 1;
pt(324).ncols     = 1;
pt(324).subsource = 'SS_DOUBLE';
pt(324).ndims     = '2';
pt(324).size      = '[]';
pt(324).isStruct  = false;
pt(324).symbol     = 'Analog_Solution_P.FIFOread4_P5';
pt(324).baseaddr   = '&Analog_Solution_P.FIFOread4_P5';
pt(324).dtname     = 'real_T';



  
pt(325).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(325).paramname = 'P6';
pt(325).class     = 'scalar';
pt(325).nrows     = 1;
pt(325).ncols     = 1;
pt(325).subsource = 'SS_DOUBLE';
pt(325).ndims     = '2';
pt(325).size      = '[]';
pt(325).isStruct  = false;
pt(325).symbol     = 'Analog_Solution_P.FIFOread4_P6';
pt(325).baseaddr   = '&Analog_Solution_P.FIFOread4_P6';
pt(325).dtname     = 'real_T';



  
pt(326).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(326).paramname = 'P7';
pt(326).class     = 'scalar';
pt(326).nrows     = 1;
pt(326).ncols     = 1;
pt(326).subsource = 'SS_DOUBLE';
pt(326).ndims     = '2';
pt(326).size      = '[]';
pt(326).isStruct  = false;
pt(326).symbol     = 'Analog_Solution_P.FIFOread4_P7';
pt(326).baseaddr   = '&Analog_Solution_P.FIFOread4_P7';
pt(326).dtname     = 'real_T';



  
pt(327).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4';
pt(327).paramname = 'P8';
pt(327).class     = 'scalar';
pt(327).nrows     = 1;
pt(327).ncols     = 1;
pt(327).subsource = 'SS_DOUBLE';
pt(327).ndims     = '2';
pt(327).size      = '[]';
pt(327).isStruct  = false;
pt(327).symbol     = 'Analog_Solution_P.FIFOread4_P8';
pt(327).baseaddr   = '&Analog_Solution_P.FIFOread4_P8';
pt(327).dtname     = 'real_T';



  
pt(328).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
pt(328).paramname = 'P1';
pt(328).class     = 'scalar';
pt(328).nrows     = 1;
pt(328).ncols     = 1;
pt(328).subsource = 'SS_DOUBLE';
pt(328).ndims     = '2';
pt(328).size      = '[]';
pt(328).isStruct  = false;
pt(328).symbol     = 'Analog_Solution_P.FIFOwrite1_P1';
pt(328).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P1';
pt(328).dtname     = 'real_T';



  
pt(329).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
pt(329).paramname = 'P2';
pt(329).class     = 'scalar';
pt(329).nrows     = 1;
pt(329).ncols     = 1;
pt(329).subsource = 'SS_DOUBLE';
pt(329).ndims     = '2';
pt(329).size      = '[]';
pt(329).isStruct  = false;
pt(329).symbol     = 'Analog_Solution_P.FIFOwrite1_P2';
pt(329).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P2';
pt(329).dtname     = 'real_T';



  
pt(330).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
pt(330).paramname = 'P3';
pt(330).class     = 'scalar';
pt(330).nrows     = 1;
pt(330).ncols     = 1;
pt(330).subsource = 'SS_DOUBLE';
pt(330).ndims     = '2';
pt(330).size      = '[]';
pt(330).isStruct  = false;
pt(330).symbol     = 'Analog_Solution_P.FIFOwrite1_P3';
pt(330).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P3';
pt(330).dtname     = 'real_T';



  
pt(331).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
pt(331).paramname = 'P4';
pt(331).class     = 'scalar';
pt(331).nrows     = 1;
pt(331).ncols     = 1;
pt(331).subsource = 'SS_DOUBLE';
pt(331).ndims     = '2';
pt(331).size      = '[]';
pt(331).isStruct  = false;
pt(331).symbol     = 'Analog_Solution_P.FIFOwrite1_P4';
pt(331).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P4';
pt(331).dtname     = 'real_T';



  
pt(332).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1';
pt(332).paramname = 'P5';
pt(332).class     = 'vector';
pt(332).nrows     = 1;
pt(332).ncols     = 34;
pt(332).subsource = 'SS_DOUBLE';
pt(332).ndims     = '2';
pt(332).size      = '[]';
pt(332).isStruct  = false;
pt(332).symbol     = 'Analog_Solution_P.FIFOwrite1_P5';
pt(332).baseaddr   = '&Analog_Solution_P.FIFOwrite1_P5[0]';
pt(332).dtname     = 'real_T';



  
pt(333).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
pt(333).paramname = 'P1';
pt(333).class     = 'scalar';
pt(333).nrows     = 1;
pt(333).ncols     = 1;
pt(333).subsource = 'SS_DOUBLE';
pt(333).ndims     = '2';
pt(333).size      = '[]';
pt(333).isStruct  = false;
pt(333).symbol     = 'Analog_Solution_P.FIFOwrite2_P1';
pt(333).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P1';
pt(333).dtname     = 'real_T';



  
pt(334).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
pt(334).paramname = 'P2';
pt(334).class     = 'scalar';
pt(334).nrows     = 1;
pt(334).ncols     = 1;
pt(334).subsource = 'SS_DOUBLE';
pt(334).ndims     = '2';
pt(334).size      = '[]';
pt(334).isStruct  = false;
pt(334).symbol     = 'Analog_Solution_P.FIFOwrite2_P2';
pt(334).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P2';
pt(334).dtname     = 'real_T';



  
pt(335).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
pt(335).paramname = 'P3';
pt(335).class     = 'scalar';
pt(335).nrows     = 1;
pt(335).ncols     = 1;
pt(335).subsource = 'SS_DOUBLE';
pt(335).ndims     = '2';
pt(335).size      = '[]';
pt(335).isStruct  = false;
pt(335).symbol     = 'Analog_Solution_P.FIFOwrite2_P3';
pt(335).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P3';
pt(335).dtname     = 'real_T';



  
pt(336).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
pt(336).paramname = 'P4';
pt(336).class     = 'scalar';
pt(336).nrows     = 1;
pt(336).ncols     = 1;
pt(336).subsource = 'SS_DOUBLE';
pt(336).ndims     = '2';
pt(336).size      = '[]';
pt(336).isStruct  = false;
pt(336).symbol     = 'Analog_Solution_P.FIFOwrite2_P4';
pt(336).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P4';
pt(336).dtname     = 'real_T';



  
pt(337).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2';
pt(337).paramname = 'P5';
pt(337).class     = 'vector';
pt(337).nrows     = 1;
pt(337).ncols     = 34;
pt(337).subsource = 'SS_DOUBLE';
pt(337).ndims     = '2';
pt(337).size      = '[]';
pt(337).isStruct  = false;
pt(337).symbol     = 'Analog_Solution_P.FIFOwrite2_P5';
pt(337).baseaddr   = '&Analog_Solution_P.FIFOwrite2_P5[0]';
pt(337).dtname     = 'real_T';



  
pt(338).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
pt(338).paramname = 'P1';
pt(338).class     = 'scalar';
pt(338).nrows     = 1;
pt(338).ncols     = 1;
pt(338).subsource = 'SS_DOUBLE';
pt(338).ndims     = '2';
pt(338).size      = '[]';
pt(338).isStruct  = false;
pt(338).symbol     = 'Analog_Solution_P.FIFOwrite3_P1';
pt(338).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P1';
pt(338).dtname     = 'real_T';



  
pt(339).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
pt(339).paramname = 'P2';
pt(339).class     = 'scalar';
pt(339).nrows     = 1;
pt(339).ncols     = 1;
pt(339).subsource = 'SS_DOUBLE';
pt(339).ndims     = '2';
pt(339).size      = '[]';
pt(339).isStruct  = false;
pt(339).symbol     = 'Analog_Solution_P.FIFOwrite3_P2';
pt(339).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P2';
pt(339).dtname     = 'real_T';



  
pt(340).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
pt(340).paramname = 'P3';
pt(340).class     = 'scalar';
pt(340).nrows     = 1;
pt(340).ncols     = 1;
pt(340).subsource = 'SS_DOUBLE';
pt(340).ndims     = '2';
pt(340).size      = '[]';
pt(340).isStruct  = false;
pt(340).symbol     = 'Analog_Solution_P.FIFOwrite3_P3';
pt(340).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P3';
pt(340).dtname     = 'real_T';



  
pt(341).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
pt(341).paramname = 'P4';
pt(341).class     = 'scalar';
pt(341).nrows     = 1;
pt(341).ncols     = 1;
pt(341).subsource = 'SS_DOUBLE';
pt(341).ndims     = '2';
pt(341).size      = '[]';
pt(341).isStruct  = false;
pt(341).symbol     = 'Analog_Solution_P.FIFOwrite3_P4';
pt(341).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P4';
pt(341).dtname     = 'real_T';



  
pt(342).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3';
pt(342).paramname = 'P5';
pt(342).class     = 'vector';
pt(342).nrows     = 1;
pt(342).ncols     = 34;
pt(342).subsource = 'SS_DOUBLE';
pt(342).ndims     = '2';
pt(342).size      = '[]';
pt(342).isStruct  = false;
pt(342).symbol     = 'Analog_Solution_P.FIFOwrite3_P5';
pt(342).baseaddr   = '&Analog_Solution_P.FIFOwrite3_P5[0]';
pt(342).dtname     = 'real_T';



  
pt(343).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
pt(343).paramname = 'P1';
pt(343).class     = 'scalar';
pt(343).nrows     = 1;
pt(343).ncols     = 1;
pt(343).subsource = 'SS_DOUBLE';
pt(343).ndims     = '2';
pt(343).size      = '[]';
pt(343).isStruct  = false;
pt(343).symbol     = 'Analog_Solution_P.FIFOwrite4_P1';
pt(343).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P1';
pt(343).dtname     = 'real_T';



  
pt(344).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
pt(344).paramname = 'P2';
pt(344).class     = 'scalar';
pt(344).nrows     = 1;
pt(344).ncols     = 1;
pt(344).subsource = 'SS_DOUBLE';
pt(344).ndims     = '2';
pt(344).size      = '[]';
pt(344).isStruct  = false;
pt(344).symbol     = 'Analog_Solution_P.FIFOwrite4_P2';
pt(344).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P2';
pt(344).dtname     = 'real_T';



  
pt(345).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
pt(345).paramname = 'P3';
pt(345).class     = 'scalar';
pt(345).nrows     = 1;
pt(345).ncols     = 1;
pt(345).subsource = 'SS_DOUBLE';
pt(345).ndims     = '2';
pt(345).size      = '[]';
pt(345).isStruct  = false;
pt(345).symbol     = 'Analog_Solution_P.FIFOwrite4_P3';
pt(345).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P3';
pt(345).dtname     = 'real_T';



  
pt(346).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
pt(346).paramname = 'P4';
pt(346).class     = 'scalar';
pt(346).nrows     = 1;
pt(346).ncols     = 1;
pt(346).subsource = 'SS_DOUBLE';
pt(346).ndims     = '2';
pt(346).size      = '[]';
pt(346).isStruct  = false;
pt(346).symbol     = 'Analog_Solution_P.FIFOwrite4_P4';
pt(346).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P4';
pt(346).dtname     = 'real_T';



  
pt(347).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4';
pt(347).paramname = 'P5';
pt(347).class     = 'vector';
pt(347).nrows     = 1;
pt(347).ncols     = 34;
pt(347).subsource = 'SS_DOUBLE';
pt(347).ndims     = '2';
pt(347).size      = '[]';
pt(347).isStruct  = false;
pt(347).symbol     = 'Analog_Solution_P.FIFOwrite4_P5';
pt(347).baseaddr   = '&Analog_Solution_P.FIFOwrite4_P5[0]';
pt(347).dtname     = 'real_T';



  
pt(348).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1';
pt(348).paramname = 'P1';
pt(348).class     = 'scalar';
pt(348).nrows     = 1;
pt(348).ncols     = 1;
pt(348).subsource = 'SS_DOUBLE';
pt(348).ndims     = '2';
pt(348).size      = '[]';
pt(348).isStruct  = false;
pt(348).symbol     = 'Analog_Solution_P.FilterIntReason1_P1';
pt(348).baseaddr   = '&Analog_Solution_P.FilterIntReason1_P1';
pt(348).dtname     = 'real_T';



  
pt(349).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1';
pt(349).paramname = 'P2';
pt(349).class     = 'scalar';
pt(349).nrows     = 1;
pt(349).ncols     = 1;
pt(349).subsource = 'SS_DOUBLE';
pt(349).ndims     = '2';
pt(349).size      = '[]';
pt(349).isStruct  = false;
pt(349).symbol     = 'Analog_Solution_P.FilterIntReason1_P2';
pt(349).baseaddr   = '&Analog_Solution_P.FilterIntReason1_P2';
pt(349).dtname     = 'real_T';



  
pt(350).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1';
pt(350).paramname = 'P3';
pt(350).class     = 'scalar';
pt(350).nrows     = 1;
pt(350).ncols     = 1;
pt(350).subsource = 'SS_DOUBLE';
pt(350).ndims     = '2';
pt(350).size      = '[]';
pt(350).isStruct  = false;
pt(350).symbol     = 'Analog_Solution_P.FilterIntReason1_P3';
pt(350).baseaddr   = '&Analog_Solution_P.FilterIntReason1_P3';
pt(350).dtname     = 'real_T';



  
pt(351).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2';
pt(351).paramname = 'P1';
pt(351).class     = 'scalar';
pt(351).nrows     = 1;
pt(351).ncols     = 1;
pt(351).subsource = 'SS_DOUBLE';
pt(351).ndims     = '2';
pt(351).size      = '[]';
pt(351).isStruct  = false;
pt(351).symbol     = 'Analog_Solution_P.FilterIntReason2_P1';
pt(351).baseaddr   = '&Analog_Solution_P.FilterIntReason2_P1';
pt(351).dtname     = 'real_T';



  
pt(352).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2';
pt(352).paramname = 'P2';
pt(352).class     = 'scalar';
pt(352).nrows     = 1;
pt(352).ncols     = 1;
pt(352).subsource = 'SS_DOUBLE';
pt(352).ndims     = '2';
pt(352).size      = '[]';
pt(352).isStruct  = false;
pt(352).symbol     = 'Analog_Solution_P.FilterIntReason2_P2';
pt(352).baseaddr   = '&Analog_Solution_P.FilterIntReason2_P2';
pt(352).dtname     = 'real_T';



  
pt(353).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2';
pt(353).paramname = 'P3';
pt(353).class     = 'scalar';
pt(353).nrows     = 1;
pt(353).ncols     = 1;
pt(353).subsource = 'SS_DOUBLE';
pt(353).ndims     = '2';
pt(353).size      = '[]';
pt(353).isStruct  = false;
pt(353).symbol     = 'Analog_Solution_P.FilterIntReason2_P3';
pt(353).baseaddr   = '&Analog_Solution_P.FilterIntReason2_P3';
pt(353).dtname     = 'real_T';



  
pt(354).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3';
pt(354).paramname = 'P1';
pt(354).class     = 'scalar';
pt(354).nrows     = 1;
pt(354).ncols     = 1;
pt(354).subsource = 'SS_DOUBLE';
pt(354).ndims     = '2';
pt(354).size      = '[]';
pt(354).isStruct  = false;
pt(354).symbol     = 'Analog_Solution_P.FilterIntReason3_P1';
pt(354).baseaddr   = '&Analog_Solution_P.FilterIntReason3_P1';
pt(354).dtname     = 'real_T';



  
pt(355).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3';
pt(355).paramname = 'P2';
pt(355).class     = 'scalar';
pt(355).nrows     = 1;
pt(355).ncols     = 1;
pt(355).subsource = 'SS_DOUBLE';
pt(355).ndims     = '2';
pt(355).size      = '[]';
pt(355).isStruct  = false;
pt(355).symbol     = 'Analog_Solution_P.FilterIntReason3_P2';
pt(355).baseaddr   = '&Analog_Solution_P.FilterIntReason3_P2';
pt(355).dtname     = 'real_T';



  
pt(356).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3';
pt(356).paramname = 'P3';
pt(356).class     = 'scalar';
pt(356).nrows     = 1;
pt(356).ncols     = 1;
pt(356).subsource = 'SS_DOUBLE';
pt(356).ndims     = '2';
pt(356).size      = '[]';
pt(356).isStruct  = false;
pt(356).symbol     = 'Analog_Solution_P.FilterIntReason3_P3';
pt(356).baseaddr   = '&Analog_Solution_P.FilterIntReason3_P3';
pt(356).dtname     = 'real_T';



  
pt(357).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4';
pt(357).paramname = 'P1';
pt(357).class     = 'scalar';
pt(357).nrows     = 1;
pt(357).ncols     = 1;
pt(357).subsource = 'SS_DOUBLE';
pt(357).ndims     = '2';
pt(357).size      = '[]';
pt(357).isStruct  = false;
pt(357).symbol     = 'Analog_Solution_P.FilterIntReason4_P1';
pt(357).baseaddr   = '&Analog_Solution_P.FilterIntReason4_P1';
pt(357).dtname     = 'real_T';



  
pt(358).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4';
pt(358).paramname = 'P2';
pt(358).class     = 'scalar';
pt(358).nrows     = 1;
pt(358).ncols     = 1;
pt(358).subsource = 'SS_DOUBLE';
pt(358).ndims     = '2';
pt(358).size      = '[]';
pt(358).isStruct  = false;
pt(358).symbol     = 'Analog_Solution_P.FilterIntReason4_P2';
pt(358).baseaddr   = '&Analog_Solution_P.FilterIntReason4_P2';
pt(358).dtname     = 'real_T';



  
pt(359).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4';
pt(359).paramname = 'P3';
pt(359).class     = 'scalar';
pt(359).nrows     = 1;
pt(359).ncols     = 1;
pt(359).subsource = 'SS_DOUBLE';
pt(359).ndims     = '2';
pt(359).size      = '[]';
pt(359).isStruct  = false;
pt(359).symbol     = 'Analog_Solution_P.FilterIntReason4_P3';
pt(359).baseaddr   = '&Analog_Solution_P.FilterIntReason4_P3';
pt(359).dtname     = 'real_T';



  
pt(360).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5';
pt(360).paramname = 'P1';
pt(360).class     = 'scalar';
pt(360).nrows     = 1;
pt(360).ncols     = 1;
pt(360).subsource = 'SS_DOUBLE';
pt(360).ndims     = '2';
pt(360).size      = '[]';
pt(360).isStruct  = false;
pt(360).symbol     = 'Analog_Solution_P.FilterIntReason5_P1';
pt(360).baseaddr   = '&Analog_Solution_P.FilterIntReason5_P1';
pt(360).dtname     = 'real_T';



  
pt(361).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5';
pt(361).paramname = 'P2';
pt(361).class     = 'scalar';
pt(361).nrows     = 1;
pt(361).ncols     = 1;
pt(361).subsource = 'SS_DOUBLE';
pt(361).ndims     = '2';
pt(361).size      = '[]';
pt(361).isStruct  = false;
pt(361).symbol     = 'Analog_Solution_P.FilterIntReason5_P2';
pt(361).baseaddr   = '&Analog_Solution_P.FilterIntReason5_P2';
pt(361).dtname     = 'real_T';



  
pt(362).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5';
pt(362).paramname = 'P3';
pt(362).class     = 'scalar';
pt(362).nrows     = 1;
pt(362).ncols     = 1;
pt(362).subsource = 'SS_DOUBLE';
pt(362).ndims     = '2';
pt(362).size      = '[]';
pt(362).isStruct  = false;
pt(362).symbol     = 'Analog_Solution_P.FilterIntReason5_P3';
pt(362).baseaddr   = '&Analog_Solution_P.FilterIntReason5_P3';
pt(362).dtname     = 'real_T';



  
pt(363).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6';
pt(363).paramname = 'P1';
pt(363).class     = 'scalar';
pt(363).nrows     = 1;
pt(363).ncols     = 1;
pt(363).subsource = 'SS_DOUBLE';
pt(363).ndims     = '2';
pt(363).size      = '[]';
pt(363).isStruct  = false;
pt(363).symbol     = 'Analog_Solution_P.FilterIntReason6_P1';
pt(363).baseaddr   = '&Analog_Solution_P.FilterIntReason6_P1';
pt(363).dtname     = 'real_T';



  
pt(364).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6';
pt(364).paramname = 'P2';
pt(364).class     = 'scalar';
pt(364).nrows     = 1;
pt(364).ncols     = 1;
pt(364).subsource = 'SS_DOUBLE';
pt(364).ndims     = '2';
pt(364).size      = '[]';
pt(364).isStruct  = false;
pt(364).symbol     = 'Analog_Solution_P.FilterIntReason6_P2';
pt(364).baseaddr   = '&Analog_Solution_P.FilterIntReason6_P2';
pt(364).dtname     = 'real_T';



  
pt(365).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6';
pt(365).paramname = 'P3';
pt(365).class     = 'scalar';
pt(365).nrows     = 1;
pt(365).ncols     = 1;
pt(365).subsource = 'SS_DOUBLE';
pt(365).ndims     = '2';
pt(365).size      = '[]';
pt(365).isStruct  = false;
pt(365).symbol     = 'Analog_Solution_P.FilterIntReason6_P3';
pt(365).baseaddr   = '&Analog_Solution_P.FilterIntReason6_P3';
pt(365).dtname     = 'real_T';



  
pt(366).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7';
pt(366).paramname = 'P1';
pt(366).class     = 'scalar';
pt(366).nrows     = 1;
pt(366).ncols     = 1;
pt(366).subsource = 'SS_DOUBLE';
pt(366).ndims     = '2';
pt(366).size      = '[]';
pt(366).isStruct  = false;
pt(366).symbol     = 'Analog_Solution_P.FilterIntReason7_P1';
pt(366).baseaddr   = '&Analog_Solution_P.FilterIntReason7_P1';
pt(366).dtname     = 'real_T';



  
pt(367).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7';
pt(367).paramname = 'P2';
pt(367).class     = 'scalar';
pt(367).nrows     = 1;
pt(367).ncols     = 1;
pt(367).subsource = 'SS_DOUBLE';
pt(367).ndims     = '2';
pt(367).size      = '[]';
pt(367).isStruct  = false;
pt(367).symbol     = 'Analog_Solution_P.FilterIntReason7_P2';
pt(367).baseaddr   = '&Analog_Solution_P.FilterIntReason7_P2';
pt(367).dtname     = 'real_T';



  
pt(368).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7';
pt(368).paramname = 'P3';
pt(368).class     = 'scalar';
pt(368).nrows     = 1;
pt(368).ncols     = 1;
pt(368).subsource = 'SS_DOUBLE';
pt(368).ndims     = '2';
pt(368).size      = '[]';
pt(368).isStruct  = false;
pt(368).symbol     = 'Analog_Solution_P.FilterIntReason7_P3';
pt(368).baseaddr   = '&Analog_Solution_P.FilterIntReason7_P3';
pt(368).dtname     = 'real_T';



  
pt(369).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8';
pt(369).paramname = 'P1';
pt(369).class     = 'scalar';
pt(369).nrows     = 1;
pt(369).ncols     = 1;
pt(369).subsource = 'SS_DOUBLE';
pt(369).ndims     = '2';
pt(369).size      = '[]';
pt(369).isStruct  = false;
pt(369).symbol     = 'Analog_Solution_P.FilterIntReason8_P1';
pt(369).baseaddr   = '&Analog_Solution_P.FilterIntReason8_P1';
pt(369).dtname     = 'real_T';



  
pt(370).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8';
pt(370).paramname = 'P2';
pt(370).class     = 'scalar';
pt(370).nrows     = 1;
pt(370).ncols     = 1;
pt(370).subsource = 'SS_DOUBLE';
pt(370).ndims     = '2';
pt(370).size      = '[]';
pt(370).isStruct  = false;
pt(370).symbol     = 'Analog_Solution_P.FilterIntReason8_P2';
pt(370).baseaddr   = '&Analog_Solution_P.FilterIntReason8_P2';
pt(370).dtname     = 'real_T';



  
pt(371).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8';
pt(371).paramname = 'P3';
pt(371).class     = 'scalar';
pt(371).nrows     = 1;
pt(371).ncols     = 1;
pt(371).subsource = 'SS_DOUBLE';
pt(371).ndims     = '2';
pt(371).size      = '[]';
pt(371).isStruct  = false;
pt(371).symbol     = 'Analog_Solution_P.FilterIntReason8_P3';
pt(371).baseaddr   = '&Analog_Solution_P.FilterIntReason8_P3';
pt(371).dtname     = 'real_T';



  
pt(372).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
pt(372).paramname = 'P1';
pt(372).class     = 'scalar';
pt(372).nrows     = 1;
pt(372).ncols     = 1;
pt(372).subsource = 'SS_DOUBLE';
pt(372).ndims     = '2';
pt(372).size      = '[]';
pt(372).isStruct  = false;
pt(372).symbol     = 'Analog_Solution_P.ReadHWFIFO1_P1';
pt(372).baseaddr   = '&Analog_Solution_P.ReadHWFIFO1_P1';
pt(372).dtname     = 'real_T';



  
pt(373).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
pt(373).paramname = 'P2';
pt(373).class     = 'scalar';
pt(373).nrows     = 1;
pt(373).ncols     = 1;
pt(373).subsource = 'SS_DOUBLE';
pt(373).ndims     = '2';
pt(373).size      = '[]';
pt(373).isStruct  = false;
pt(373).symbol     = 'Analog_Solution_P.ReadHWFIFO1_P2';
pt(373).baseaddr   = '&Analog_Solution_P.ReadHWFIFO1_P2';
pt(373).dtname     = 'real_T';



  
pt(374).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
pt(374).paramname = 'P3';
pt(374).class     = 'scalar';
pt(374).nrows     = 1;
pt(374).ncols     = 1;
pt(374).subsource = 'SS_DOUBLE';
pt(374).ndims     = '2';
pt(374).size      = '[]';
pt(374).isStruct  = false;
pt(374).symbol     = 'Analog_Solution_P.ReadHWFIFO1_P3';
pt(374).baseaddr   = '&Analog_Solution_P.ReadHWFIFO1_P3';
pt(374).dtname     = 'real_T';



  
pt(375).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1';
pt(375).paramname = 'P4';
pt(375).class     = 'scalar';
pt(375).nrows     = 1;
pt(375).ncols     = 1;
pt(375).subsource = 'SS_DOUBLE';
pt(375).ndims     = '2';
pt(375).size      = '[]';
pt(375).isStruct  = false;
pt(375).symbol     = 'Analog_Solution_P.ReadHWFIFO1_P4';
pt(375).baseaddr   = '&Analog_Solution_P.ReadHWFIFO1_P4';
pt(375).dtname     = 'real_T';



  
pt(376).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
pt(376).paramname = 'P1';
pt(376).class     = 'scalar';
pt(376).nrows     = 1;
pt(376).ncols     = 1;
pt(376).subsource = 'SS_DOUBLE';
pt(376).ndims     = '2';
pt(376).size      = '[]';
pt(376).isStruct  = false;
pt(376).symbol     = 'Analog_Solution_P.ReadHWFIFO2_P1';
pt(376).baseaddr   = '&Analog_Solution_P.ReadHWFIFO2_P1';
pt(376).dtname     = 'real_T';



  
pt(377).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
pt(377).paramname = 'P2';
pt(377).class     = 'scalar';
pt(377).nrows     = 1;
pt(377).ncols     = 1;
pt(377).subsource = 'SS_DOUBLE';
pt(377).ndims     = '2';
pt(377).size      = '[]';
pt(377).isStruct  = false;
pt(377).symbol     = 'Analog_Solution_P.ReadHWFIFO2_P2';
pt(377).baseaddr   = '&Analog_Solution_P.ReadHWFIFO2_P2';
pt(377).dtname     = 'real_T';



  
pt(378).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
pt(378).paramname = 'P3';
pt(378).class     = 'scalar';
pt(378).nrows     = 1;
pt(378).ncols     = 1;
pt(378).subsource = 'SS_DOUBLE';
pt(378).ndims     = '2';
pt(378).size      = '[]';
pt(378).isStruct  = false;
pt(378).symbol     = 'Analog_Solution_P.ReadHWFIFO2_P3';
pt(378).baseaddr   = '&Analog_Solution_P.ReadHWFIFO2_P3';
pt(378).dtname     = 'real_T';



  
pt(379).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2';
pt(379).paramname = 'P4';
pt(379).class     = 'scalar';
pt(379).nrows     = 1;
pt(379).ncols     = 1;
pt(379).subsource = 'SS_DOUBLE';
pt(379).ndims     = '2';
pt(379).size      = '[]';
pt(379).isStruct  = false;
pt(379).symbol     = 'Analog_Solution_P.ReadHWFIFO2_P4';
pt(379).baseaddr   = '&Analog_Solution_P.ReadHWFIFO2_P4';
pt(379).dtname     = 'real_T';



  
pt(380).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
pt(380).paramname = 'P1';
pt(380).class     = 'scalar';
pt(380).nrows     = 1;
pt(380).ncols     = 1;
pt(380).subsource = 'SS_DOUBLE';
pt(380).ndims     = '2';
pt(380).size      = '[]';
pt(380).isStruct  = false;
pt(380).symbol     = 'Analog_Solution_P.ReadHWFIFO3_P1';
pt(380).baseaddr   = '&Analog_Solution_P.ReadHWFIFO3_P1';
pt(380).dtname     = 'real_T';



  
pt(381).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
pt(381).paramname = 'P2';
pt(381).class     = 'scalar';
pt(381).nrows     = 1;
pt(381).ncols     = 1;
pt(381).subsource = 'SS_DOUBLE';
pt(381).ndims     = '2';
pt(381).size      = '[]';
pt(381).isStruct  = false;
pt(381).symbol     = 'Analog_Solution_P.ReadHWFIFO3_P2';
pt(381).baseaddr   = '&Analog_Solution_P.ReadHWFIFO3_P2';
pt(381).dtname     = 'real_T';



  
pt(382).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
pt(382).paramname = 'P3';
pt(382).class     = 'scalar';
pt(382).nrows     = 1;
pt(382).ncols     = 1;
pt(382).subsource = 'SS_DOUBLE';
pt(382).ndims     = '2';
pt(382).size      = '[]';
pt(382).isStruct  = false;
pt(382).symbol     = 'Analog_Solution_P.ReadHWFIFO3_P3';
pt(382).baseaddr   = '&Analog_Solution_P.ReadHWFIFO3_P3';
pt(382).dtname     = 'real_T';



  
pt(383).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3';
pt(383).paramname = 'P4';
pt(383).class     = 'scalar';
pt(383).nrows     = 1;
pt(383).ncols     = 1;
pt(383).subsource = 'SS_DOUBLE';
pt(383).ndims     = '2';
pt(383).size      = '[]';
pt(383).isStruct  = false;
pt(383).symbol     = 'Analog_Solution_P.ReadHWFIFO3_P4';
pt(383).baseaddr   = '&Analog_Solution_P.ReadHWFIFO3_P4';
pt(383).dtname     = 'real_T';



  
pt(384).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
pt(384).paramname = 'P1';
pt(384).class     = 'scalar';
pt(384).nrows     = 1;
pt(384).ncols     = 1;
pt(384).subsource = 'SS_DOUBLE';
pt(384).ndims     = '2';
pt(384).size      = '[]';
pt(384).isStruct  = false;
pt(384).symbol     = 'Analog_Solution_P.ReadHWFIFO4_P1';
pt(384).baseaddr   = '&Analog_Solution_P.ReadHWFIFO4_P1';
pt(384).dtname     = 'real_T';



  
pt(385).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
pt(385).paramname = 'P2';
pt(385).class     = 'scalar';
pt(385).nrows     = 1;
pt(385).ncols     = 1;
pt(385).subsource = 'SS_DOUBLE';
pt(385).ndims     = '2';
pt(385).size      = '[]';
pt(385).isStruct  = false;
pt(385).symbol     = 'Analog_Solution_P.ReadHWFIFO4_P2';
pt(385).baseaddr   = '&Analog_Solution_P.ReadHWFIFO4_P2';
pt(385).dtname     = 'real_T';



  
pt(386).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
pt(386).paramname = 'P3';
pt(386).class     = 'scalar';
pt(386).nrows     = 1;
pt(386).ncols     = 1;
pt(386).subsource = 'SS_DOUBLE';
pt(386).ndims     = '2';
pt(386).size      = '[]';
pt(386).isStruct  = false;
pt(386).symbol     = 'Analog_Solution_P.ReadHWFIFO4_P3';
pt(386).baseaddr   = '&Analog_Solution_P.ReadHWFIFO4_P3';
pt(386).dtname     = 'real_T';



  
pt(387).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4';
pt(387).paramname = 'P4';
pt(387).class     = 'scalar';
pt(387).nrows     = 1;
pt(387).ncols     = 1;
pt(387).subsource = 'SS_DOUBLE';
pt(387).ndims     = '2';
pt(387).size      = '[]';
pt(387).isStruct  = false;
pt(387).symbol     = 'Analog_Solution_P.ReadHWFIFO4_P4';
pt(387).baseaddr   = '&Analog_Solution_P.ReadHWFIFO4_P4';
pt(387).dtname     = 'real_T';



  
pt(388).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1';
pt(388).paramname = 'P1';
pt(388).class     = 'scalar';
pt(388).nrows     = 1;
pt(388).ncols     = 1;
pt(388).subsource = 'SS_DOUBLE';
pt(388).ndims     = '2';
pt(388).size      = '[]';
pt(388).isStruct  = false;
pt(388).symbol     = 'Analog_Solution_P.ReadIntStatus1_P1';
pt(388).baseaddr   = '&Analog_Solution_P.ReadIntStatus1_P1';
pt(388).dtname     = 'real_T';



  
pt(389).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1';
pt(389).paramname = 'P2';
pt(389).class     = 'scalar';
pt(389).nrows     = 1;
pt(389).ncols     = 1;
pt(389).subsource = 'SS_DOUBLE';
pt(389).ndims     = '2';
pt(389).size      = '[]';
pt(389).isStruct  = false;
pt(389).symbol     = 'Analog_Solution_P.ReadIntStatus1_P2';
pt(389).baseaddr   = '&Analog_Solution_P.ReadIntStatus1_P2';
pt(389).dtname     = 'real_T';



  
pt(390).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1';
pt(390).paramname = 'P1';
pt(390).class     = 'scalar';
pt(390).nrows     = 1;
pt(390).ncols     = 1;
pt(390).subsource = 'SS_DOUBLE';
pt(390).ndims     = '2';
pt(390).size      = '[]';
pt(390).isStruct  = false;
pt(390).symbol     = 'Analog_Solution_P.WriteHWFIFO1_P1';
pt(390).baseaddr   = '&Analog_Solution_P.WriteHWFIFO1_P1';
pt(390).dtname     = 'real_T';



  
pt(391).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1';
pt(391).paramname = 'P2';
pt(391).class     = 'scalar';
pt(391).nrows     = 1;
pt(391).ncols     = 1;
pt(391).subsource = 'SS_DOUBLE';
pt(391).ndims     = '2';
pt(391).size      = '[]';
pt(391).isStruct  = false;
pt(391).symbol     = 'Analog_Solution_P.WriteHWFIFO1_P2';
pt(391).baseaddr   = '&Analog_Solution_P.WriteHWFIFO1_P2';
pt(391).dtname     = 'real_T';



  
pt(392).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1';
pt(392).paramname = 'P3';
pt(392).class     = 'scalar';
pt(392).nrows     = 1;
pt(392).ncols     = 1;
pt(392).subsource = 'SS_DOUBLE';
pt(392).ndims     = '2';
pt(392).size      = '[]';
pt(392).isStruct  = false;
pt(392).symbol     = 'Analog_Solution_P.WriteHWFIFO1_P3';
pt(392).baseaddr   = '&Analog_Solution_P.WriteHWFIFO1_P3';
pt(392).dtname     = 'real_T';



  
pt(393).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1';
pt(393).paramname = 'P4';
pt(393).class     = 'scalar';
pt(393).nrows     = 1;
pt(393).ncols     = 1;
pt(393).subsource = 'SS_DOUBLE';
pt(393).ndims     = '2';
pt(393).size      = '[]';
pt(393).isStruct  = false;
pt(393).symbol     = 'Analog_Solution_P.WriteHWFIFO1_P4';
pt(393).baseaddr   = '&Analog_Solution_P.WriteHWFIFO1_P4';
pt(393).dtname     = 'real_T';



  
pt(394).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2';
pt(394).paramname = 'P1';
pt(394).class     = 'scalar';
pt(394).nrows     = 1;
pt(394).ncols     = 1;
pt(394).subsource = 'SS_DOUBLE';
pt(394).ndims     = '2';
pt(394).size      = '[]';
pt(394).isStruct  = false;
pt(394).symbol     = 'Analog_Solution_P.WriteHWFIFO2_P1';
pt(394).baseaddr   = '&Analog_Solution_P.WriteHWFIFO2_P1';
pt(394).dtname     = 'real_T';



  
pt(395).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2';
pt(395).paramname = 'P2';
pt(395).class     = 'scalar';
pt(395).nrows     = 1;
pt(395).ncols     = 1;
pt(395).subsource = 'SS_DOUBLE';
pt(395).ndims     = '2';
pt(395).size      = '[]';
pt(395).isStruct  = false;
pt(395).symbol     = 'Analog_Solution_P.WriteHWFIFO2_P2';
pt(395).baseaddr   = '&Analog_Solution_P.WriteHWFIFO2_P2';
pt(395).dtname     = 'real_T';



  
pt(396).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2';
pt(396).paramname = 'P3';
pt(396).class     = 'scalar';
pt(396).nrows     = 1;
pt(396).ncols     = 1;
pt(396).subsource = 'SS_DOUBLE';
pt(396).ndims     = '2';
pt(396).size      = '[]';
pt(396).isStruct  = false;
pt(396).symbol     = 'Analog_Solution_P.WriteHWFIFO2_P3';
pt(396).baseaddr   = '&Analog_Solution_P.WriteHWFIFO2_P3';
pt(396).dtname     = 'real_T';



  
pt(397).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2';
pt(397).paramname = 'P4';
pt(397).class     = 'scalar';
pt(397).nrows     = 1;
pt(397).ncols     = 1;
pt(397).subsource = 'SS_DOUBLE';
pt(397).ndims     = '2';
pt(397).size      = '[]';
pt(397).isStruct  = false;
pt(397).symbol     = 'Analog_Solution_P.WriteHWFIFO2_P4';
pt(397).baseaddr   = '&Analog_Solution_P.WriteHWFIFO2_P4';
pt(397).dtname     = 'real_T';



  
pt(398).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3';
pt(398).paramname = 'P1';
pt(398).class     = 'scalar';
pt(398).nrows     = 1;
pt(398).ncols     = 1;
pt(398).subsource = 'SS_DOUBLE';
pt(398).ndims     = '2';
pt(398).size      = '[]';
pt(398).isStruct  = false;
pt(398).symbol     = 'Analog_Solution_P.WriteHWFIFO3_P1';
pt(398).baseaddr   = '&Analog_Solution_P.WriteHWFIFO3_P1';
pt(398).dtname     = 'real_T';



  
pt(399).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3';
pt(399).paramname = 'P2';
pt(399).class     = 'scalar';
pt(399).nrows     = 1;
pt(399).ncols     = 1;
pt(399).subsource = 'SS_DOUBLE';
pt(399).ndims     = '2';
pt(399).size      = '[]';
pt(399).isStruct  = false;
pt(399).symbol     = 'Analog_Solution_P.WriteHWFIFO3_P2';
pt(399).baseaddr   = '&Analog_Solution_P.WriteHWFIFO3_P2';
pt(399).dtname     = 'real_T';



  
pt(400).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3';
pt(400).paramname = 'P3';
pt(400).class     = 'scalar';
pt(400).nrows     = 1;
pt(400).ncols     = 1;
pt(400).subsource = 'SS_DOUBLE';
pt(400).ndims     = '2';
pt(400).size      = '[]';
pt(400).isStruct  = false;
pt(400).symbol     = 'Analog_Solution_P.WriteHWFIFO3_P3';
pt(400).baseaddr   = '&Analog_Solution_P.WriteHWFIFO3_P3';
pt(400).dtname     = 'real_T';



  
pt(401).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3';
pt(401).paramname = 'P4';
pt(401).class     = 'scalar';
pt(401).nrows     = 1;
pt(401).ncols     = 1;
pt(401).subsource = 'SS_DOUBLE';
pt(401).ndims     = '2';
pt(401).size      = '[]';
pt(401).isStruct  = false;
pt(401).symbol     = 'Analog_Solution_P.WriteHWFIFO3_P4';
pt(401).baseaddr   = '&Analog_Solution_P.WriteHWFIFO3_P4';
pt(401).dtname     = 'real_T';



  
pt(402).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4';
pt(402).paramname = 'P1';
pt(402).class     = 'scalar';
pt(402).nrows     = 1;
pt(402).ncols     = 1;
pt(402).subsource = 'SS_DOUBLE';
pt(402).ndims     = '2';
pt(402).size      = '[]';
pt(402).isStruct  = false;
pt(402).symbol     = 'Analog_Solution_P.WriteHWFIFO4_P1';
pt(402).baseaddr   = '&Analog_Solution_P.WriteHWFIFO4_P1';
pt(402).dtname     = 'real_T';



  
pt(403).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4';
pt(403).paramname = 'P2';
pt(403).class     = 'scalar';
pt(403).nrows     = 1;
pt(403).ncols     = 1;
pt(403).subsource = 'SS_DOUBLE';
pt(403).ndims     = '2';
pt(403).size      = '[]';
pt(403).isStruct  = false;
pt(403).symbol     = 'Analog_Solution_P.WriteHWFIFO4_P2';
pt(403).baseaddr   = '&Analog_Solution_P.WriteHWFIFO4_P2';
pt(403).dtname     = 'real_T';



  
pt(404).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4';
pt(404).paramname = 'P3';
pt(404).class     = 'scalar';
pt(404).nrows     = 1;
pt(404).ncols     = 1;
pt(404).subsource = 'SS_DOUBLE';
pt(404).ndims     = '2';
pt(404).size      = '[]';
pt(404).isStruct  = false;
pt(404).symbol     = 'Analog_Solution_P.WriteHWFIFO4_P3';
pt(404).baseaddr   = '&Analog_Solution_P.WriteHWFIFO4_P3';
pt(404).dtname     = 'real_T';



  
pt(405).blockname = 'Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4';
pt(405).paramname = 'P4';
pt(405).class     = 'scalar';
pt(405).nrows     = 1;
pt(405).ncols     = 1;
pt(405).subsource = 'SS_DOUBLE';
pt(405).ndims     = '2';
pt(405).size      = '[]';
pt(405).isStruct  = false;
pt(405).symbol     = 'Analog_Solution_P.WriteHWFIFO4_P4';
pt(405).baseaddr   = '&Analog_Solution_P.WriteHWFIFO4_P4';
pt(405).dtname     = 'real_T';



  
pt(406).blockname = '';
pt(406).paramname = 'AOsat';
pt(406).class     = 'scalar';
pt(406).nrows     = 1;
pt(406).ncols     = 1;
pt(406).subsource = 'SS_DOUBLE';
pt(406).ndims     = '2';
pt(406).size      = '[]';
pt(406).isStruct  = false;
pt(406).symbol     = 'Analog_Solution_P.AOsat';
pt(406).baseaddr   = '&Analog_Solution_P.AOsat';
pt(406).dtname     = 'real_T';



  
pt(407).blockname = '';
pt(407).paramname = 'Afilt_Winch';
pt(407).class     = 'col-mat';
pt(407).nrows     = 2;
pt(407).ncols     = 2;
pt(407).subsource = 'SS_DOUBLE';
pt(407).ndims     = '2';
pt(407).size      = '[]';
pt(407).isStruct  = false;
pt(407).symbol     = 'Analog_Solution_P.Afilt_Winch';
pt(407).baseaddr   = '&Analog_Solution_P.Afilt_Winch[0]';
pt(407).dtname     = 'real_T';



  
pt(408).blockname = '';
pt(408).paramname = 'Bfilt_Winch';
pt(408).class     = 'col-mat';
pt(408).nrows     = 2;
pt(408).ncols     = 2;
pt(408).subsource = 'SS_DOUBLE';
pt(408).ndims     = '2';
pt(408).size      = '[]';
pt(408).isStruct  = false;
pt(408).symbol     = 'Analog_Solution_P.Bfilt_Winch';
pt(408).baseaddr   = '&Analog_Solution_P.Bfilt_Winch[0]';
pt(408).dtname     = 'real_T';



  
pt(409).blockname = '';
pt(409).paramname = 'Cfilt_Winch';
pt(409).class     = 'col-mat';
pt(409).nrows     = 2;
pt(409).ncols     = 2;
pt(409).subsource = 'SS_DOUBLE';
pt(409).ndims     = '2';
pt(409).size      = '[]';
pt(409).isStruct  = false;
pt(409).symbol     = 'Analog_Solution_P.Cfilt_Winch';
pt(409).baseaddr   = '&Analog_Solution_P.Cfilt_Winch[0]';
pt(409).dtname     = 'real_T';



  
pt(410).blockname = '';
pt(410).paramname = 'Dfilt_Winch';
pt(410).class     = 'col-mat';
pt(410).nrows     = 2;
pt(410).ncols     = 2;
pt(410).subsource = 'SS_DOUBLE';
pt(410).ndims     = '2';
pt(410).size      = '[]';
pt(410).isStruct  = false;
pt(410).symbol     = 'Analog_Solution_P.Dfilt_Winch';
pt(410).baseaddr   = '&Analog_Solution_P.Dfilt_Winch[0]';
pt(410).dtname     = 'real_T';



  
pt(411).blockname = '';
pt(411).paramname = 'JoyFiltDen';
pt(411).class     = 'vector';
pt(411).nrows     = 1;
pt(411).ncols     = 3;
pt(411).subsource = 'SS_DOUBLE';
pt(411).ndims     = '2';
pt(411).size      = '[]';
pt(411).isStruct  = false;
pt(411).symbol     = 'Analog_Solution_P.JoyFiltDen';
pt(411).baseaddr   = '&Analog_Solution_P.JoyFiltDen[0]';
pt(411).dtname     = 'real_T';



  
pt(412).blockname = '';
pt(412).paramname = 'JoyFiltNum';
pt(412).class     = 'vector';
pt(412).nrows     = 1;
pt(412).ncols     = 3;
pt(412).subsource = 'SS_DOUBLE';
pt(412).ndims     = '2';
pt(412).size      = '[]';
pt(412).isStruct  = false;
pt(412).symbol     = 'Analog_Solution_P.JoyFiltNum';
pt(412).baseaddr   = '&Analog_Solution_P.JoyFiltNum[0]';
pt(412).dtname     = 'real_T';



  
pt(413).blockname = '';
pt(413).paramname = 'JoyS_gain';
pt(413).class     = 'scalar';
pt(413).nrows     = 1;
pt(413).ncols     = 1;
pt(413).subsource = 'SS_DOUBLE';
pt(413).ndims     = '2';
pt(413).size      = '[]';
pt(413).isStruct  = false;
pt(413).symbol     = 'Analog_Solution_P.JoyS_gain';
pt(413).baseaddr   = '&Analog_Solution_P.JoyS_gain';
pt(413).dtname     = 'real_T';



  
pt(414).blockname = '';
pt(414).paramname = 'JoyS_ofst';
pt(414).class     = 'scalar';
pt(414).nrows     = 1;
pt(414).ncols     = 1;
pt(414).subsource = 'SS_DOUBLE';
pt(414).ndims     = '2';
pt(414).size      = '[]';
pt(414).isStruct  = false;
pt(414).symbol     = 'Analog_Solution_P.JoyS_ofst';
pt(414).baseaddr   = '&Analog_Solution_P.JoyS_ofst';
pt(414).dtname     = 'real_T';



  
pt(415).blockname = '';
pt(415).paramname = 'JoyS_sat';
pt(415).class     = 'scalar';
pt(415).nrows     = 1;
pt(415).ncols     = 1;
pt(415).subsource = 'SS_DOUBLE';
pt(415).ndims     = '2';
pt(415).size      = '[]';
pt(415).isStruct  = false;
pt(415).symbol     = 'Analog_Solution_P.JoyS_sat';
pt(415).baseaddr   = '&Analog_Solution_P.JoyS_sat';
pt(415).dtname     = 'real_T';



  
pt(416).blockname = '';
pt(416).paramname = 'JoyW_gain';
pt(416).class     = 'scalar';
pt(416).nrows     = 1;
pt(416).ncols     = 1;
pt(416).subsource = 'SS_DOUBLE';
pt(416).ndims     = '2';
pt(416).size      = '[]';
pt(416).isStruct  = false;
pt(416).symbol     = 'Analog_Solution_P.JoyW_gain';
pt(416).baseaddr   = '&Analog_Solution_P.JoyW_gain';
pt(416).dtname     = 'real_T';



  
pt(417).blockname = '';
pt(417).paramname = 'JoyW_ofst';
pt(417).class     = 'scalar';
pt(417).nrows     = 1;
pt(417).ncols     = 1;
pt(417).subsource = 'SS_DOUBLE';
pt(417).ndims     = '2';
pt(417).size      = '[]';
pt(417).isStruct  = false;
pt(417).symbol     = 'Analog_Solution_P.JoyW_ofst';
pt(417).baseaddr   = '&Analog_Solution_P.JoyW_ofst';
pt(417).dtname     = 'real_T';



  
pt(418).blockname = '';
pt(418).paramname = 'KspdWinch';
pt(418).class     = 'scalar';
pt(418).nrows     = 1;
pt(418).ncols     = 1;
pt(418).subsource = 'SS_DOUBLE';
pt(418).ndims     = '2';
pt(418).size      = '[]';
pt(418).isStruct  = false;
pt(418).symbol     = 'Analog_Solution_P.KspdWinch';
pt(418).baseaddr   = '&Analog_Solution_P.KspdWinch';
pt(418).dtname     = 'real_T';



  
pt(419).blockname = '';
pt(419).paramname = 'NPotSpdEst';
pt(419).class     = 'scalar';
pt(419).nrows     = 1;
pt(419).ncols     = 1;
pt(419).subsource = 'SS_DOUBLE';
pt(419).ndims     = '2';
pt(419).size      = '[]';
pt(419).isStruct  = false;
pt(419).symbol     = 'Analog_Solution_P.NPotSpdEst';
pt(419).baseaddr   = '&Analog_Solution_P.NPotSpdEst';
pt(419).dtname     = 'real_T';



  
pt(420).blockname = '';
pt(420).paramname = 'PotPosFiltDen';
pt(420).class     = 'vector';
pt(420).nrows     = 1;
pt(420).ncols     = 3;
pt(420).subsource = 'SS_DOUBLE';
pt(420).ndims     = '2';
pt(420).size      = '[]';
pt(420).isStruct  = false;
pt(420).symbol     = 'Analog_Solution_P.PotPosFiltDen';
pt(420).baseaddr   = '&Analog_Solution_P.PotPosFiltDen[0]';
pt(420).dtname     = 'real_T';



  
pt(421).blockname = '';
pt(421).paramname = 'PotPosFiltNum';
pt(421).class     = 'vector';
pt(421).nrows     = 1;
pt(421).ncols     = 3;
pt(421).subsource = 'SS_DOUBLE';
pt(421).ndims     = '2';
pt(421).size      = '[]';
pt(421).isStruct  = false;
pt(421).symbol     = 'Analog_Solution_P.PotPosFiltNum';
pt(421).baseaddr   = '&Analog_Solution_P.PotPosFiltNum[0]';
pt(421).dtname     = 'real_T';



  
pt(422).blockname = '';
pt(422).paramname = 'Pot_gain';
pt(422).class     = 'scalar';
pt(422).nrows     = 1;
pt(422).ncols     = 1;
pt(422).subsource = 'SS_DOUBLE';
pt(422).ndims     = '2';
pt(422).size      = '[]';
pt(422).isStruct  = false;
pt(422).symbol     = 'Analog_Solution_P.Pot_gain';
pt(422).baseaddr   = '&Analog_Solution_P.Pot_gain';
pt(422).dtname     = 'real_T';



  
pt(423).blockname = '';
pt(423).paramname = 'Pot_max';
pt(423).class     = 'scalar';
pt(423).nrows     = 1;
pt(423).ncols     = 1;
pt(423).subsource = 'SS_DOUBLE';
pt(423).ndims     = '2';
pt(423).size      = '[]';
pt(423).isStruct  = false;
pt(423).symbol     = 'Analog_Solution_P.Pot_max';
pt(423).baseaddr   = '&Analog_Solution_P.Pot_max';
pt(423).dtname     = 'real_T';



  
pt(424).blockname = '';
pt(424).paramname = 'Pot_min';
pt(424).class     = 'scalar';
pt(424).nrows     = 1;
pt(424).ncols     = 1;
pt(424).subsource = 'SS_DOUBLE';
pt(424).ndims     = '2';
pt(424).size      = '[]';
pt(424).isStruct  = false;
pt(424).symbol     = 'Analog_Solution_P.Pot_min';
pt(424).baseaddr   = '&Analog_Solution_P.Pot_min';
pt(424).dtname     = 'real_T';



  
pt(425).blockname = '';
pt(425).paramname = 'Pot_ofst';
pt(425).class     = 'scalar';
pt(425).nrows     = 1;
pt(425).ncols     = 1;
pt(425).subsource = 'SS_DOUBLE';
pt(425).ndims     = '2';
pt(425).size      = '[]';
pt(425).isStruct  = false;
pt(425).symbol     = 'Analog_Solution_P.Pot_ofst';
pt(425).baseaddr   = '&Analog_Solution_P.Pot_ofst';
pt(425).dtname     = 'real_T';



  
pt(426).blockname = '';
pt(426).paramname = 'Ts_1ms';
pt(426).class     = 'scalar';
pt(426).nrows     = 1;
pt(426).ncols     = 1;
pt(426).subsource = 'SS_DOUBLE';
pt(426).ndims     = '2';
pt(426).size      = '[]';
pt(426).isStruct  = false;
pt(426).symbol     = 'Analog_Solution_P.Ts_1ms';
pt(426).baseaddr   = '&Analog_Solution_P.Ts_1ms';
pt(426).dtname     = 'real_T';



  
pt(427).blockname = '';
pt(427).paramname = 'Ts_1s';
pt(427).class     = 'scalar';
pt(427).nrows     = 1;
pt(427).ncols     = 1;
pt(427).subsource = 'SS_DOUBLE';
pt(427).ndims     = '2';
pt(427).size      = '[]';
pt(427).isStruct  = false;
pt(427).symbol     = 'Analog_Solution_P.Ts_1s';
pt(427).baseaddr   = '&Analog_Solution_P.Ts_1s';
pt(427).dtname     = 'real_T';



  
pt(428).blockname = '';
pt(428).paramname = 'WinchDrumRad';
pt(428).class     = 'scalar';
pt(428).nrows     = 1;
pt(428).ncols     = 1;
pt(428).subsource = 'SS_DOUBLE';
pt(428).ndims     = '2';
pt(428).size      = '[]';
pt(428).isStruct  = false;
pt(428).symbol     = 'Analog_Solution_P.WinchDrumRad';
pt(428).baseaddr   = '&Analog_Solution_P.WinchDrumRad';
pt(428).dtname     = 'real_T';



  
pt(429).blockname = '';
pt(429).paramname = 'WinchMotPosAIgain';
pt(429).class     = 'scalar';
pt(429).nrows     = 1;
pt(429).ncols     = 1;
pt(429).subsource = 'SS_DOUBLE';
pt(429).ndims     = '2';
pt(429).size      = '[]';
pt(429).isStruct  = false;
pt(429).symbol     = 'Analog_Solution_P.WinchMotPosAIgain';
pt(429).baseaddr   = '&Analog_Solution_P.WinchMotPosAIgain';
pt(429).dtname     = 'real_T';



  
pt(430).blockname = '';
pt(430).paramname = 'WinchMotTorqueMax';
pt(430).class     = 'scalar';
pt(430).nrows     = 1;
pt(430).ncols     = 1;
pt(430).subsource = 'SS_DOUBLE';
pt(430).ndims     = '2';
pt(430).size      = '[]';
pt(430).isStruct  = false;
pt(430).symbol     = 'Analog_Solution_P.WinchMotTorqueMax';
pt(430).baseaddr   = '&Analog_Solution_P.WinchMotTorqueMax';
pt(430).dtname     = 'real_T';



  
pt(431).blockname = '';
pt(431).paramname = 'WinchPosFiltDen';
pt(431).class     = 'vector';
pt(431).nrows     = 1;
pt(431).ncols     = 3;
pt(431).subsource = 'SS_DOUBLE';
pt(431).ndims     = '2';
pt(431).size      = '[]';
pt(431).isStruct  = false;
pt(431).symbol     = 'Analog_Solution_P.WinchPosFiltDen';
pt(431).baseaddr   = '&Analog_Solution_P.WinchPosFiltDen[0]';
pt(431).dtname     = 'real_T';



  
pt(432).blockname = '';
pt(432).paramname = 'WinchPosFiltNum';
pt(432).class     = 'vector';
pt(432).nrows     = 1;
pt(432).ncols     = 3;
pt(432).subsource = 'SS_DOUBLE';
pt(432).ndims     = '2';
pt(432).size      = '[]';
pt(432).isStruct  = false;
pt(432).symbol     = 'Analog_Solution_P.WinchPosFiltNum';
pt(432).baseaddr   = '&Analog_Solution_P.WinchPosFiltNum[0]';
pt(432).dtname     = 'real_T';



  
pt(433).blockname = '';
pt(433).paramname = 'WinchRefSpdSup';
pt(433).class     = 'scalar';
pt(433).nrows     = 1;
pt(433).ncols     = 1;
pt(433).subsource = 'SS_DOUBLE';
pt(433).ndims     = '2';
pt(433).size      = '[]';
pt(433).isStruct  = false;
pt(433).symbol     = 'Analog_Solution_P.WinchRefSpdSup';
pt(433).baseaddr   = '&Analog_Solution_P.WinchRefSpdSup';
pt(433).dtname     = 'real_T';



  
pt(434).blockname = '';
pt(434).paramname = 'WinchSpdEstFiltDen';
pt(434).class     = 'vector';
pt(434).nrows     = 1;
pt(434).ncols     = 3;
pt(434).subsource = 'SS_DOUBLE';
pt(434).ndims     = '2';
pt(434).size      = '[]';
pt(434).isStruct  = false;
pt(434).symbol     = 'Analog_Solution_P.WinchSpdEstFiltDen';
pt(434).baseaddr   = '&Analog_Solution_P.WinchSpdEstFiltDen[0]';
pt(434).dtname     = 'real_T';



  
pt(435).blockname = '';
pt(435).paramname = 'WinchSpdEstFiltNum';
pt(435).class     = 'vector';
pt(435).nrows     = 1;
pt(435).ncols     = 3;
pt(435).subsource = 'SS_DOUBLE';
pt(435).ndims     = '2';
pt(435).size      = '[]';
pt(435).isStruct  = false;
pt(435).symbol     = 'Analog_Solution_P.WinchSpdEstFiltNum';
pt(435).baseaddr   = '&Analog_Solution_P.WinchSpdEstFiltNum[0]';
pt(435).dtname     = 'real_T';



  
pt(436).blockname = '';
pt(436).paramname = 'WinchTravelMin_m';
pt(436).class     = 'scalar';
pt(436).nrows     = 1;
pt(436).ncols     = 1;
pt(436).subsource = 'SS_DOUBLE';
pt(436).ndims     = '2';
pt(436).size      = '[]';
pt(436).isStruct  = false;
pt(436).symbol     = 'Analog_Solution_P.WinchTravelMin_m';
pt(436).baseaddr   = '&Analog_Solution_P.WinchTravelMin_m';
pt(436).dtname     = 'real_T';



  
pt(437).blockname = '';
pt(437).paramname = 'WinchVoltMax';
pt(437).class     = 'scalar';
pt(437).nrows     = 1;
pt(437).ncols     = 1;
pt(437).subsource = 'SS_DOUBLE';
pt(437).ndims     = '2';
pt(437).size      = '[]';
pt(437).isStruct  = false;
pt(437).symbol     = 'Analog_Solution_P.WinchVoltMax';
pt(437).baseaddr   = '&Analog_Solution_P.WinchVoltMax';
pt(437).dtname     = 'real_T';



  
pt(438).blockname = '';
pt(438).paramname = 'x0_Winch';
pt(438).class     = 'vector';
pt(438).nrows     = 2;
pt(438).ncols     = 1;
pt(438).subsource = 'SS_DOUBLE';
pt(438).ndims     = '2';
pt(438).size      = '[]';
pt(438).isStruct  = false;
pt(438).symbol     = 'Analog_Solution_P.x0_Winch';
pt(438).baseaddr   = '&Analog_Solution_P.x0_Winch[0]';
pt(438).dtname     = 'real_T';


function len = getlenPT
len = 438;

