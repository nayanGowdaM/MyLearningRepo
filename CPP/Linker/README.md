1. Declare all the functions that are needed in header file
2. Include this header file in all cpp files wherever required 
3. Now the header file binds together the source files
4. There are instances when the function/method included twice/thrice which gives compilation error   
    Solution: 
    * Traditional Method :
        #ifndef _LOG_H
        #define _LOG_H
        .
        .
        header file inclusions
        .
        .
        #endif

        this generally checks if there is any thing that was defined as _LOG_H 
    * #pragma once :
        Does the same thing 

5. Difference between Angular braces ( #include<iostream> ) and inverted commas ( #include "header.h" ):
    header.h is relative to current folder (you must declare #inlcude "childDir/header.h" if the header file is in a directory below)  
    <iostream >is not relative, it is assosited with the include statement itself -- only for copiler input parts
