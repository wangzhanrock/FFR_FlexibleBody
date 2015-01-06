clear all; close all; clc;
format long;
mij = [2.393118773885549e05  1.177597676428616e+05  1.215521537540625e05];
u0 = [105.0 10.0 5.13000011; 23.1499996 10. 20.; 95. 5. 5.13000011];
phi =[
          -0.4038  2.8380E-02 -4.0496E-02      0.9991      0.9971;
           0.8634  8.6471E-02      0.2491     -0.1067      0.3371;
      -8.8401E-06      0.9422       1.000  8.8920E-04  3.3861E-03;
      -7.3827E-02 -2.7577E-02  4.2396E-02      0.1615  8.2510E-02;
           0.9993 -8.2909E-02     -0.2362     -0.4394  3.0025E-03;
      -2.8757E-06      0.5731     -0.3103  5.4185E-03  2.5767E-02;
       6.1765E-02 -2.7518E-02  4.2206E-02     -0.1230 -4.3357E-02;
           0.9992 -8.3041E-02     -0.2363     -0.4297  4.3270E-02;
       4.0486E-05      0.4039     -0.7912 -2.7480E-03 -1.1402E-02
     ];

Elements = 3;
nf = 5

%% compute shape integrals
I_1 = zeros(3,1);
I_kl = zeros(3);
S_bar = zeros(3,nf);
S_kl_bar = zeros(nf,nf,3,3);
I_kl_bar = zeros(1,nf,3,3);

for j = 1: Elements
  I_1 = I_1 + mij(j) * u0(j,:)';
end

for k = 1:3
  for l = 1:3
    for j = 1:Elements
    I_kl(k,l) = I_kl(k,l) + mij(j) * u0(j,k) * u0(j,l);
    end
  end
end

for j = 1:Elements
  S_bar =  S_bar + mij(j) * phi(3*j-2:3*j,:);
end

for k = 1:3
  for l = 1:3
    for j = 1:Elements

        S_kl_bar(:,:,k,l) = S_kl_bar(:,:,k,l) + mij(j) * phi(3*j-3+k,:)' * phi(3*j-3+l,:);
        
    end
  end
end

for k = 1:3
  for l = 1:3
    for j = 1:Elements
        k, l, j, mij(j),
        u = u0(j,k),
        N_l = phi(3*j-3+l,:),
        mij(j)* u0(j,k) * N_l,
        I_kl_bar(:,:,k,l) = I_kl_bar(:,:,k,l) + mij(j) * u0(j,k) * phi(3*j-3+l,:);
        I_kl_bar(:,:,k,l),
    end
  end
end

%I_1, 
%I_kl,
%S_bar,
%S_kl_bar,
%I_kl_bar,

%% updateAGGDot
q = zeros(11,1);
% q(1) = 0.2;
% q(2) = 0.3;
% q(3) = 0.4;
% q(4) = pi / 6;
% q(5) = pi / 3;
% q(6) = pi / 3;
% q(7) = 0.002; 
% q(8) = 0.003;     
% q(9) = 0.004;     
% q(10) = 0.002;     
% q(11) = 0.003;
PHI = q(4);
theta = q(5);
psi = q(6);

A = zeros(3);
G_bar = A;
G_barDot = A;

A(1,1) = cos(theta)*cos(psi);
A(1,2) = -cos(theta)*sin(psi); 
A(1,3) = sin(theta);

A(2,1) = sin(PHI)*sin(theta)*cos(psi)+cos(PHI)*sin(psi); 
A(2,2) = -sin(PHI)*sin(theta)*sin(psi)+cos(PHI)*cos(psi);
A(2,3) = -sin(PHI)*cos(theta);

A(3,1) =-cos(PHI)*sin(theta)*cos(psi)+sin(PHI)*sin(psi);
A(3,2) = cos(PHI)*sin(theta)*sin(psi)+sin(PHI)*cos(psi);
A(3,3) = cos(PHI)*cos(theta);
    

G_bar = [ cos(theta)*cos(psi)     sin(psi)   0;
      -cos(theta)*sin(psi)    cos(psi)   0;
      sin(theta)              0          1
    ];

G_barDot= [ -sin(theta)*cos(psi)-cos(theta)*sin(psi)    cos(psi)   0;
        sin(theta)*sin(psi)-cos(theta)*cos(psi)    -sin(psi)   0;
        cos(theta)                                  0          0
      ];

A, G_bar, G_barDot,

%% mass matrix part
qf = q(7:11);

% M_RR
M_RR_value = 0;
for j = 1:Elements
    M_RR_value = M_RR_value + mij(j);
end

M_RR = diag(M_RR_value * ones(3,1));


% M_FF
M_FF_1st = S_kl_bar(:,:,1,1) + S_kl_bar(:,:,2,2) + S_kl_bar(:,:,3,3);

M_FF_2nd = zeros(nf);
for j = 1:Elements
    M_FF_2nd = M_FF_2nd  + mij(j) * phi(3*j-2:3*j,:)' * phi(3*j-2:3*j,:);
end

norm(M_FF_1st - M_FF_2nd),

M_FF = M_FF_1st;

% M_RTheta
S_t_bar_vector = I_1 + S_bar*qf;
S_t_bar = tilde(S_t_bar_vector);

M_RTheta = - A * S_t_bar * G_bar; 


% M_ThetaTheta

for k = 1:3
    for l = 1:3
        u(k,l) = I_kl(k,l) + (I_kl_bar(:,:,k,l)+I_kl_bar(:,:,l,k))*qf + qf'*S_kl_bar(:,:,k,l)*qf;
    end
end


I_ThetaTheta =[u(2,2)+u(3,3)   -u(2,1)       -u(3,1);
               -u(2,1)        u(1,1)+u(3,3)  -u(3,2);
               -u(3,1)        -u(3,2)        u(1,1)+u(2,2) 
              ];

M_ThetaTheta = G_bar' * I_ThetaTheta * G_bar;


% M_RF
M_RF = A * S_bar;

% M_ThetaF
I_ThetaF = zeros(3,nf);
I_ThetaF(1,:)=  qf' * (S_kl_bar(:,:,2,3) - S_kl_bar(:,:,3,2)) + I_kl_bar(:,:,2,3) -I_kl_bar(:,:,3,2);
I_ThetaF(2,:)=  qf' * (S_kl_bar(:,:,3,1) - S_kl_bar(:,:,1,3)) + I_kl_bar(:,:,3,1) -I_kl_bar(:,:,1,3);
I_ThetaF(3,:)=  qf' * (S_kl_bar(:,:,1,2) - S_kl_bar(:,:,2,1)) + I_kl_bar(:,:,1,2) -I_kl_bar(:,:,2,1);

M_ThetaF = G_bar' * I_ThetaF;

M = [ M_RR      M_RTheta      M_RF;
      M_RTheta' M_ThetaTheta  M_ThetaF; 
      M_RF'     M_ThetaF'     M_FF
    ];


%% Qv()
vel = zeros(6 + nf, 1);
% vel(1) = 2;
% vel(2) = 3;
% vel(3) = 4;
% vel(4) = 10 * pi / 6;
% vel(5) = 10 * pi / 3;
% vel(6) = 10 * pi / 3;
% 
% vel(7) = 0.02;
% vel(8) = 0.03;
% vel(9) = 0.04;
% vel(10) = 0.02;
% vel(11) = 0.03;

uTheta = vel(4:6);
uf = vel(7:11);
Qv = zeros(11,1);

omega_bar = G_bar * uTheta;
omega_bar_skew = tilde(omega_bar);

Qv(1:3) = -A * (omega_bar_skew * omega_bar_skew * S_t_bar_vector  + 2 * omega_bar_skew * S_bar * uf);

G_barDot, I_ThetaTheta, G_bar, uTheta,  I_ThetaF, uf, 
-2*G_barDot'*I_ThetaTheta*omega_bar,
- 2*G_barDot'*I_ThetaF*uf,
- G_bar'*I_ThetaTheta*omega_bar,


Qv(4:6) = -2*G_barDot'*I_ThetaTheta*omega_bar - 2*G_barDot'*I_ThetaF*uf - G_bar'*I_ThetaTheta*omega_bar;
for j = 1 : Elements
Qv(7:end) = Qv(7:end) - mij(j) * ( phi(3*j-2:3*j,:)' * (omega_bar_skew*omega_bar_skew*(u0(j,:)'+phi(3*j-2:3*j,:)*qf) + 2*omega_bar_skew*phi(3*j-2:3*j,:)*uf ) );
end
  
  
Qv,  
  
  

