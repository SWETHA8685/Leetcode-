# Write your MySQL query statement below
select DISTINCT w1.id,w1.visit_date,w1.people from Stadium w1  JOIN  Stadium b join Stadium c where w1.people>=100 and b.people>=100 and c.people>=100 AND(
(w1.id=b.id-1 AND b.id=c.id-1) or (w1.id=b.id+1 and w1.id=c.id-1)or (w1.id=c.id+1 AND b.id=c.id-1)) ORDER BY visit_date;