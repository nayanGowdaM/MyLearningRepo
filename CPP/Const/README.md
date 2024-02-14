## const Key word
It generally says that the value at a variable cannot be changed durnig the course of execution 

```cpp
const int a=20;
```
Value of a is 20 and cannot be changed 
Must and should initialize a const variable

```cpp
const int* a=20
```
Value of *a cannot be changed. However a can point to any address

```cpp
int* const a=new int
```
Address to which a is pointing cannot be changed. However value at the memory address pointed by a can be changed using *a

### Note
* Const methods do not change the object status
    ```cpp
    int get() const {
        return x;
    }
    ```
    
* Const methods can only take const attributes as parameters 
* Const objects cannot execute non const methods 
* If one wants to change the value of a variable in const method make the variable as mutable