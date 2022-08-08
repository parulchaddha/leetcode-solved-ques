/* Write your PL/SQL query statement below */
select salary as SecondHighestSalary from (select salary, dense_rank() over (order by salary desc)r from Employee) where r=2
union
select null from dual where 1=(select count(distinct salary) from Employee)