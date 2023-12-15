create table  customer(
Id int Primary Key auto_increment, -- generates unique id automatically using which a row is identified 
firstName varchar(50),
lastName varchar(50),
age int, 
city varchar(50)
);
update customer
set city='delhi';

alter table customer
add  email varchar(50),
add phone varchar(10);

update customer
set email='a@gmail.com'