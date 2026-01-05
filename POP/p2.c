// Distance between two cities is input (in km). WAP to convert and print distance in meters, feet, inches and centimeters.
#include <stdio.h>
void main()
{
    float km,m,cm,ft,inch;

    printf("Enter distance between the cities in km: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance is meters: %f\nDistance in centimeters: %f\nDistance in feet: %f\nDistance in inches: %f\n", m, cm, ft, inch);
}