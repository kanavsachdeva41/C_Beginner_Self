#include <stdio.h>
void main()
{
    int i,j,n1,n2;

    printf("Enter n1 and n2: ");
    scanf("%d%d", &n1,&n2);

    int arr[2][10];

    for(i=0;i<2;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d ", arr[i][j]=(i+2)*(j+1));
        }
        printf("\n");
    }
}