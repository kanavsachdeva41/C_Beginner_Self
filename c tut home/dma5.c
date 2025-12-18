#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;

    ptr=(int *)calloc(5,sizeof(int));

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;

    ptr=realloc(ptr,8);

    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=5;
    ptr[5]=6;
    ptr[6]=7;
    ptr[7]=8;

    for(int i=0;i<8;i++)
    {
        printf("%d\n",ptr[i]);
    }
}