clear all
x = input("Enter: ");

if(x > 0)
  disp("positive")
elseif (x == 0)
  disp("zero")
else
  disp("niggative")
endif


A = [1,2;
     3,4;
     5,6];

B = [5,6;
     7,8;
     9,10];

rowsizeA = size(A,1)
rowsizeB = size(B,1)
colsizeA = size(A,2)
colsizeB = size(B,2)

if (size(A,1) == size(B,1))
  disp("row sizes are equal")
endif

if (rowsizeA==rowsizeB) && (colsizeA==colsizeB)
disp('These matrices can be added.')
disp('The addition yields')
C1=A+B;
disp(C1)
else
disp('These matrices canNOT be added.')
end
if (colsizeA==rowsizeB)
disp('These matrices can be multiplied.')
disp('The multiplication yields')
C2=A*B;
disp(C2)
else
disp('These matrices canNOT be multiplied.')
end
