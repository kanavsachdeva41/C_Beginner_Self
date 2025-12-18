#include <stdio.h>
void main()
{
    int i=5;
    int *ptr= &i;
    int **ptrr=&ptr;

    printf("%u", **ptrr);
}