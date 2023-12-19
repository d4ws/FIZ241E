function[xcm,ycm] = q16func(massvec,xvec,yvec)
  xcm = sum(massvec.*xvec)/sum(massvec);
  ycm = sum(massvec.*yvec)/sum(massvec);
endfunction
