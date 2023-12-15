create table Orders
(
	 id int Primary Key auto_increment,
     Order_date Datetime,
     CustomerId int,
     ProductId int
);

select * from Product;
select * from customer;
select * from Orders;

insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 1 ,2);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 2,2);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 3 ,3);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 4 ,4);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 5 ,5);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 6 ,1);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 7 ,2);
insert into Orders(Order_date, CustomerId,ProductId) values (current_timestamp(), 6 ,2);
