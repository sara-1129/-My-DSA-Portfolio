# Write your MySQL query statement below
SELECT Department, Employee,Salary 
FROM (
SELECT D.name AS Department, 
    E.name AS Employee,
    E.salary AS Salary,
    DENSE_RANK() OVER (PARTITION BY D.id ORDER BY E.salary DESC) AS rank_num
    FROM Department AS D INNER JOIN 
    Employee AS E ON E.departmentId = D.id) AS ranked WHERE rank_num <= 3;