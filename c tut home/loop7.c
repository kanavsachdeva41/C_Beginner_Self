#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter n: ");
    scanf("%d", & n);
    
    int fac=1;

    do{fac=fac*i;
    i++;}    
    while(i<=n);

    printf("%d", fac);
}
    