function[root] = q21bisection(a,b,ep)
while 1
c = (a+b)/2;

if abs(q21func(c)) < ep
  root = c;
  break
elseif q21func(a) * q21func(c) < 0
  b = c;
else
  a = c;
end
end
end
