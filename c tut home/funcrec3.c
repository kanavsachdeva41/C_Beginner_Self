#include <stdio.h>
int fac(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", & n);

    fac(n);
    printf("Factorial of %d is %d", n , fac(n));
}

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int facnm1 = fac(n-1);
    int facn = fac(n-1)*n;
    return facn;
}