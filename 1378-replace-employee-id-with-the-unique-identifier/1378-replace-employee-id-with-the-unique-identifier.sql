# Write your MySQL query statement below
select em.unique_id,e.name
from Employees as e
left Join EmployeeUNI as em
on em.id=e.id;