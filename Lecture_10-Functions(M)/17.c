//Fibonacci Series using Recursion
#include <stdio.h>

// Recursive function for Fibonacci series
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive step
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}
/*
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.

Fibonacci Series:
F(n)=F(n−1)+F(n−2)
where:

F(0)=0 (Base Case)

F(1)=1 (Base Case)
For n≥2, use the recursive formula


Steps to Solve Using Recursion:
Base Case: If n == 0, return 0. If n == 1, return 1.
Recursive Step: Compute F(n-1) + F(n-2).
Call recursively until reaching the base case.
*/
