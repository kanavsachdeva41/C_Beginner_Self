#include <stdio.h>
void main()
{
    float x, m, c;

    printf("enter x");
    scanf("%f", & x);

    printf("enter m");
    scanf("%f", & m);

    printf("enter c");
    scanf("%f", & c);

    float y = m*x + c;
    printf("value of y is %f", y);
}