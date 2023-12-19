clear all
clc

N = 3;

for i = 1:N
  for j = 1:N
    mymatrix(i,j) = input("Fill matrix: ");
  endfor
endfor

mymatrix
[mymax,maxcol,maxrow] = q17maxwhatwhere(mymatrix)
[myave] = q17matrixaverage(mymatrix)
