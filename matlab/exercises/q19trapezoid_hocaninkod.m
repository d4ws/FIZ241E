function[res] = q19trapezoid_hocaninkod(a,b,N)

x = linspace(a,b,N);
h = (b-a)/N;
y = q19integrand(x);
y_aradakiler = y(2:N-1);
res = 1/2*h*(2*sum(y_aradakiler) + y(1) + y(N));

endfunction

