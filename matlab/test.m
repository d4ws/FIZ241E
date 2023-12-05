clear all
clc

A = [1 , 2, 3;
     4 , 5, 6;
     7 , 8, 9]
b = [2;,3;,1]

identity = eye(2,2) % 2x2 identity matrix
zeros = zeros(3,3)
ones = ones(3,3)
uppertri = triu(A)
lowertri = tril(A)

x = 0:2:10 % start:step:end (start and end included.)
x(3:end)
y = linspace(0,10,4) %start,end,stepcount
transpoze = A'
C = [9,8,7;6,5,4;3,2,1]
element_wise = A.*C % element-wise multiply
matmul = A*C
row_sumof_C = sum(C,1)
col_sumof_D = sum(C,2)

