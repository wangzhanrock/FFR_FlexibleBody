close all, clear all; 
% fI = {'nu1_ATS_', 'nu1_TS_', 'nu0_ATS_', 'nu0_TS_'};
fI = {'nu1_ATS_'};
fO = {'nu1_ATS', 'nu1_TS', 'nu0_ATS', 'nu0_TS'};

prepath = '/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s_setupA/';
% prepath = '/home/zwang/MBSim/mbsim/examples/mechanics/flexible_body/linear_external_ffr_contour2s_setupB/';

file = 'Eigen/MBS.mbsim.h5';
folderIndex = [10, 20, 30, 40, 60, 80, 100];

abaqusPSU2ID = fopen(strcat(prepath,'ABAQUS_linearSoften1e7_kinematic_PSU2.txt'),'r');
abaqusPSV2ID = fopen(strcat(prepath,'ABAQUS_linearSoften1e7_kinematic_PSV2.txt'),'r');
formatSpec = '%f %f';
sizeA = [2 Inf];
abaqusPSU2 = fscanf(abaqusPSU2ID,formatSpec,sizeA);
abaqusPSU2 = abaqusPSU2';
fclose(abaqusPSU2ID);
abaqusPSV2 = fscanf(abaqusPSV2ID,formatSpec,sizeA);
abaqusPSV2 = abaqusPSV2';
fclose(abaqusPSV2ID);


for k= 1:length(fI)
    outprepath = '/usr/users/laplace/zwang/figure/abaqusContact/setupA/';
    
    h = figure(k);
    set(h,'DefaultAxesColorOrder',[1 0 0;0 1 0;0 0 1],...
      'DefaultAxesLineStyleOrder','-|--|-.')
    hold all;
    for i = 1: length(folderIndex)
        
        path = strcat(prepath, fI(k), num2str(folderIndex(i)),file),
        path = path{1},
        
        mbsim_ball = h5read(path, '/Ball/data');
        mbsim_ball = mbsim_ball';
        % change meter and meter/s  to millimeter and millimeter/s
        mbsim_ball(:,2:end) = mbsim_ball(:,2:end) * 1000;
        
       
        plot(mbsim_ball(:,1),mbsim_ball(:,3)); % plot y position

        clear mbsim_ball;

    end

    plot(abaqusPSU2(1:2199,1),abaqusPSU2(1:2199,2));
    hleg =legend('MBSim: 10 ', 'MBSim: 20 ', 'MBSim: 30 ', 'MBSim: 40 ','MBSim: 60 ','MBSim: 80 ','MBSim: 100 ','ABAQUS');
    set(hleg,'Location','Best')
    outpath = strcat(outprepath,fO(k), '/mbsim_PSB_NMSV_psPosition_abaqus.pdf'),
    X = 13.0;                  %# A3 paper size
    Y = 13;                  %# A3 paper size
    xMargin = 0;               %# left/right margins from page borders
    yMargin = 0;               %# bottom/top margins from page borders
    xSize = X - 2*xMargin;     %# figure size on paper (widht & hieght)
    ySize = Y - 2*yMargin; 
    set(h, 'PaperUnits','centimeters')
    set(h, 'PaperSize',[X Y])
    set(h, 'PaperPosition',[xMargin yMargin xSize ySize])

    print(h,'-dpdf', outpath{1} );

end

% plot velociy compare figure
for k= 1:length(fI)
    outprepath = '/usr/users/laplace/zwang/figure/abaqusContact/setupA/';
    
    
    h = figure(length(fI)+k);
    set(h,'DefaultAxesColorOrder',[1 0 0;0 1 0;0 0 1],...
      'DefaultAxesLineStyleOrder','-|--|-.')
    hold all;
    for i = 1: length(folderIndex)
        
        path = strcat(prepath, fI(k), num2str(folderIndex(i)),file),
        path = path{1},
        
        mbsim_ball = h5read(path, '/Ball/data');
        mbsim_ball = mbsim_ball';
        % change meter and meter/s  to millimeter and millimeter/s
        mbsim_ball(:,2:end) = mbsim_ball(:,2:end) * 1000;
        

        plot(mbsim_ball(:,1),mbsim_ball(:,6)); % plot y velocity
        
        clear mbsim_ball;

    end
    
    plot(abaqusPSV2(1:2199,1),abaqusPSV2(1:2199,2));
    hleg =legend('MBSim: 10 ', 'MBSim: 20 ', 'MBSim: 30 ', 'MBSim: 40 ','MBSim: 60 ','MBSim: 80 ','MBSim: 100 ','ABAQUS');
    set(hleg,'Location','Best')
    
    outpath = strcat(outprepath,fO(k), '/mbsim_PSB_NMSV_psVelocity_abaqus.pdf'),
    X = 13.0;                  %# A3 paper size
    Y = 13;                  %# A3 paper size
    xMargin = 0;               %# left/right margins from page borders
    yMargin = 0;               %# bottom/top margins from page borders
    xSize = X - 2*xMargin;     %# figure size on paper (widht & hieght)
    ySize = Y - 2*yMargin; 
    set(h, 'PaperUnits','centimeters')
    set(h, 'PaperSize',[X Y])
    set(h, 'PaperPosition',[xMargin yMargin xSize ySize])
    print(h,'-dpdf', outpath{1});

end