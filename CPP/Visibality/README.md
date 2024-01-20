## Visibality 
There are 3 basic visibality modifires in c++ 
1. private   
    Only visible and accessible in the class  
2. protected   
    Visible to itself and all its subclasses 
3. public  
  
  

* Visibality has nothing to do with efficiency(Cpu generally do not understand Visibality)
* Visibality helps the code to look lot cleaner and make more readable
* Inside a class the default visibality is private for any member or method 
* Inside a struct the default visibality is public for any member 
* 
* Freind class can access the private members of each  other (*only)