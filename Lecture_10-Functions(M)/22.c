// C Program to Illustrate the Indirect Recursion

#include <stdio.h>
void functionA(int n)
{
if (n < 1) {
return;
}
printf("%d ", n);
n = n - 1;
// Indirect recursive call to functionB
functionB(n);
}
void functionB(int n)
{
if (n < 2) {
return;
}
printf("%d ", n);
n = n / 2;
// Indirect recursive call to functionA
functionA(n);
}
int main()
{
// Function call
functionB(20);
return 0;
}
/*
main() calls functionB(20)

Inside functionB(20):

prints 20

n = 20 / 2 = 10

calls functionA(10)

Inside functionA(10):

prints 10

n = 10 - 1 = 9

calls functionB(9)

Inside functionB(9):

prints 9

n = 9 / 2 = 4

calls functionA(4)

Inside functionA(4):

prints 4

n = 4 - 1 = 3

calls functionB(3)

Inside functionB(3):

prints 3

n = 3 / 2 = 1

calls functionA(1)

Inside functionA(1):

prints 1

n = 1 - 1 = 0

calls functionB(0)

Inside functionB(0):

since n < 2, return; (end)

✅ Program ends here.

20 10 9 4 3 1


*/
