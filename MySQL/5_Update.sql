use demo;
select database();
select * from customer where firstName like 'Raj%';
update customer
set age=1000
where firstName='Raj';


select * from customer;