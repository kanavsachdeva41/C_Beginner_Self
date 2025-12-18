#include <stdio.h>
int sum(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", & n);

    sum(n);
    printf("Sum of first %d natural numbers is %d", n, sum(n));
}

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    int sumnm1= sum(n-1);
    int sumn= sum(n-1) + n;
    return sumn;
}