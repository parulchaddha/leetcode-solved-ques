/* Write your PL/SQL query statement below */
SELECT
    vwe.id
FROM
(
    SELECT
        we.ID
        , we.temperature
        , CASE 
            WHEN LAG(we.recorddate) OVER(ORDER BY we.recorddate ASC) = we.recorddate - 1
                THEN LAG(we.temperature) OVER(ORDER BY we.recorddate ASC)
            ELSE NULL 
          END AS prev_teamperature
    FROM
        weather we
) vwe
WHERE
    vwe.temperature > vwe.prev_teamperature