clear all
clc

% Factorial of x
x=input('Enter a number... ');
factorial=1;
for i=1:x
factorial=i*factorial;
end
fprintf("Factorial is: %d\n" ,factorial)

factorial=1;
j = 1;
while j<=x
factorial=j*factorial;
j+=1;
end
fprintf("Factorial is: %d\n" ,factorial)

factorial=1;
k = 1;
while 1
  if(k > x)
    break
  else
    factorial *= k;
    k+=1;
  endif
endwhile
fprintf("Factorial is: %d\n" ,factorial)

