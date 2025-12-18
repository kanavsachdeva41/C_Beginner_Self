// Wap to store details fo three students.//
#include <stdio.h>

typedef struct student
{
    char name[100];
    int roll;
    float marks;
} stu;

int main()
{
    stu s1={"Kunal",23,97.0};
    stu s2={"Minal",32,94.0};
    stu s3={"krunal",42,89.0};

    return 0;
}