Q2: Write a program that produces the output shown in Fig. a, Also store the output in a 2D array and print in reverse as in Fig. b
Fig. a:
1
2	4
3	3	9
4	4	4	16
5	5	5	5	25

Fig. b:
25	5	5	5	5
16	4	4	4
9	3	3
4	2
1


#include <stdio.h>

int main() {
    int arr[5][5] = {0}; // Initialize array with zeros
    int i, j;

    // Step 1: Fill array according to Fig. a
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            if (i == j)
                arr[i][j] = (i + 1) * (i + 1); // Square of the number
            else
                arr[i][j] = i + 1; // Just the row number
        }
    }

    // Print Fig. a
    printf("Fig. a:\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Step 2: Print array in reverse order (Fig. b)
    printf("\nFig. b:\n");
    for (i = 4; i >= 0; i--) 
    {
        for (j = i; j >= 0; j--) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

