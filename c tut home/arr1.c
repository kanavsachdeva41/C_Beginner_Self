#include <stdio.h>
void main()
{
    float a,b,c;
    
    printf("Enter price of three items: ");
    scanf("%f %f %f", &a, &b, &c);

    a=a+(a*18)/100;
    b=b+(b*18)/100;
    c=c+(c*18)/100;

    float arr[3];

    arr[0]=a,arr[1]=b;arr[2]=c;

    int i;

    for(i=0;i<3;i++)
    {
        printf("%.2f ", arr[i]);
    }
}