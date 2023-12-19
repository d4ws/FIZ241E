function[myave] = q17matrixaverage(mymatrix)

myave = sum(sum(mymatrix,1))/size(mymatrix,1);

endfunction
