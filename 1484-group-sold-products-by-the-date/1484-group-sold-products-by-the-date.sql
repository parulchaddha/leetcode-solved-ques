/* Write your PL/SQL query statement below */
select to_char(sell_date, 'YYYY-MM-DD') as sell_date, count(*) as num_sold, listagg(product, ',') within group (order by sell_date) as products
from (select distinct product, sell_date from Activities)
group by sell_date