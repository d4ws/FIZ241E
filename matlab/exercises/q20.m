% dy/dx = x + y , y(0) = 1 , y(5) = ?

clear all
clc

func = @(x,y) x+y;

% euler
x0 = 0;
yi = 1;
xf = 5;
N = 100;

h = (xf - x0) / N;

xvalues = linspace(x0 ,xf,N);
yvalues = zeros(1,N);

yvalues(1) = yi;

for i = 1:N-1
  yvalues(i+1) = yvalues(i) + h*func(xvalues(i),yvalues(i));
end

fprintf("Euler: %d\n", yvalues(N))

% RK2

for i = 1:N-1
  yvalues(i+1) = yvalues(i) + h/2* (func(xvalues(i),yvalues(i)) + func(xvalues(i+1),yvalues(i) + h*func(xvalues(i),yvalues(i))));
end
fprintf("RK2: %d\n", yvalues(N))

%RK4

for i=1:N-1
  F1 = func(xvalues(i),yvalues(i));
  F2 = func(xvalues(i) + h/2 , yvalues(i) + h/2 * F1);
  F3 = func(xvalues(i) + h/2 , yvalues(i) + h/2 * F2);
  F4 = func(xvalues(i) + h , yvalues(i) + h * F3);

  yvalues(i+1) = yvalues(i) + h/6 * (F1 + 2*F2 + 2*F3 + F4);
end

fprintf("RK4: %d\n", yvalues(N))


