#include <stdio.h>
void main()
{
    int marks;
    printf("enetr marks \n");
    scanf("%d", & marks);

    if (marks>30){
        printf(" Student is pass \n");
    }
    else {
        printf("student is fail \n");
    };

    marks>30 ? printf(" student is pass"): printf("student is fail");
}