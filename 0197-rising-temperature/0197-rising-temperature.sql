# Write your MySQL query statement below
select W1.id
from Weather W1
Join Weather W2
ON DATEDIFF(W1.recordDate,W2.recordDate)=1
where (W1.temperature>W2.temperature);