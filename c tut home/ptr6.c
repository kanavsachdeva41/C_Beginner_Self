#include <stdio.h>
void main()
{
    int a=5, b=6;
    swap(&a, &b);
    printf("%d %d", a,b);
}

void swap(int *x, int *y)
{
   int  t=*x;
   *x=*y;
   *y=t;

}