/*
Write a program that reads 100 integers and stores them in an array. Then, the
program should rotate the elements one place to the right. For example, if the array
were 1, −9, 5, 3, the rotated array would be 3, 1, −9, 5.
*/
#include <stdio.h>

int main() {
    int arr[100], i, temp;

    // You can change 10 to 100 for full input
    int n = 10; 

    // Read n integers
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store last element in temp
    temp = arr[n - 1];

    // Shift elements one position to the right
    for(i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place last element at first position
    arr[0] = temp;

    // Print rotated array
    printf("Rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

