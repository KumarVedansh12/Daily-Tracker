# Write your MySQL query statement below
Select id 
From(
    SELect id,recordDate, temperature,
    LAG(recordDate) over (order by recordDate) as prev_date, 
    LAG(temperature) over (order by recordDate) as prev_temp
    from Weather
) W
where DATEDIFF(recordDate,prev_date) = 1
and temperature>prev_temp;

