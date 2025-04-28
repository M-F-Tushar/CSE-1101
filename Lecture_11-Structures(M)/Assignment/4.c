/*Write a program to add two distances in inch-feet using structure. The values of the
distances are to be taken from the user.
Sample Input:
Distance-01: feet = 3, inches = 10
Distance-02: feet = 4, inches = 11
Sample Output:
Distance: 8 feet, 9 inches
*/
#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() 
{
    struct Distance d1, d2, sum;

    printf("Enter Distance-01 (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    printf("Enter Distance-02 (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12) 
    {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

    printf("Distance: %d feet, %d inches\n", sum.feet, sum.inches);

    return 0;
}
