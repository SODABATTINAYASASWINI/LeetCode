select name as Customers from
customers c Left join orders o
on c.id = o.customerid
where o.id is NULL;