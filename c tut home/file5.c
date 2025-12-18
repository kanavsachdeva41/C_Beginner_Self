#include <stdio.h>
void main()
{
    FILE *file5;
    file5=fopen("file5.txt","r");

    int n;
    fscanf(file5,"%d",&n);
    printf("Integer 1: %d\n", n);
    fscanf(file5,"%d",&n);
    printf("Integer 2: %d\n", n);
    fscanf(file5,"%d",&n);
    printf("Integer 3: %d\n", n);
    fscanf(file5,"%d",&n);
    printf("Integer 4: %d\n", n);
    fscanf(file5,"%d",&n);
    printf("Integer 5: %d\n", n);

    fclose(file5);

}