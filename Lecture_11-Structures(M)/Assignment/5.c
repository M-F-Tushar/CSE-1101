/*
Write a program to store the roll no., name and age of 5 students and then print the details
of the student with roll no. 2 or a specific roll number.
Sample Input:
Enter Roll No to Find Details: 4
Sample Output:
Information of Roll No: 4
---------------------------------
Roll No: 4
Name: Mr. Fox
Age: 19

*/
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
};

int main() {
    struct Student students[5] = 
    {
        {1, "John Doe", 18},
        {2, "Jane Smith", 19},
        {3, "Alice Brown", 18},
        {4, "Mr. Fox", 19},
        {5, "Ethan Hunt", 20}
    };

    int searchRoll, i;
    printf("Enter Roll No to Find Details: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < 5; i++) 
    {
        if (students[i].roll == searchRoll) 
        {
            printf("\nInformation of Roll No: %d\n", searchRoll);
            printf("----------------------------\n");
            printf("Roll No: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            return 0;
        }
    }
    
    printf("Student with Roll No %d not found.\n", searchRoll);
    return 0;
}
