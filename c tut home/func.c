#include <stdio.h>

void netprice(int amount);

void main()
{
    int amount;
    printf("Enter amount:");
    scanf("%d", & amount);

    netprice(amount);
}

void netprice(int amount)
{
    float net;
    net=amount+0.18*amount;
    printf("netprice is: %.2f", net);

}