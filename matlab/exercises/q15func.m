function[mynum] = q15func(myvec)

mynum = 0;
for i = 1:length(myvec)
  if(myvec(i) > 3)
    mynum++;
  endif
endfor
disp(mynum);
endfunction
