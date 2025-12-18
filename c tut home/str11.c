#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int freq[256]={0};
    int max=0;
    char maxch;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            maxch=str[i];
        }
    }

    printf("Highest frequency character is: %c (%d times)", maxch, max);
}