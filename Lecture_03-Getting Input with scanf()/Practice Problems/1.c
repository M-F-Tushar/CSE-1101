//checks the returned value of scanf () to verify that the
//input integer is successfully read and stored into num
#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    
    // Keep prompting the user until a valid integer is entered
    while (scanf("%d", &num) != 1) {
        // If input is not an integer, print an error message
        printf("Enter number: ");
        
        // Consume any unread characters (like a newline or invalid input)
        while (getchar() != '\n'); // Clear the input buffer
    }
    
    printf("Inserted value: %d\n", num);

    return 0;
}
🔹 Explanation of the Code:
scanf("%d", &num):

This function reads an integer from the user and stores it in the variable num.

It returns the number of successfully read items. If it reads one integer, it will return 1. If it fails (e.g., non-numeric input), it will return 0.

while (scanf("%d", &num) != 1):

This loop keeps asking the user for input until a valid integer is entered. If the user enters something that is not an integer, scanf() will return 0, and the loop will prompt the user again.

while (getchar() != '\n');:

After an invalid input, this loop consumes all characters in the input buffer until it reaches the newline character ('\n'), effectively clearing the buffer.

This ensures that the program doesn't get stuck in an infinite loop by reading invalid characters repeatedly.

printf("Inserted value: %d\n", num):

Once a valid integer is entered, this line will print the inserted value.

🔹 Sample Output:
Valid Input:

Enter number: 12
Inserted value: 12
Invalid Input (Non-integer):

Enter number: abc
Enter number: 123
Inserted value: 123
In the second case, the program will first ask the user to input a number, then consume the invalid characters (abc), and prompt the user again until a valid integer is entered.

🔹 Key Points:
scanf() Return Value: It returns 1 if it successfully reads an integer, otherwise it returns 0.

getchar(): Used to consume characters from the input buffer, making sure that the invalid input doesn't interfere with subsequent inputs.

