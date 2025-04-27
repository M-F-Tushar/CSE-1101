/*
Write a program that creates an identity 6×6 array and displays its elements as an
identity 6×6 matrix in algebra form. (Note: In math, an identity matrix has 1’s on the
main diagonal’s elements and 0’s everywhere else.)
*/
#include <stdio.h>

int main() {
    int i, j;
    int identity[6][6];

    // Fill the identity matrix
    for(i = 0; i < 6; i++) 
    {
        for(j = 0; j < 6; j++) 
        {
            if(i == j)
                identity[i][j] = 1; // main diagonal
            else
                identity[i][j] = 0; // everything else
        }
    }

    // Display the identity matrix
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}

