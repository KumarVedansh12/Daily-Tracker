# Write your MySQL query statement below
(select u.name as results
from Users as u
join MovieRating as ma
on u.user_id=ma.user_id
join Movies as m
on m.movie_id=ma.movie_id
group by u.user_id
order by count(ma.rating) DESC , u.name ASC
LImit 1)
union all
(select m.title as results
from Users as u
join MovieRating as ma
on u.user_id=ma.user_id
join Movies as m
on m.movie_id=ma.movie_id
where ma.created_at>='2020-02-01' and ma.created_at<'2020-03-01'
group by ma.movie_id
order by avg(ma.rating) DESC ,m.title ASC
limit 1);