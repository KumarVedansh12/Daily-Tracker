# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers as c
LEFT JOIN Orders as o
ON c.id=o.customerID
WHERE o.customerID is NULL;