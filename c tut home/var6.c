#include <stdio.h>
void main()
{
    int principalamount, rate, time;

    printf("enter principal amount");
    scanf("%d", & principalamount);

    printf("enter rate");
    scanf("%d", & rate);

    printf("enter time");
    scanf("%d", & time);

    float simpleinterest= (principalamount*rate*time)/100;
    printf("simple interest is %f \n", simpleinterest );


    float finalamount=principalamount*(1 + rate*time);
    printf("final amount is %f", finalamount );

}