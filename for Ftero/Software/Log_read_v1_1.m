try
    clear AWE
end

hawe_fs=xpctarget.fs('TCPIP','192.168.7.1','22222');


open_id=fopen(hawe_fs,'VAR_TIME.dat');
time=fread(hawe_fs,open_id);
hawe_fs.fclose(open_id);

try
    open_id=fopen(hawe_fs,'VAR_1.dat');
    var_1=fread(hawe_fs,open_id);
    hawe_fs.fclose(open_id);
end
% 
open_id=fopen(hawe_fs,'VAR_100.dat');
var_100=fread(hawe_fs,open_id);
hawe_fs.fclose(open_id);

% open_id=fopen(hawe_fs,'VAR_1e3.dat');
% var_1e3=fread(hawe_fs,open_id);
% hawe_fs.fclose(open_id);

% 
% open_id=fopen(hawe_fs,'Var_MVLK.dat');
% var_GPS=fread(hawe_fs,open_id);
% hawe_fs.fclose(open_id);


Acq_100=readxpcfile(var_100);
Acq_1=readxpcfile(var_1);
Acq_time=readxpcfile(time);
% Acq_1e3=readxpcfile(var_1e3);
% Acq_MVLK=readxpcfile(var_GPS);

clear open_id hawe_fs time var_100 var_1

eval(['save HAWE_log_' num2str(Acq_time.data(1,3)) '_'...
    num2str(Acq_time.data(1,2)) '_' num2str(Acq_time.data(1,1))...
    '_' num2str(Acq_time.data(1,4)) '_' num2str(Acq_time.data(1,5))]);
