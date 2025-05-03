#include <stdio.h>
int main()
{
    int a, b;
    a = (b = 20, b = b + 30, b++);
    printf("a = %d , b = %d\n", a, b);
    return 0;
}
/*
Step-by-Step Execution:
The key part of the program is this expression:
a = (b = 20, b = b + 30, b++);
Understanding the Comma Operator (,)
The comma operator (,) evaluates expressions from left to right, and the last expression's value is assigned to a.
b = 20;

b becomes 20.
b = b + 30;

b = 20 + 30 = 50.
b++;

The value before incrementing (i.e., 50) is returned as the result of the expression.
Then, b is incremented to 51.
a = 50;

Since b++ returns 50, a is assigned 50.
Meanwhile, b becomes 51.
Final Values:
a = 50
b = 51
*/
