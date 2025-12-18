#include <stdio.h>
#include <string.h>
void main()
{
    char password[100];
    char salt[]="123@";
    char saltpass[200];

    printf("Enter password: ");
    fgets(password,100,stdin);
    password[strcspn(password, "\n")] = '\0';

    strcpy(saltpass,password);
    strcat(saltpass,salt);

    printf("Salted pass is: %s", saltpass);
}