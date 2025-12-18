#include<stdio.h>
void main()
{
    FILE *file7;
    file7=fopen("file7.txt","w");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    fprintf(file7,"Odd numbers upto 1 to %d\n", n);

    for(int i=1;i<=n;i++)
    {
        if( i%2 != 0 )
        {
            fprintf(file7,"%d\n", i);
        }
    }

    fclose(file7);
}