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
    int rows, cols;
    int i, j;

    // Ask the user for number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    // Repeat for each row
    for (i = 0; i < rows; i++)
    {
        // Print the top border of the row
        for (j = 0; j < cols; j++)
        {
            printf("+--");  // corner and horizontal line
        }
        printf("+\n"); // end the border line

        // Print the sides of each cell
        for (j = 0; j < cols; j++)
        {
            printf("|  ");  // side wall and empty space
        }
        printf("|\n"); // end the side line
    }

    // After last row, print the final bottom border
    for (j = 0; j < cols; j++)
    {
        printf("+--");
    }
    printf("+\n"); // end the last border

    return 0;
}
/*
tep 1: Read the Input
printf("Enter number of rows and columns: ");
scanf("%d%d", &rows, &cols);
We ask the user: "How many rows and columns do you want?"

Example: user types 3 5
rows = 3
cols = 5

Step 2: Start building the grid
We use a loop:
for (i = 0; i < rows; i++)
i counts rows (starting from 0)

We do this loop 3 times (for 3 rows).

Step 3: Print the top border of each row
Inside the row loop:

for (j = 0; j < cols; j++)
{
    printf("+--");
}
printf("+\n");
j counts columns.

For every column:

Print +--

+ is the corner

-- is the top wall of a cell

After the last column, print one more + and a newline \n to jump to next line.

Example after this step:
+--+--+--+--+--+
    
Step 4: Print the side walls
After printing the top:
for (j = 0; j < cols; j++)
{
    printf("|  ");
}
printf("|\n");
For every column:

Print |

| is the left wall

Two spaces are the inside of the cell

After the last column, print one more | and a newline.

Example after this step:
|  |  |  |  |  |
    
Step 5: Repeat for Each Row
We go back to Step 3 and Step 4 for each row.

So after the first row, we again draw the top border and side walls for the second row, and so on.

Step 6: After all rows, print the final bottom line
After the big row loop finishes, we add one final bottom border:
for (j = 0; j < cols; j++)
{
    printf("+--");
}
printf("+\n");
Exactly like before — print the bottom line to "close" the grid.

Final full example:
If user entered 3 5:

Print top of first row

Print sides of first row

Print top of second row

Print sides of second row

Print top of third row

Print sides of third row

Print final bottom line

Result:
+--+--+--+--+--+
|  |  |  |  |  |
+--+--+--+--+--+
|  |  |  |  |  |
+--+--+--+--+--+
|  |  |  |  |  |
+--+--+--+--+--+

*/
