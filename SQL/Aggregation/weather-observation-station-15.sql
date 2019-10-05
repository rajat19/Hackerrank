select round(long_w,4)  from station where lat_n=(select max(lat_n) from station where lat_n<137.2345)  ;
