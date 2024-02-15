## New Keyword 
used to allocate memory on the heap 
* New is just a operator and can be overloaded 
* new just allocates the memory and calls the constructor
* We can achieve the above task using malloc function 
* use delete keyword if you have used new keyword to free the allocated memory 
* Delete performs the job of free function 
* we can specify the memory address at which we need to have my object 
    ```cpp
    Entity entity= new(mem_addr) Entity();
    ```

### Note:
* sizeof(int) = 4
* sizeof(int*) = 8 in 64bit machines and 4 in 32 bit machines 