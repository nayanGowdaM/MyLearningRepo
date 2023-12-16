-- to get the sum of the entire orders
select sum(p.Price) from Orders as o
inner join Product as p on p.id = o.ProductId
inner join customer as c on c.Id = o.CustomerId;

-- Group by customer 
select c.lastName, sum(p.price) from Orders as o
inner join Product as p  on p.id = o.ProductId
inner join customer as c on c.Id = o.CustomerId
group by c.lastName;

--  Group by product name 
select p.ProductName,sum(p.price) from Orders as o
inner join Product as p on p.id = o.ProductId
inner join customer as c on c.Id =  o.CustomerId
group by p.ProductName;

 -- Group by both product and customer name
 select p.ProductName,c.lastName, sum(p.price) from Orders as o
inner join Product as p on p.id = o.ProductId
inner join customer as c on c.Id =  o.CustomerId
group by p.ProductName,c.lastName;

-- Group by cities to check the sales in each of the cities
select c.city, sum(p.Price) from Orders as o
inner join Product as p on p.id = o.ProductId
inner join customer as c on c.Id = o.CustomerId
group by c.city;

-- Finding spent on total and on an avg
select c.city as City , sum(p.Price) as Total, avg(p.Price) as Avg from Orders as o
inner join Product as p on p.id = o.ProductId
inner join customer as c on c.Id = o.CustomerId
group by c.city;
