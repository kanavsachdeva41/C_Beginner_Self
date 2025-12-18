#include <stdio.h>
#include <math.h>
void main()
{
    float x,y ;

    printf("enter x coordinates: ");
    scanf("%f", & x);

    printf("enter y coordiantes: ");
    scanf("%f", & y);
    
    float a = x*x + y*y;

    printf("%f", a);
}