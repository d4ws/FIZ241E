function[v] = q22bubblesort(v)


while 1
  didswitch = false;
  for i = 1:length(v)-1
    if v(i) > v(i+1)
      didswitch = true;
      mybox = v(i);
      v(i) = v(i+1);
      v(i+1) = mybox;
    endif
  endfor
  if (didswitch == false)
    break
  endif
endwhile
end

