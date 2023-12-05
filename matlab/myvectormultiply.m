function [multvec] = myvectormultiply(v1,v2)

  if (length(v1)~=length(v2))
  disp('These two vectors are of different size!')
  multvec=NaN;
  else
  multvec=v1*v2;
  end

end
