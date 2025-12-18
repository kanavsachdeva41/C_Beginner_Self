#include<stdio.h>
void main()
{
    int n;
    printf("enetr n:");
    scanf("%d", & n);

    int i=10;
    while(i>=1)
    {
        printf("%d\n", i*n);
        i--;
    }
}