#include <stdio.h>
void main()
{
    int c;
    printf("enter temperature in celcius");
    scanf("%d", & c);

    float tempinf=((9.0*c)/5.0) + 32;
    printf("temperature in farenheit is %f", tempinf);

}
