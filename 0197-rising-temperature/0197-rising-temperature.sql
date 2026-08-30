# Write your MySQL query statement below
select w1.id
from Weather as w1
join Weather as w2
ON DATEDIFF(W1.recordDate,W2.recordDate)=1
where (W1.temperature>W2.temperature);