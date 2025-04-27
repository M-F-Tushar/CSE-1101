/*
Write a program that reads 100 integers and stores them in an array. Then, the
program should rotate the elements one place to the right. For example, if the array
were 1, −9, 5, 3, the rotated array would be 3, 1, −9, 5.
*/
#include <stdio.h>

int main() 
{
    int arr[5] = {1, -9, 5, 3}, temp;
    int n = 4; // Number of elements

    temp = arr[n - 1]; // Store last element
    for (int i = n - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];//Shift Elements to the Right
    }
    arr[0] = temp; // Move last element to front

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

