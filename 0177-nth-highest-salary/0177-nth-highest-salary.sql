CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare m INT;
SET m=N-1;

  RETURN (
      # Write your MySQL query statement below.
    SELECT DISTINCT salary FROM Employee ORDER BY SALARY DESC LIMIT m,1
  );
END