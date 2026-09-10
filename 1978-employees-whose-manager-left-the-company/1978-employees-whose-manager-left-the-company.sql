# Write your MySQL query statement below
select e.employee_id
from Employees as e
left join Employees as em
on e.manager_id=em.employee_id
where e.salary<30000 AND em.employee_id IS NULL AND e.manager_id IS NOT NULL
order by e.employee_id;