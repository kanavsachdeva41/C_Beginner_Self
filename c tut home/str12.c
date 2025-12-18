#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int start=3,end=7;
    int i,j=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(i=start;i<=end && str[i]!='\0';i++)
    {
        str[j++]=str[i];
    }
    str[j]='\0';
    printf("New string: ");
    puts(str);
}