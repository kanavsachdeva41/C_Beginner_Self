#include <stdio.h>
void main()
{
    FILE *file6;
    file6=fopen("file6.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    fprintf(file6,"Student records: \n");
    fprintf(file6,"Name-%s\n", name);
    fprintf(file6,"Age-%d\n", age);
    fprintf(file6,"CGPA-%.2f", cgpa);

    fclose(file6);
}