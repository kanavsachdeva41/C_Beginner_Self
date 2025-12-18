#include <stdio.h>
void main()
{
    printf("capital alphabets are: \n");

    for (char x = 'A'; x <= 'Z'; x++)
    {
        printf("%c \n", x);
    }

    int n=1;

    while(n<=5)
    {
        printf("%d", n);
        n++;
    }
}