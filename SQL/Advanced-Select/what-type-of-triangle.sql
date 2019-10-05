select  
  case 
    when a + b < c or a + c < b or b + c < a then 'Not A Triangle'
    when a = b and b = c then 'Equilateral'
    when a = b or a = c or b = c then 'Isosceles'
    when a <> b and b <> c then 'Scalene'
  end triangle_type 
from TRIANGLES ;