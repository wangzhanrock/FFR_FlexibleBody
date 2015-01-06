% Calculation of the Example 5.3 in Shabana2005 - p 211

m = 1.236;
l = 0.5;
theta = 30/180*pi;
qr = [1;0.5;theta];
qf = [0.001;0.01];


SB = m/2 * [1 0; 0 1];


ST = m * [0 7/20;-7/20 0];
I1 = m*l/2 * [1;0];
I2 = m*l/3 * [1;0];

SBqf = SB * qf;
I1PSBqf = I1 + SBqf;

mff = m * [1/3 0; 0 13/35];
At =[-sin(theta) -cos(theta); cos(theta) -sin(theta)]; 
A = [cos(theta) -sin(theta); sin(theta) cos(theta)];
mRt = At * I1PSBqf;
mRf = A * SB;
mrr = [m 0; 0 m];
mttrf = 2/3*m*l/3 *[1 0] * qf;
mttff = qf' * mff * qf;
mtt = m*l^2/3 + mttrf + mttff;
mtf = m*l*[0 7/20] + qf' * ST;



M = [     m     0  mRt(1)  mRf(1,1)  mRf(1,2);
          0     m  mRt(2)  mRf(2,1)  mRf(2,2);
          0     0  mtt     mtf(1)    mtf(2);
          0     0       0  mff(1,1)  0;
          0     0       0      0     mff(2,2)];
M = M+triu(M,1)';

disp(eig(M))

