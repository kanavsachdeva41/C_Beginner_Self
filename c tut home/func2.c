#include <stdio.h>
void namaste()
{
    printf("Namaste!\n");
}
void bonjour()
{
    printf("Bonjour!\n");
}
void main()
{
    char nation;
    printf("Enter nationality:");
    scanf("%c", & nation);

    if(nation =='I')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

}