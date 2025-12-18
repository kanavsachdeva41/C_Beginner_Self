#include <stdio.h>
void main()
{
    int i,n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ", a[i]);
    }
    
}