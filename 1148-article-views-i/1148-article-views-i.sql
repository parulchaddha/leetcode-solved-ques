/* Write your PL/SQL query statement below */
select distinct author_id as id from Views
where author_id = viewer_id
order by id asc;