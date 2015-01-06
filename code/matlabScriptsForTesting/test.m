% M1 without zero mode vectors
M1 = [    1.68903e+08             0             0             0   1.68903e+09  -1.14321e+09  -6.14136e+06       -196974       -157155   1.53394e+07   1.33803e+07
               0   1.68903e+08             0  -1.68903e+09             0   9.53578e+09   6.89405e+07       -212860       -578783   2.20615e+07  -9.90943e+06
               0             0   1.68903e+08   1.14321e+09  -9.53578e+09             0      -14441.8   4.39628e+07  -1.45903e+07      -35429.8        410167
               0  -1.68903e+09   1.14321e+09   3.83816e+10  -7.90804e+10  -9.53578e+10   -6.4215e+08   4.13952e+08   3.62142e+07  -2.38403e+08   1.29359e+08
     1.68903e+09             0  -9.53578e+09  -7.90804e+10   7.34098e+11  -1.14321e+10  -6.38562e+07  -3.23337e+09   9.52206e+08   1.70039e+08   1.23696e+08
    -1.14321e+09   9.53578e+09             0  -9.53578e+10  -1.14321e+10   7.26908e+11   5.11587e+09   2.93263e+07   1.03443e+08   9.72247e+08  -4.17399e+08
    -6.14136e+06   6.89405e+07      -14441.8   -6.4215e+08  -6.38562e+07   5.11587e+09   4.97994e+07       -145275       -376287  -1.75869e+06       -867619
         -196974       -212860   4.39628e+07   4.13952e+08  -3.23337e+09   2.93263e+07       -145275   2.33215e+07   3.82871e+06      -29296.5        9676.4
         -157155       -578783  -1.45903e+07   3.62142e+07   9.52206e+08   1.03443e+08       -376287   3.82871e+06   2.41108e+07      -69554.7       -183797
     1.53394e+07   2.20615e+07      -35429.8  -2.38403e+08   1.70039e+08   9.72247e+08  -1.75869e+06      -29296.5      -69554.7   2.31859e+07   3.23409e+06
     1.33803e+07  -9.90943e+06        410167   1.29359e+08   1.23696e+08  -4.17399e+08       -867619        9676.4       -183797   3.23409e+06   1.62141e+07 ];
 


M2 =[ 1.689026e+08  0.000000e+00  0.000000e+00  0.000000e+00  1.689026e+09  -1.147065e+09 -4.901005e+06 8.417265e-04  -1.507272e-03 1.275825e+07  1.141874e+07  
  0.000000e+00  1.689026e+08  0.000000e+00  -1.689026e+09 0.000000e+00  9.535520e+09  7.214448e+07  2.793856e-03  1.162389e-02  2.432615e+07  -1.128821e+07 
  0.000000e+00  0.000000e+00  1.689026e+08  1.147065e+09  -9.535520e+09 0.000000e+00  2.901017e-03  4.413927e+07  -2.072637e+07 2.657923e-03  -1.090032e-04 
  0.000000e+00  -1.689026e+09 1.147065e+09  3.845198e+10  -7.938575e+10 -9.535520e+10 -7.214448e+08 5.615914e+08  2.832375e+08  -2.432615e+08 1.128821e+08  
  1.689026e+09  0.000000e+00  -9.535520e+09 -7.938575e+10 7.340463e+11  -1.147065e+10 -4.901005e+07 -3.641002e+09 1.441976e+09  1.275825e+08  1.141874e+08  
  -1.147065e+09 9.535520e+09  0.000000e+00  -9.535520e+10 -1.147065e+10 7.269269e+11  5.984446e+09  1.523189e-01  6.694783e-01  5.736591e+08  -2.706134e+08 
  -4.901005e+06 7.214448e+07  2.901017e-03  -7.214448e+08 -4.901005e+07 5.984446e+09  5.111755e+07  2.262372e-03  3.853075e-03  -2.156390e+02 2.449129e+02  
  8.417265e-04  2.793856e-03  4.413927e+07  5.615914e+08  -3.641002e+09 1.523189e-01  2.262372e-03  2.172939e+07  -2.996022e+02 1.577022e-03  -1.179327e-04 
  -1.507272e-03 1.162389e-02  -2.072637e+07 2.832375e+08  1.441976e+09  6.694783e-01  3.853075e-03  -2.996022e+02 2.258576e+07  2.753815e-03  -3.789926e-04 
  1.275825e+07  2.432615e+07  2.657923e-03  -2.432615e+08 1.275825e+08  5.736591e+08  -2.156390e+02 1.577022e-03  2.753815e-03  2.145428e+07  -2.243677e+02 
  1.141874e+07  -1.128821e+07 -1.090032e-04 1.128821e+08  1.141874e+08  -2.706134e+08 2.449129e+02  -1.179327e-04 -3.789926e-04 -2.243677e+02 1.391473e+07   ]




format long;

M1-M2,

eigM1=eig(M1)
eigM2=eig(M2)

eig(M1)-eig(M2)
   
%    chol(M)





% M= [1.236   0       -0.1602  0.5352             -0.309
%     0       1.236   0.2650   0.309              0.5352
%     0       0       0.1031   -4.326*100^(-3)    0.2167
%     0       0       0        0.412              0
%     0       0       0        0                  0.4591];
% 
% M = M + triu(M,1)'
% 
% eigM=eig(M)
% invM=inv(M)
% [L,U]=lu(M)
% cholMrr=chol(M(1:2,1:2))
% cholMrf=chol(M(1:2,4:5))
% cholMff=chol(M(4:5,4:5))
% 
% cholM = chol(M)