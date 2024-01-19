# Static key word 
two scenarios     
1. Used outside class or struct:    
    Only one variable for all instances   
2. Used inside class or struct:  
    If a variable declared static in class then it must be defined as class_name::varName; ( allocating memory)  
    The variable is shared among all the instances of the class 

#### Note
1. Static variables are common for all instances of a class  
2. Static methods are common for all instances of a class
3. Static Method can access only static attributes
4. Compilation error on accessing a non static variable by a static method

# Extern key word
The varible (marked as extern ) will look itself from outside files