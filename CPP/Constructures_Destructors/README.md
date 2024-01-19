## Constructors
It is a special type of method which runs every time we instantiate an object
1. It does not have a return type 
2. Name of the constructor must match with name of the class
3. Even though you do not write a constructor defination the class has an empty constructor which does nothing on callin
4. But in the case of java and other programmin languages they  initialize the primitive data types to 0 (even if the constructor method is not written explicitly)
5. Can write as many constructors as the user wants


## Destructors 
It is a method which is called when ever a object is destroyed  

1. Dynamic allocation - Destructor is called when ever there is deleting a object
2. Stack memory Allocation  - Destructor when ever the scope ends
  
Syntax:

~ClassName(){
    //write something
}

