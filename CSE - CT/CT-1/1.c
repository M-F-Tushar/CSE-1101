//Explain Inline funtion and it's working with example
/*
Inline Function: An inline function is a function that is expanded in line when it is called. 
When the inline function is called, the compiler replaces the function call with the function code itself.
This can reduce the overhead of function calls and can improve the performance of the program, 
especially for small functions that are called frequently.
*/
#include<stdio.h>
// Inline function definition
static inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    int SQ = square(num);
    printf("The square of number 5 is : %d",SQ);
    return 0;
}
//With using static, inline won't work in gcc
