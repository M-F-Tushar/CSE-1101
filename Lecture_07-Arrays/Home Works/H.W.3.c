//Write a program that declares an array of 10 integers, assigns random values from 0 to 20 to its elements, and displays their average.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int arr[10];
    int i, sum = 0;
    float average;

    srand(time(NULL)); // Seed the random number generator

    // Assign random values and calculate sum
    for(i = 0; i < 10; i++) 
    {
        arr[i] = rand() % 21; // Random number from 0 to 20
        sum += arr[i];
    }

    average = sum / 10.0;

    printf("Average = %.2f\n", average);

    return 0;
}
