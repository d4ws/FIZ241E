% name of the function must be same with the file name !!!

function [mymin,mymax,myaverage] = myfunc(inp)
  mymin = min(inp);
  mymax = max(inp);
  myaverage = sum(inp)/length(inp);
end
