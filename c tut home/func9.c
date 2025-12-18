#include <stdio.h>
void temp(int tempc);

void main()
{
    int tempc;
    printf("Enter tempertaure in celsius:");
    scanf("%d", & tempc);

    temp(tempc);
}

void temp(int tempc)
{
    if(tempc<=20)
    {
        printf("cold");
    }
    else if(tempc>=25)
    {
        printf("hot");
    }
    else
    {
        printf("nor hot not cold");
    }
}