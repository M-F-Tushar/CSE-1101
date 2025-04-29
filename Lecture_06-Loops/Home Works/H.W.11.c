//Write a program that reads a positive integer and displays the maximum positive integer n for which the sum 1 to the power 2 + 2 to the power 2 + 3 to the power 2 + ... + n2 is less than the given number.

#include <stdio.h>
int main()
{
int i, num, sum;
printf("Enter number: ");
scanf("%d", &num);

sum = 0;
i = 1;
while(1)
{
sum += i*i;
if(sum >= num)
break;
i++;
}
printf("The last number is = %d\n", i-1); /* The number i−1 is the last number where the value of sum is still less than the given
number. */
return 0;
}
/*
📊 Why i - 1?
Let’s say num = 30

Step-by-step:


i	i*i	sum
1	1	1
2	4	5
3	9	14
4	16	30 → condition met, loop breaks
At this point, sum = 30 and i = 4

The loop just broke, but sum became equal to or more than num

So, the last i before this happened was 3

Hence, i - 1 = 3 is the last number for which the sum was still less than num

*/
