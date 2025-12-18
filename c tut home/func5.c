#include <stdio.h>
#include <math.h>

void main()
{
    int n,sq;
    printf("Enter n: ");
    scanf("%d", &n);

    sq=pow(n,2);
    printf("square 0f %d is: %d", n, sq);
}