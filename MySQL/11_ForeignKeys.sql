alter table Orders
add foreign key (CustomerId) references customer(Id);

alter table Orders
add foreign key(ProductId) references Product(id);


select * from Orders;

