%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ECE 101                       %
% Assignment 1 Limit Test       %
% Michael Dekoski               %
% 4-7-23                        %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Clear Workspace/Command Window

clc     % Clears the command/console window
clear   % Clears the workspace

%% Declare Vars

hoursOnComputer = 10;
hoursLimit = 15;

%% Init Flag/Test

limitReached = false;
limitReached = hoursOnComputer > hoursLimit;

%% Promp User

limitReachedPrompt = 'NA';

if limitReached == 0
    limitReachedPrompt = 'Not at daily limit yet.';
else
    limitReachedPrompt = 'Over daily limit.';
end

limitReachedPrompt