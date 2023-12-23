-- Selecting all rows and columns form the table
select * from customer;

 -- selecting distinct values in the given Column
 select distinctrow city,phone from customer;
 
 
 
 -- Where clause
 
 -- 1.Equals
 select *   from customer
 where city='delhi';
 
 -- 2.Not Equals
 select * from customer
 where city!='mumbai';
 
 -- 3.Less Than
 select * from customer
 where city < 'mumbai';
 
  -- 4.Greater Than
 select * from customer
 where city > 'my'; -- case insesitive and comparision from first letter similar to strcmp fuction 
 
 -- 5. Greater than or equal to   and   Lesser than or equal to 
 select * from customer
 where city >='m'; 
  select * from customer
 where city <='m'; 
 
select * from customer
where city <>'mumbai';  -- Equivalent to !=
 
 
 
 -- like clause
 
 --  1.  str% - all values starting with str 
 select * from customer
 where firstName like 'Raj%'; 
 
 --  2. str_ - all values equivalent to  ( str + {any 1 char })
 select * from customer 
 where firstName like 'Raj_';
 -- note: Combinations of % and _ can be used various combinatioins to get desired results
 
 
 --  'and' and 'or' clauses 
 
 select * from customer
 where city='mumbai' or city='Bangalore';

select * from customer 
where city = 'delhi' or age=40;

select * from customer 
where city = 'delhi' and age=26;


-- in filter
select * from customer 
where city in ('mumbai','delhi');


-- between clause

select * from customer 
where age between 30 and 50; -- Includes 30 and 50

select * from customer 
where age <= 50 and age>=30; -- equivalent to the above statement



-- order by -  clause sorts that column

select * from customer
order by firstName;

select * from customer 
order by firstName asc;

-- for descentding order
select  * from customer 
order by age desc;

-- Extending ordering if a tie
select firstName, age, city from customer 
order by city,age desc;

select firstName, city,concat(firstName,city) as firstName_city  from customer
order by concat(firstName,city);