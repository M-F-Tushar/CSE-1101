// C Program to calculate the sum of first N natural numbers using recursion
#include <stdio.h>
int nSum(int n)
{
// base condition to terminate the recursion when N = 0
if (n == 0) 
{
  return 0;
}
// recursive case / recursive call
int res = n + nSum(n - 1);//5+(5-1)+(4-1)+(3-1)+(2-1)+ nSum(0) = 15
return res;
}
int main()
{
int n = 5;
// calling the function
int sum = nSum(n);
printf("Sum of First %d Natural Numbers: %d", n, sum);
return 0;
}
