//Write a program that reads two integers and displays their relationship without using an else statement.
#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter numbers: ");
    scanf("%d%d", &i, &j);
    if(i < j)
        printf("%d < %d\n", i, j);
    if(i > j)
        printf("%d > %d\n", i, j);
    if(i == j)
        printf("%d = %d\n", i, j);
    return 0;
}
