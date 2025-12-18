#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;

    ptr=(int *)calloc(5,sizeof(int));

    for(int i=0;i<5;i++)
    {
        scanf("%d\n", &ptr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\n", ptr[i]);
    }
}