#include <stdio.h>
void main()
{
    int n=4;
    printf("%p", &n);
    addr(&n);

}
void addr(int *n)
[
    printf("%p", (&n))
]