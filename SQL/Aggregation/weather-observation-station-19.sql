 select round(sqrt(pow(min(lat_n)-min(long_w),2) + pow(max(lat_n)-max(long_w),2) ),4) from station;
