# Write your MySQL query statement below
select r.contest_id,
    round( count(r.user_id)*100.0/(select count(*) from Users),2) as percentage
from Users as u
join Register as r
on u.user_id=r.user_id
group by r.contest_id
ORDER BY percentage DESC, r.contest_id;