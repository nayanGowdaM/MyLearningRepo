-- Joining Product and order table
select * from Product;
select * from customer;
select * from Orders;
select * from Orders
inner join Product on Orders.ProductId = Product.id
inner join customer on Orders.CustomerId = customer.Id;