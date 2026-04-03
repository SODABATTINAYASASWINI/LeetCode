# Write your MySQL query statement below
select e.name as Employee
from Employee e
where salary > (
    select salary from Employee e1
    where e1.id = e.managerId
);