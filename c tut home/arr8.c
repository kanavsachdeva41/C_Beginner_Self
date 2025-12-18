#include <stdio.h>
void main()
{
    int n,i,num;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to insert at end of array: ");
    scanf("%d", &num);

    for(i=0;i<n+1;i++)
    {
        a[n]=num;
        printf("%d ", a[i]);
    }

    


}