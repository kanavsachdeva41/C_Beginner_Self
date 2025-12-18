#include <stdio.h>
void sum(int n);

void main()
{
    int n;
    printf("enter n:");
    scanf("%d", & n);

    sum(n);
}

void sum(int n)
{
    int sum=0;
    while(n>0)
    {
        int i;
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum is %d", sum);
}