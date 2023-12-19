function[res] = q19trapezoid(a,b,N)

h = (b-a)/N;
res = h/2*(q19integrand(a) + q19integrand(b));
for i = 1:N
  res += h*(q19integrand(a + i*h));
endfor
endfunction

