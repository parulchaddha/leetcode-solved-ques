/* Write your PL/SQL query statement below */
SELECT customer_number                            -- Step 2.   Get the customerNumber who ordered exactly maxorderCount times.
FROM orders
GROUP BY customer_number
HAVING count(*) = (
    SELECT max(count(*))                               -- Step 1.  Get maxorderCount for any customer.
    FROM orders
    GROUP BY customer_number
)