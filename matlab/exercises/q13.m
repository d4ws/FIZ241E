clear all
clc

a= 0.7;
b= 0.2;
days = 50;
t = 1;

S = zeros(1,days);
I = zeros(1,days);
R = zeros(1,days);

S(1) = 0.99;
I(1) = 0.01;
R(1) = 0;

while(t < days)
  S(t + 1) = S(t) - a*I(t)*S(t);
  I(t + 1) = I(t) + a*I(t)*S(t) - b*I(t);
  R(t + 1) = R(t) + b*I(t);

  t++;

endwhile
tt = 0:days - 1; % 0 den 49 a kadar birer birer artan bir x ekseni oluşturuyoruz.
plot(tt, S, "black" ,tt,I , tt,R);
xlabel("days")
legend("Sick","Infected","Recovered")

