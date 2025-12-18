#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str,100,stdin);

    char ch;
    printf("Enter character to be found: ");
    scanf(" %c", &ch);
    int found=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            found=1;
            break;
        }
    }

    if(found)
    {
        printf("ENTERED CHARACTER IS PRESENT IN STRING. ");
    }
    else
    {
        printf("ENTERED CHARACTER IS NOT PRESENT IN STRING.");
    }
}