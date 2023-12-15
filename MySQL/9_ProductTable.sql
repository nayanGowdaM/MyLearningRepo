create table Product
(
	id int Primary Key auto_increment,
    ProductName varchar(255),
    Price float
);
insert into Product(ProductName, Price) values ('BaseBall',15.02);
insert into Product(ProductName, Price) values ('TennisBall',94.441);
insert into Product(ProductName, Price) values ('FootBall',852.0);
insert into Product(ProductName, Price) values ('BasketBall',845.64);
insert into Product(ProductName, Price) values ('HandBall',20.62);



select * from Product;