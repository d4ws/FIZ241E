clear all
clc


len = 10;
myvec = zeros(1,len);
myvec(2) = 1;

for i = 3:length(myvec)
  myvec(i) = myvec(i-2) + myvec(i-1)
endfor
