function[mysum] = mymatrixadd(m1,m2)

if size(m1,1) == size(m2,1) && size(m1,2) == size(m2,2)
  mysum = m1 + m2;
else
  disp("These matrices can not be added.")
  mysum=NaN;
endif
end
