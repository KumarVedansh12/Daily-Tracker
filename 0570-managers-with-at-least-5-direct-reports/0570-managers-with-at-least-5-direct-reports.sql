# Write your MySQL query statement below
select e.name
from Employee as e
join Employee as ee
on e.id=ee.managerId
GROUP BY e.id
having count(e.id)>=5;
