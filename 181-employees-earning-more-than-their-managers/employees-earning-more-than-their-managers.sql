# Write your MySQL query statement below
SELECT E1.name as Employee FROM EMPLOYEE AS E1 INNER JOIN EMPLOYEE AS E2 ON E1.managerId = E2.id  where  E1.salary > E2.salary;