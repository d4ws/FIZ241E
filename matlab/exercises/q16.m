clear all
clc

N = 4;
for i =1:N
  massvec(i) = input("Fill massvec: ");
endfor

for i =1:N
  xvec(i) = input("Fill xvec: ");
endfor

for i =1:N
  yvec(i) = input("Fill yvec: ");
endfor

[xcm,ycm] = q16func(massvec,xvec,yvec)

