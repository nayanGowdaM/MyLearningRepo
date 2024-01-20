## Virtual Funcitons 
     These introduces dynamic dispatch(transmission) using V tables.  Usually V table contains mapping for all the virtual functions in base class so that the can be mapped correctly to their overritten fubnctin in other classes.
Even if we pass a child class object to some function (which has parameter as parent class object) refers to parent class itself  
So in order to address this issue we have virtual functions ( using V table)  
  
Syntax for doing this 
```cpp
virtual string getName(){//In Base Class
    cout<<endl;
    
}
```

Also dont forget to override the function in child class
```cpp
string getName() override {
    cout<<endl;
}
```