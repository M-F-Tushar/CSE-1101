//Write a program that uses getchar() to read characters. The program should display and count the input characters.
#include <stdio.h>
int main()
{
int ch, sum;
printf("Enter characters: ");
sum = 0;
ch = getchar();
while(ch != '\n')
{
sum++;
printf("%c", ch);
ch = getchar();
}
printf("\nTotal number is = %d\n", sum);
return 0;
}
/*
 getchar() returns the input characters one by one until the '\n' char acter is met. Notice that we could combine the two calls to getchar() into one, like this:
sum = 0;
while((ch = getchar()) != '\n') /* Notice the way that the
parentheses are used. *//*
{
sum++;
printf("%c",ch);
}
This loop reads a character, stores it in ch, and checks if it is different from the new
line character. However, if we want to be absolutely right, we should write
while((ch = getchar()) != '\n' && ch ! = EOF)
to check if the character was successfully read.
Notice that since the return type of getchar() is int, the type of ch should be
int and not char.
*/
