#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str,100,stdin);

    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            continue;
        }
        else
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    printf("New string: %s", str);
}