#include <stdio.h>
#include <math.h>
void sqr(int n);

void main()
{
    int n;
    printf("enetr n:");
    scanf("%d", &n);

    sqr(n);
}

void sqr(int n)
{
    float sqr=pow(n,0.5);
    printf("square root of %d is %f", n, sqr);
}