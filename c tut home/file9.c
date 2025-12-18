#include <stdio.h>
void main()
{
    FILE *file9;
    file9=fopen("file9.txt","r");

    char str[100];
    fgets(str,100,file9);
    fclose(file9);

    printf("%s", str);
}