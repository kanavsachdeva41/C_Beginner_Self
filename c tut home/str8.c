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
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            switch(str[i])
            {
                case 'a': str[i]='A';
                break;
                case 'e': str[i]='E';
                break;
                case 'i': str[i]='I';
                break;
                case 'o': str[i]='O';
                break;
                case 'u': str[i]='U';
                break;
            }
        }
    }
    printf("NEW STRING: %s",str);
}