#include <stdio.h>
void main()
{
    int *mall;

    mall=(int *)malloc(5*sizeof(int));

    mall[0]=0;
    mall[1]=1;
    mall[2]=3;
    mall[3]=5;
    mall[4]=4;

    for(int i=0;i<5;i++)
    {
        printf("%d\n", mall[i]);
    }
}