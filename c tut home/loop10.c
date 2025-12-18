#include <stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d \n", & n);

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum is: %d", sum);
    for(int l=n;l>=1;l--)
    {printf("%d", l);}
}