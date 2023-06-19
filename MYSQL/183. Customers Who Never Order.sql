# Write your MySQL query statement below
SELECT Customers.name AS customers
FROM Customers
WHERE id not in (SELECT CustomerId FROM Orders);
