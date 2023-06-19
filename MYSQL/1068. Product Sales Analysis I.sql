# Write your MySQL query statement below
SELECT DISTINCT p.product_name, s.year, s.price
FROM (SELECT DISTINCT product_id, year, price FROM Sales) s
INNER JOIN Product p
USING (product_id);
