//Chenck prime number using loop
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        printf("Not a prime number.\n");
        return 0;
    }

    for (i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            printf("Not a prime number.\n");
            return 0;
        }
    }

    printf("Prime number.\n");
    return 0;
}




