-- using Where clause
-- Evaluates where clause after join

select Customer.* , City.CityName from Customer 
left join City on City.Id = Customer.CityId  
where City.CityName='Delhi';


-- Here all the rows of customer table appers along with the related city if it is same as 'Delhi' else NULL
-- Evaluates first the 'and' parameters and them joins
select Customer.* , City.CityName from Customer 
left join City on City.Id = Customer.CityId  and City.CityName='Delhi';
