/* Write your PL/SQL query statement below */
select stock_name, sum(case when operation = 'Buy' then price*-1 else price end) capital_gain_loss from Stocks
group by stock_name order by capital_gain_loss desc;