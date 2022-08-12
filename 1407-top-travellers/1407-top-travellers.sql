# Write your MySQL query statement below
select name,ifnull(sum(distance),0) as travelled_distance
from users
left outer join rides
on users.id = rides.user_id
group by user_id
order by travelled_distance desc,name asc