#include <stdio.h>
void main()
{
    int l,b ;
    printf("enter length");
    scanf("%d", & l);

    printf("enter breath");
    scanf("%d", & b);

    float peri=2*(l + b);
    printf("perimeter is %f", peri);

}