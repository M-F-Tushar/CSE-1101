
// C Program to demonstrate how to use union
#include <stdio.h>
// union template or declaration
union un
{
    int member1;
    char member2;
    float member3;
};
int main()
{
// defining a union variable
    union un var1;
// initializing the union member
    var1.member1 = 15;
    printf("The value stored in member1 = %d", var1.member1);
    return 0;
}
