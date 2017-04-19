function bio=speedgoat_test_SN2593_R2016bbio
bio = [];
bio(1).blkName='IO751/Byte Pack';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[4,1];
bio(1).sigWidth=4;
bio(1).sigAddress='&speedgoat_test_SN2593_R2016b_B.BytePack[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='IO751/Byte Unpack1';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&speedgoat_test_SN2593_R2016b_B.ByteUnpack1';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='IO751/PNM Receive';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[4,1];
bio(3).sigWidth=4;
bio(3).sigAddress='&speedgoat_test_SN2593_R2016b_B.PNMReceive[0]';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='IO751/Counter Free-Running2/Output';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&speedgoat_test_SN2593_R2016b_B.Output';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='IO751/Counter Free-Running3/Output';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&speedgoat_test_SN2593_R2016b_B.Output_f';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='IO751/Counter Free-Running2/Increment Real World/FixPt Sum1';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&speedgoat_test_SN2593_R2016b_B.FixPtSum1';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='IO751/Counter Free-Running2/Wrap To Zero/FixPt Switch';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&speedgoat_test_SN2593_R2016b_B.FixPtSwitch';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='IO751/Counter Free-Running3/Increment Real World/FixPt Sum1';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&speedgoat_test_SN2593_R2016b_B.FixPtSum1_m';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='IO751/Counter Free-Running3/Wrap To Zero/FixPt Switch';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&speedgoat_test_SN2593_R2016b_B.FixPtSwitch_j';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

function len = getlenBIO
len = 9;

