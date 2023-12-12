clear all
clc

n = input("Enter: ");

x = (1+sqrt(5))/2;
fib = (x^n - (x-sqrt(5))^n) / sqrt(5);

disp(fib)
