## Smart Pointers
To automate the free process on using new keyword on some objects 

Types:
1. Unique Pointers: 
    It is a scoped pointer( calls delete whenever out of scope )  
    Cannot Copy unique pointers     
    
2. Shared Pointers
    Similar to Unique Pointers but can be copied   
    While constructing a share pointer it has a control block which has count(ref count) to how many pointers are present   
    Destructor is called only when the count goes to zero 

3. Weak Pointers 
    Similar to shared Pointers but do not maintain ref count  
    As soon as one instance goes out of scope it is destroyed 