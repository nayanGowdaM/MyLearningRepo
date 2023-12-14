use demo;
select database();
show tables;
-- select all the columns of the table
select * from customer;
-- selecting a single 
select firstName from customer;
select lastName from customer;
select age from customer;
select firstName, age from customer;