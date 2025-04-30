/*Write a program that reads an integer continuously and displays them. If the user
enters 0, the insertion of numbers should terminate. Note that the number 0 must
not be displayed.*/

#include <stdio.h>

int main() {
    int num;
    
    do {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num != 0) 
        {
            printf("Num = %d\n", num);
        }
    } while (num != 0);

    printf("Program terminated.\n");
    return 0;
}

