clear all
clc

x = input("Enter x: ");
N = input("Enter N: ");

[res] = q18myownsinus(x,N)
sin(x)
disp(sin(x) - res) % must be very close to 0.
