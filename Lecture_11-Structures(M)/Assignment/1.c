/*
1. Write a program to store(initialize) and print the roll no., name, age and marks of a student
using structures.
Sample Input:
Student s = {10, “Arafat Rahman”, 20, 88};
Sample Output:
Roll: 10
Name: Arafat Rahman
Age: 20
Marks: 88
*/

#include<stdio.h>

struct Student 
{
    int roll;
    char name[50];
    int age;
    int marks;
};

int main()
{
    struct Student s1 = {10,"Arafat Rahman",20,88};

    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Marks: %d\n",s1.marks);

    return 0;
}
