#include <stdio.h>
void sq(int side);
void cir(int r);
void rec(int l,int b);

void main()
{
    int side,r,l,b;

    printf("Enter side,radius,length and breath:");
    scanf("%d %d %d %d", & side, & r, &l, &b);

    sq(side);
    cir(r);
    rec(l,b);
}

void sq(int side)
{
    int area=side*side;
    printf("Area of square is %d\n", area);
}
void cir(int r)
{
    float area1=3.14*r*r;
    printf("Area of cricle is %f\n", area1);
}
void rec(int l,int b)
{
    int area2=l*b;
    printf("Area of rectangle is %d\n", area2);
}