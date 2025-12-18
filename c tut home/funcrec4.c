#include <stdio.h>
int fib(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", & n);

    fib(n);
    printf("Fibonacci for %dth term is %d", n, fib(n));

}

int fib( int n)
{
    if ( n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int fibnm1 =fib(n-1), fibnm2 = fib(n-2);
    int fibn = fibnm1 +fibnm2;
    return fibn;
}