//Write a program that displays the characters of the ASCII set and their values.
#include <stdio.h>
int main()
{
int i;
for(i = 0; i < 256; i++)
printf("Char = %c and its ASCII code = %d\n", i, i);
return 0;
}
