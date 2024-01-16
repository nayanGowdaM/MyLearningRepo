# C++ Language 

### Compilers
High level languages have to be re-written (translated) into machine language at some point. This is done by special programs called compilers, interpreters, or assemblers

### Linkers
The linker is a program that combines object files into an executable file. It also resolves symbol references between object files.

## First Program 
1. #include < iostream >  
Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor    
These lines are read and processed by the preprocessor before the compilation begins.
2. int main()  
The function named main is a special function in all C++ programs; it is the function called when the program is run. The execution of all C++ programs begins with the main function, regardless of where the function is actually located within the code.

3.  std::cout << "Hello World!";  
 std::cout, which identifies the standard character output  
 insertion operator (<<), which indicates that what follows is inserted into std::cout  
 semicolon (;). This character marks the end of the statement

4. using namespace std  

## How does c++ Works  
source Code( text ) -> Compiler -> Binary ( Library or executable Program)  
### Preprocessor Statement  
1. anything that begins with #
2. These gets compiled first 

### Compiler
Compiles the source code into machine code 

### Linker 
