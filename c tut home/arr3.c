#include <stdio.h>
void main()
{
    int i,n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    countodd(i,n,arr);

}

void countodd(int n,int i,int arr[])
{
    int count=0;
    
    for(i=0;i<n;i++)
    {
    if(arr[i]%2 != 0)
    {
        count++;
    }
    }

    printf("Odd elements: %d", count);
    
}