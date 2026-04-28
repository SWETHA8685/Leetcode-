# Write your MySQL query statement below
SELECT  p.player_id,p.event_date as first_login  from Activity p WHERE event_date= (select MIN(event_date) from Activity where player_id=p.player_id);