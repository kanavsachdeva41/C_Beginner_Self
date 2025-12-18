#include <stdio.h>
void temp(int c);

void main()
{
    int c;
    printf("Enter c:");
    scanf("%d", & c);

    temp(c);
}

void temp(int c)
{
    float f;
    f=((9.00*c)/5.00)+32;

    printf("Temp is f: %f", f);

}