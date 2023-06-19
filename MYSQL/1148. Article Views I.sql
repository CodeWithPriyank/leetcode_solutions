# Write your MySQL query statement below
SELECT DISTINCT viewer_id id
FROM Views
WHERE author_id = viewer_id
ORDER BY viewer_id ASC;
