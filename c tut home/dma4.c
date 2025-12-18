#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    float *call;

    printf("Enter n: ");
    scanf("%d", &n);

    call=(float *)calloc(n,sizeof(float));

    free(call);
    
    for(int i=0;i<5;i++)
    {
        printf("%.2f\n", call[i]);
    }
}