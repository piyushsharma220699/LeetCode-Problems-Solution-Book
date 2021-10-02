--
-- @lc app=leetcode id=181 lang=mysql
--
-- [181] Employees Earning More Than Their Managers
--

-- @lc code=start
# Write your MySQL query statement below
SELECT Name AS Employee FROM Employee AS e 
WHERE Salary > (SELECT Salary FROM Employee 
    WHERE Employee.Id = e.ManagerId);
-- @lc code=end

