/*
1    2    3    6    36    648    .....
Here the first three numbers are fixed and then each number is the multiplication of the previous three numbers; for example, the 4th number is the multiplication of the first three numbers (1 * 2 * 3 = 6). Now write a full C program using recursion to find the Nth number from the given sequence.

Input: An integer N (0 < N < 100).
Output: Nth number from the given sequence.

Sample Input
6

Sample Output
648

*/

#include <stdio.h>

// Recursive function to find the Nth number in the sequence
int findNthNumber(int N) {
    // Base cases
    if (N == 1) return 1;
    if (N == 2) return 2;
    if (N == 3) return 3;
    
    // Recursive case: Calculate the product of the previous three numbers
    return findNthNumber(N-1) * findNthNumber(N-2) * findNthNumber(N-3);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    // Validate input
    if (N < 1 || N > 100) 
    {
        printf("N must be between 1 and 100.\n");
        return 1;
    }
    
    // Find and print the Nth number
    int result = findNthNumber(N);
    printf("The %dth number in the sequence is: %d\n", N, result);
    
    return 0;
}
/*
# step-by-step approach to solve this problem:

Base Case: The first three numbers are given as 1, 2, and 3. If N is 1, 2, or 3, the function returns 1, 2, or 3 respectively.

Recursive Case: For N > 3, the function calls itself recursively to find the product of the previous three numbers.


# Explanation:

Base Case Handling:

If N is 1, 2, or 3, the function directly returns 1, 2, or 3, respectively, as these are the first three fixed numbers in the sequence.

Recursive Case Handling:

For N > 3, the function calls itself recursively to calculate the product of the previous three numbers:

findNthNumber(N-1): Finds the (N-1)th number in the sequence.

findNthNumber(N-2): Finds the (N-2)th number in the sequence.

findNthNumber(N-3): Finds the (N-3)th number in the sequence.

The function multiplies these three values to get the Nth number in the sequence.

Main Function:

Prompts the user to enter the value of N.

Validates the input to ensure N is between 1 and 100.

Calls the findNthNumber function to find the Nth number and prints the result.

✅ How It Works:
Let's walk through an example for n = 6:

findNthNumber(6):

Calls findNthNumber(5), which calls findNthNumber(4).

findNthNumber(4):

Calls findNthNumber(3), findNthNumber(2), and findNthNumber(1).

Returns 6 (since 1 * 2 * 3 = 6).

findNthNumber(5):

Calls findNthNumber(4), findNthNumber(3), and findNthNumber(2).

Returns 36 (since 6 * 3 * 2 = 36).

findNthNumber(6):

Calls findNthNumber(5), findNthNumber(4), and findNthNumber(3).

Returns 648 (since 36 * 6 * 3 = 648).
*/
