fA = {'nu1_ATS_', 'nu1_TS_', 'nu0_ATS_', 'nu0_TS_'};
fO = {'nu1_ATS', 'nu1_TS', 'nu0_ATS', 'nu0_TS'};

prepath = '/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s/';
% prepath = '/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s_setupB/penalty_ATS_';

file = 'Eigen/MBS.mbsim.h5';
folder = [10, 20, 30, 40, 60, 80, 100];

for k= 1:4
    outprepath = '/usr/users/laplace/zwang/figure/abaqusContact/setupA/';
    outendung = 'Modes.out';

    for i = 1: length(folder)

        path = strcat(prepath, fA(k), num2str(folder(i)),file),
        path = path{1},
        outpath = strcat(outprepath,fO(k), '/mbsim_PS_', num2str(folder(i)), outendung),
        outpath = outpath{1},
        
        mbsim_ball = h5read(path, '/Ball/data');
        mbsim_ball = mbsim_ball';
        % change meter and meter/s  to millimeter and millimeter/s
        mbsim_ball(:,2:end) = mbsim_ball(:,2:end) * 1000;
        
        save(outpath, 'mbsim_ball', '-ASCII')

        clear mbsim_ball;

    end

end


% 
% prepath = '/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s/nu0_ATS_';
% 
% file = 'Eigen/MBS.mbsim.h5';
% folder =[30];
% 
% outprepath = '/usr/users/laplace/zwang/figure/abaqusContact/nu0_setupA/mbsim_PS_nu0_ATS_';
% outendung = 'Modes.out';
% 
% for i = 1: length(folder)
%     
%     path = strcat(prepath, num2str(folder(i)),file),
%     mbsim_ball = h5read(path, '/Ball/data');
%     mbsim_ball = mbsim_ball';
%     % change meter and meter/s  to millimeter and millimeter/s
%     mbsim_ball(:,2:end) = mbsim_ball(:,2:end) * 1000;
%     outpath = strcat(outprepath, num2str(folder(i)), outendung),
%     save(outpath, 'mbsim_ball', '-ASCII')
% 
%     clear mbsim_ball;
% 
% end





% plot(mbsim(1,:), mbsim(3,:), 'r')
% legend('Location', 'SouthEast','C3D4','MBSim');


% mbsim_node= h5read('/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s/MBS.ombv.h5', '/beam_Group/RefFrame19/data');
% 
% mbsim_node = mbsim_node';
% mbsim_node = mbsim_node(:,1:end-1);
% 
% %change meter and meter/s  to millimeter and millimeter/s
% mbsim_node(:,2:end) = mbsim_node(:,2:end) * 1000;
% 
% % minus the initial position to get the displacement
% mbsim_node(:,2) = mbsim_node(:,2)  - mbsim_node(1,2) 
% mbsim_node(:,3) = mbsim_node(:,3)  - mbsim_node(1,3) 
% mbsim_node(:,4) = mbsim_node(:,4)  - mbsim_node(1,4) 
% save /usr/users/laplace/zwang/figure/abaqusContact/mbsim_penalty_node19_ATS.out mbsim_node -ASCII;
