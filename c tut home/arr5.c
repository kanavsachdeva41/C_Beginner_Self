#include <stdio.h>
void main()
{
    int n,i;

    printf("Enter the number of terms of fibonacci series: ");
    scanf("%d", &n);

    int fib[n];

    fib[0]=0,fib[1]=1;

    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    printf("Fibonacci series upto %dth term is: ", n);
    printf("%d %d ", fib[0], fib[1]);

    for(i=2;i<n;i++)
    {
        printf("%d ", fib[i]);
    }
    
}
