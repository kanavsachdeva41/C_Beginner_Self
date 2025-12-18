#include <stdio.h>
void main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            count ++;
        }
    }

    printf("Count of vowels: %d", count);

}