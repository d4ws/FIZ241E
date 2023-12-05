clear all
clc

vec1 = [1,2,3,4,5,6];
vec2 = [5;6;2;1;1;7];
vec3 = [1,2,2,23,1,41,14,5];

mult1 = myvectormultiply(vec1,vec2);
fprintf("multiply of v1 and v2 : %d\n", mult1);
mult2 = myvectormultiply(vec2,vec3);
fprintf("multiply of v2 and v3 : %d\n", mult2);


m1=[1 2 3;4 5 6;7 8 9];
m2=[9 8 7;6 5 4;3 2 1;5,6,6];
v1=[1 2 3]; %Row vector
v2=[3;2;1]; %Column vector
result1=myvectormultiply(v1,v2);
result2=mymatrixadd(m1,m2);
disp('Mult. of two vectors: ')
disp(result1)
disp('Sum of two matrices: ')
disp(result2)
