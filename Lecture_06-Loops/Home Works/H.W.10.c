//Write a program that reads an integer and displays the number of its digits and their sum.

#include <stdio.h>
int main()
{
    int num, sum = 0, dig = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    if(num < 0)
        num = - num;

    while(num > 0)
    {
        sum += num % 10;
        num = num / 10;
        dig++;
    }
    printf("%d digits and their sum is %d\n", dig, sum);
    return 0;
}
/*
For example, if the input is 72:

First iteration (num = 72):

num % 10 gives the last digit 2, so sum = 2.

num = num / 10 removes the last digit, so now num = 7.

dig++ increases the digit count, so now dig = 1.

Second iteration (num = 7):

num % 10 gives the last digit 7, so sum = 2 + 7 = 9.

num = num / 10 removes the last digit, so now num = 0.

dig++ increases the digit count, so now dig = 2.

Exit loop (num = 0):

The loop condition num > 0 is no longer true, so the loop exits.
    */
