clear all
clc

array = [2,4,56,15,16,1362,64789,3485,3];

[mymin,mymax,myave] = myfunc(array);

fprintf("Min : %d\n", mymin);
fprintf("Max : %d\n", mymax);
fprintf("Average : %d", myave);
