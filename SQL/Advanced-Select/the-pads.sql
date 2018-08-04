select concat_ws('',Name,'(',Substring(Occupation,1,1),')') as Name
from occupations
Order by Name;
select concat_ws('','There are total ',count(occupation), ' ',lower(occupation),'s.') as total
from occupations
group by occupation
order by total;
