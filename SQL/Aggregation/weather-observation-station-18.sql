 select round(abs(min(lat_n)-min(long_w)) + abs(max(lat_n)-max(long_w)),4)  from station;
