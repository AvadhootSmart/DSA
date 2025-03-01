# Write your MySQL query statement below
SELECT e1.employee_id,e1.name,count(e2.reports_to) AS reports_count,round(avg(e2.age)) as average_age
FROM Employees AS e1
JOIN Employees AS e2
ON e1.employee_id = e2.reports_to
WHERE e2.reports_to is not null
GROUP BY e2.reports_to
ORDER BY e1.employee_id;



