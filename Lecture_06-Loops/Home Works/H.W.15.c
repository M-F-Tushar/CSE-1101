/*
Write a program that reads two integers (i.e., M, N) and produces an M×N grid. Each
grid cell should be 3×2 characters wide. As an example, a 3×5 grid follows:
+−−+−−+−−+−−+−−+
|  |  |  |  |  |
+−−+−−+−−+−−+−−+
|  |  |  |  |  |
+−−+−−+−−+−−+−−+
|  |  |  |  |  |
+−−+−−+−−+−−+−−+
The three horizontal characters of each cell should be +−− and the two verticals +|
*/

#include <stdio.h>

int main()
{
    int R, C, i, j;


    printf("Enter number of rows and columns: ");
    scanf("%d%d", &R,&C);

    for (int i = 0; i <= R; i++)
    {
        for (int j = 0; j <=C; j++)
        {
            printf("+--");
        }
        printf("+\n");

        if (i < R)
        {
            for (int j = 0; j < C; j++)
            {
                printf("|  ");
            }
            printf("|\n");
        }
    }

    return 0;
}

