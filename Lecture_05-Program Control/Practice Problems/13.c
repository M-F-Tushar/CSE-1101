/*Write a program that displays the area of a square or a circle based on the user�s
choice. If the user enters 0, the program should read the side of the square and
display its area. If the user enters 1, the program should read the radius of the circle
and display its area.*/
#include <stdio.h>
int main()
{
    int sel;
    double len;
    printf("Enter choice (0:square 1:circle): ");
    scanf("%d", &sel);
    switch(sel)
    {
    case 0:
        printf("Enter side length: ");
        scanf("%lf", &len);
        if(len <= 0)
        {
            printf("Error: Wrong length\n");
            return 0;
        }
        printf("Square area is %f\n", len*len);
        break;
    case 1:
        printf("Enter radius: ");
        scanf("%lf", &len);
        if(len <= 0)
        {
            printf("Error: Wrong length\n");
            return 0;
        }
        printf("Circle area is %f\n", 3.14*len*len);
        break;
    default:
        printf("Error: Wrong choice\n");
        break;
    }
    return 0;
}
