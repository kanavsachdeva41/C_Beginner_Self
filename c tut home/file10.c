#include<stdio.h>
void main()
{
    FILE *file10;
    file10=fopen("file10.txt","r");
    char str[100];

    fgets(str,100,file10);
    fclose(file10);
    file10=fopen("file10.txt","w");
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    fprintf(file10,"Number of vowels: %d",count);

    fclose(file10);
}