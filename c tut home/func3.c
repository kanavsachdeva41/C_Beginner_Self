#include <stdio.h>
void sum(int n);

void main()
{
    int n;

    printf("Enter n:");
    scanf("%d", & n);

    sum(n);
}

void sum(int n)
{
    int sum;
    sum=(n*(n+1))/2;
    printf("sum is:%d", sum);
}