clc
clear all

x = 0:0.1:10;
plot(x, sin(x),x, cos(x) , "r" );
title("sin cos");
xlabel("x")
ylabel("sin and cos")
legend("sin","cos")
grid on % toggle current axes grid visibility
