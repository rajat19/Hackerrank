
select floor(avg(salary) - avg(replace(salary,'0','')))+1 as c  from EMPLOYEES ;