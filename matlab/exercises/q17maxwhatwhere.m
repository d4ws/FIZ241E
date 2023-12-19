function[mymax,maxcol,maxrow] = q17maxwhatwhere(mymatrix)

mymax = mymatrix(1,1);

for i = 1:size(mymatrix,1)
  for j = 1:size(mymatrix,2)
      if(mymatrix(i,j) > mymax)
        mymax = mymatrix(i,j);
        maxrow = i;
        maxcol = j;
      endif
  endfor
endfor

endfunction
