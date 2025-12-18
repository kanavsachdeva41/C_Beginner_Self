#include <stdio.h>
void main()
{
    int i,j;
    
    int marks[2][3];

    for(i=0;i<2;i++)
    {
        printf("Enter %d student marks: ", i+1);
        for(j=0;j<3;j++)
        {   
            scanf("%d", &marks[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

}