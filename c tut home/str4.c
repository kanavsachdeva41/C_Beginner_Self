#include <stdio.h>
void main()
{
    char ch;
    int i=0;
    char str[100];

    printf("Enter string: \n");

    while(1)
    {
        scanf("%c",&ch);

        if(ch=='\n')
        {
            break;
        }
        else
        {
            str[i++]=ch;
        }
    }
    str[i]='\0';
    printf("YOUR entered string is: %s", str);

}