// Ramesh's basic salary is input through keyboard. His dearness allowance is 40% of basic pay and house rent allowance is 20% of basic pay. WAP to calculate his gross salary.
#include <stdio.h>
void main()
{
    float bs, hra, da, grs;

    printf("Enter Basic Salary of Ramesh: ");
    scanf("%f", &bs);

    da= 0.4 * bs;
    hra = 0.2 * bs;
    grs = hra + bs + da;
    printf("Basic salary: %f\nDearness allowance: %f\nHouse rent allowance: %f\nGross salary: %f\n", bs,da,hra,grs);

}