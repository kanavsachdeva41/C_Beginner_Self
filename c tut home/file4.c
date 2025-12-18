#include <stdio.h>
void main()
{
    FILE *file4;
    file4=fopen("file4.txt","r");

    char ch=fgetc(file4);

    while(ch != EOF)
    {
        printf("%c", ch);
        ch=fgetc(file4);
    }
    printf("\n");
}