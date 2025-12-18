#include <stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);

    printf("table is:\n");

    int i = 1;
    do
    {
        printf("%d \n", n * i);
        i++;
    } 
    while (i <= 10);
}
