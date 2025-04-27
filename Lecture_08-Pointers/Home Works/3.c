/*Write a program that uses two pointers to read two integers and swap their
values.*/

#include <stdio.h>
int main()
{
int *ptr1, *ptr2, i, j, tmp;
ptr1 = &i;
ptr2 = &j;
printf("Enter numbers: ");
scanf("%d%d", ptr1, ptr2); //uses two pointers to read two integers(Remember not to use & before ptr in scanf when readng a value)
tmp = *ptr1;
*ptr1 = *ptr2;
*ptr2 = tmp;
printf("Values: %d %d\n", i, j);
return 0;
}
