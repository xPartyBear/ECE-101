%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ECE 101                       %
% Wheatstone Bridge             %
% Michael Dekoski               %
% 4-7-23                        %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear
clc

%% Init Vars
VS = 12;    % Volts
R1 = 250;   % Ohms
R2 = 250;   % Ohms
R3 = 250;   % Ohms
RC = 50;   % Ohms

VD = ((R2 / (R1 + R2)) - (RC / (R3 + RC))) * VS