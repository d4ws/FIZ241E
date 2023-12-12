clear all
clc

sum = 0;
terms = 1;

while sum < 100
  terms += 1;
  sum += terms;
  fprintf("Term: %d ",terms );
  fprintf("Sum: %d\n",sum);
endwhile

