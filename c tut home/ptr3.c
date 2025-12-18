#include <stdio.h>
void main()
{
    int *ptr;
    int x;
    ptr=&x;
    *ptr=0;

    printf("%d\n", x);
    printf("%d\n", *ptr);
    *ptr += 5;
    
    printf("%d", x);
    printf("%d\n", *ptr);

    (*ptr)++ ;
    printf("%d\n", *ptr);
    printf("%d", x);

}