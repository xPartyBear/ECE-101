%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ECE 101                       %
% Sound Limit Test              %
% Michael Dekoski               %
% 4-4-23                        %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Clear Workspace/Command Window

clc     % Clears the command/console window
clear   % Clears the workspace

%% Declare Vars

soundMeas = 90;     % in decibels
soundLimit = 10;    % in decibels

%% Init Flag/Test

soundDanger = false;
soundDanger = soundMeas > soundLimit;

%% Promp User

soundLevelPrompt = 'NA';

if soundDanger == 0
    soundLevelPrompt = 'Everything is gonna be alright';
else
    soundLevelPrompt = 'Run!';
end

soundLevelPrompt