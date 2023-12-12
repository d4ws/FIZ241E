clear all
clc


sum = 0;
while 1
  x = input("Enter value (-1 to break): ");
  if (x == -1)
    break
  else
    sum += x;
  endif
endwhile

fprintf("Sum is: %d", sum);
