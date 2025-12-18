#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str,100,stdin);

    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            continue;
        }
    }

    puts(str);
}