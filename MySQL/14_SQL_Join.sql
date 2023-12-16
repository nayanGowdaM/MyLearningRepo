/* 
Four Types of joins 
1.Inner 
2.Left
3.Right
4.Fuller
*/

select * from City;
create table City
(
	Id int primary key auto_increment,
    CityName varchar(50)
);
insert into City(CityName) values ('Bangalore');
insert into City(CityName) values ('Hyderabad');
insert into City(CityName) values ('Delhi');
insert into City(CityName) values ('Kolkata');
insert into City(CityName) values ('Chennai');
select * from City;

create table Customer
(
	Id int primary key auto_increment,
    CustomerName varchar(50),
    CityId int,
    foreign key (CityId) references City(Id) 
);
insert into Customer(CustomerName,CityId) values ( 'Nayan Gowda',3);
insert into Customer(CustomerName,CityId) values ( 'Ram',5);
insert into Customer(CustomerName,CityId) values ( 'Sita',1);
insert into Customer(CustomerName,CityId) values ( 'Bahubali',2);
insert into Customer(CustomerName) values ( 'Joey Blue');
insert into Customer(CustomerName) values ( 'Cherno');
insert into Customer(CityId) values (3);
insert into Customer(CityId) values (2);


/*Inner Join
In order to haver an inner join two tables must have at least i common attribure that relates both
Ex:
Cherno and Joey Blue doesnot have any match in the city table so they will not be considered while joining

*/

select Customer.CustomerName , City.CityName from Customer
inner join City on City.Id = Customer.CityId;


/*Left Join
Along with the matched rows also take the rows from left table eve though they do not match
Ex:
Even though There is no match for joey blue and Cherno they will be considered while relating
*/

select Customer.CustomerName , City.CityName from Customer
left join City on City.Id = Customer.CityId;


/* Right Join 
Along with the matched rows also take the rows from right table even though they do not match
Ex:
Even though There is no match for City with id 4 they will be considered while relating
*/
select Customer.CustomerName , City.CityName from Customer
right join City on City.Id = Customer.CityId;

/*Full Outer Join 
Gets all rows from both the table no matter if there is a relation or not 
ex : 
Cherno, Joey Blue doesnot related to any city 
City with id 4 is not related any customer 
But the join gives all the entries

Note: MySql do not support full join So use union
*/
select Customer.CustomerName , City.CityName from Customer
left join City on City.Id = Customer.CityId

union 

select Customer.CustomerName , City.CityName from Customer
right join City on City.Id = Customer.CityId;
