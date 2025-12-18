#include <stdio.h>
void main()
{
    char name[100];
    int count=0;
    printf("Enter string: ");
    scanf("%s", name);

    char ch;
    printf("Enter character whose freq is to be found out: ");
    scanf(" %c", &ch);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==ch)
        {
            count++;
        }
    }
    printf("Freq is: %d", count);
}