#include <stdio.h>
void main()
{
    FILE *file8;

    file8=fopen("file8.txt", "r");

    int a,b;
    fscanf(file8,"%d", &a);
    fscanf(file8,"%d", &b);

    printf("%d %d",a,b);
    fclose(file8);

    int sum=a+b;

    file8=fopen("file8.txt","w");

    fprintf(file8,"Sum of %d and %d is %d\n", a,b,sum);

    fclose(file8);

}