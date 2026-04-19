# Write your MySQL query statement below
SELECT P.firstName AS firstName ,
 P.lastName AS lastName , A.city AS city ,
 A.state AS state 
 FROM Person AS P LEFT JOIN Address AS A
 ON P.personId = A.personId;