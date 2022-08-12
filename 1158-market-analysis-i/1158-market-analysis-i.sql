/* Write your PL/SQL query statement below */
select a.user_id as buyer_id, to_char(a.join_date,'yyyy-mm-dd') as join_date, nvl(b.orders_2019,0) as orders_in_2019 from Users a,
(select buyer_id, count(*) as orders_2019 from orders where order_date like '2019%' group by buyer_id) b
where a.user_id = b.buyer_id(+);