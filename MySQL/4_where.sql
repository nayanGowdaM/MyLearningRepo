select * from customer
where age=40;
select * from customer
where firstName='Nayan';

-- starting val instead of full values
select * from customer
where firstName like 'Raj%'; -- Raj followed by any number of chars

select * from customer
where firstName like 'Raj_'; -- Raj followed by only one char

select * from customer
where firstName like 'Ra__'; -- Raj followed by 2 chars
