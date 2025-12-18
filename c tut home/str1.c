#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    printf("Enter name: ");
    fgets(name,100,stdin);

    for(int i=0;name[i]!='\0';i++)
    {
        char ch=name[i];
        printf("%c\n", ch);
    }

}