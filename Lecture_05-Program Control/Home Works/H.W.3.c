/*
A water supply company charges the water consumption, as follows:
a. Fixed amount of 10.0 Taka
b. For the first 30 cubic meters, 0.6 Taka per cubic meter
c. For the next 20 cubic meters, 0.8 Taka per cubic meter
d. For the next 10 cubic meters, 1.0 Taka per cubic meter
e. For every additional meter, 1.2 Taka per cubic meter
Write a program that reads the water consumption in cubic meters and displays the bill
*/
#include <stdio.h>

int main() {
    double consumption, bill = 10.0;
    
    printf("Enter water consumption in cubic meters: ");
    scanf("%lf", &consumption);

    if (consumption <= 30) 
    {
         bill += consumption * 0.6;
    } 
    else if (consumption <= 50) 
    {
         bill += 30 * 0.6 + (consumption - 30) * 0.8;
    } 
    else if (consumption <= 60) 
    {
         bill += 30 * 0.6 + 20 * 0.8 + (consumption - 50) * 1.0;
    }
    else 
    {
        bill += 30 * 0.6 + 20 * 0.8 + 10 * 1.0 + (consumption - 60) * 1.2;
    }

    printf("The water bill is: %.2f Taka\n", bill);

    return 0;
}

