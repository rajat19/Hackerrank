select case
    when a+b>c and b+c>a and a+c>b then
        case
            when a=b and b=c then 'Equilateral'
            when a=b or b=c or c=a then 'Isosceles'
            else 'Scalene'
        end
    else 'Not A Triangle'
end
from triangles;