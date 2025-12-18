#include <stdio.h>
void main()
{
    int age=22;
    int age1=&age;
    int _age=age1;
    printf("%p", &_age);
}