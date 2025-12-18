#include <stdio.h>
void table(int n);

void main()
{
    int n;
    printf("Enter n:");
    scanf("%d", & n);

    table(n);
}

void table(int n)
{
    int table;

    for(int i=1; i<=10;i++)
    {
        table=n*i;
        printf("%d\n",table);
    }
}