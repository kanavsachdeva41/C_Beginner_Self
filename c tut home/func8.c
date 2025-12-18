#include <stdio.h>
void per(int sci, int maths, int eng);

void main()
{
    int sci,maths,eng;
    printf("enter marks of sci, maths, eng:");
    scanf("%d %d %d", & sci, & maths, & eng);

    per(sci,maths,eng);
}

void per(int sci,int maths, int eng)
{
    float per;
    per=(sci+maths+eng)/3;
    printf("perecntage is %f", per);
}