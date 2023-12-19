function[myvalue] = q18myownsinus(x,N)

myvalue = 0;
for k= 0:N
  myvalue += (-1)^k/q18myfactorial(2*k+1)*x^(2*k+1);
endfor
endfunction
