# Write your MySQL query statement below
select e.employee_id,e.name,
    count(e.employee_id=es.reports_to) as reports_count,
    Round(avg(es.age)) as average_age
from Employees as e
join Employees as es
on e.employee_id=es.reports_to
group by e.employee_id
order by e.employee_id ASC;