#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    int m;
    printf("enter marks=");
    scanf("%d", &m);

    if (m < 30)
    {
        printf(" C grade \n");
    }
    else if (m >= 30 && m <= 70)
    {
        printf("Grade B \n");
    }
    else if (m >= 70 && m < 90)
    {
        printf("Grade A \n");
    }
    else
    {
           printf(" grade A+");
    }
}