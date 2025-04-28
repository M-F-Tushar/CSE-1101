/*
Write a program to compare two dates entered by user. Make a structure named Date to
store the elements day, month and year to store the dates. If the dates are equal, display
"Dates are equal" otherwise display "Dates are not equal".
Sample Input:
Case-01:
Date-01: Day = 30, Month = 1, Year = 2024
Date-02: Day = 30, Month = 1, Year = 2024
Case-02:
Date-01: Day = 30, Month = 1, Year = 2024
Date-02: Day = 30, Month = 1, Year = 2024
Sample Output:
Dates are equal
Dates are not equal
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() 
{
    struct Date d1, d2;

    printf("Enter Date-01 (Day Month Year): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter Date-02 (Day Month Year): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) 
    {
        printf("Dates are equal\n");
    } 
    else 
    {
        printf("Dates are not equal\n");
    }

    return 0;
}
