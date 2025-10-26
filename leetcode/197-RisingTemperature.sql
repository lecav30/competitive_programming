# LAG(row) -> determine the prev row
# OVER (ORDER BY another_row) -> stablish the order's logic
# DATEDIFF(first_date, second_date) = diff -> diff between two dates

SELECT Id
FROM (
    SELECT 
        id AS Id,
        recordDate,
        temperature,
        LAG(temperature) OVER (ORDER BY recordDate) AS prev_temp,
        LAG(recordDate) OVER (ORDER BY recordDate) AS prev_date
    FROM Weather
) AS w
WHERE 
    DATEDIFF(recordDate, prev_date) = 1
    AND temperature > prev_temp;
