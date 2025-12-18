#include<stdio.h>
void main()
{
    char a;
    printf("enetr character \n");
    scanf("%c", & a);

    if (a >='A' && a <='Z'){
        printf("enetr character value is of upper case ");
    }
    else
    {
        printf("enetr character is not upepr case");
    }
}