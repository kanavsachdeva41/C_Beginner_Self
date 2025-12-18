#include <stdio.h>
void main()
{
    int n=4;
    square(&n);
    printf("%d", n);
}
void square(int *n)
{ 
    *n =*n * *n;
    printf("%d", *n);
    
}
