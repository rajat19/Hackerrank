 select case
        when g.grade>7 then s.name 
end  
          , g.grade,s.marks from students as s join grades as g on  s.marks >= g.min_mark and s.marks<=g.max_mark order by g.grade desc, s.name asc;
