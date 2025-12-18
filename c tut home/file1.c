#include <stdio.h>
void main()
{
    FILE *file1;

    file1=fopen("file1.txt", "r");
    char ch[100];
    fscanf(file1,"%s",ch);
    printf("%s", ch);

    fclose(file1);
}