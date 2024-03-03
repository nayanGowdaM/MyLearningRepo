## Creating Objects 
Objects are created on :
1. Stack:
    * Automatic Life span. If the object goes out of scope they gets destroyed 
    * Fastest way and most managed way to create object in c++
    * Disadvantage: Objects gets destroyed as soon as the scope ends
    * It is one cpu instruction Hence it is fast . 
2. Heap:
    * Memory of a object is not freed until we do it explicitly. Even though the object goes out of scope it is not destroyed untill we decide to destroy
    * Not the fastest compared to stack allocation 
    * Java uses only heap allocaion 
    * Disadvantage: mannual destruction of the object 
    * May lead to memory leak
    * It might take more cpu cycles and hence is slow  