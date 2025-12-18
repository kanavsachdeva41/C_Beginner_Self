#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *mall;

    mall=(float *)malloc(5*sizeof(int));

    mall[0]=0;
    mall[1]=1;
    mall[2]=3;
    mall[3]=5;
    mall[4]=4;

    for(int i=0;i<5;i++)
    {
        printf("%.2f\n", mall[i]);
    }
}