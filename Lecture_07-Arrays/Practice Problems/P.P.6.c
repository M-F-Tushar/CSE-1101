/*Write a program that reads 8 integers, stores them in a 2×4 array, and displays the
array elements in reverse order, from the lower-right element to the upper-left one.*/
#include <stdio.h>

int main() {
    int arr[2][4];
    int i, j;

    // Input: Read 8 integers into the 2x4 array
    printf("Enter 8 integers:\n");
    for(i = 0; i < 2; i++) 
    {
        for(j = 0; j < 4; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output: Display in reverse order (bottom-right to top-left)
    printf("Array in reverse order:\n");
    for(i = 1; i >= 0; i--) 
    {
        for(j = 3; j >= 0; j--) 
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}
