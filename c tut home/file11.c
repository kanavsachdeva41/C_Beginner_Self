#include <stdio.h>
typedef struct student{
    char name[100];
    int marks;
    float cgpa;
    char course[20];
} stu;

void main()
{
    stu s1={"Krish",478,8.6,"Btech"};
    stu s2={"Kanav",496,9.8,"BCA"};
    stu s3={"Anaya",488,9.2,"BBA"};
    stu s4={"Anish",470,8.5,"Btech"};
    stu s5={"Agam",480,8.8,"BDS"};

    FILE *file11;
    file11=fopen("file11.txt","w");
    fprintf(file11,"Name\tMarks\tCGPA\tCourse\n");
    fprintf(file11,"%s\t%d \t%.2f\t%s\n",s1.name,s1.marks,s1.cgpa,s1.course);
    fprintf(file11,"%s\t%d \t%.2f\t%s\n",s2.name,s2.marks,s2.cgpa,s2.course);
    fprintf(file11,"%s\t%d \t%.2f\t%s\n",s3.name,s3.marks,s3.cgpa,s3.course);
    fprintf(file11,"%s\t%d \t%.2f\t%s\n",s4.name,s4.marks,s4.cgpa,s4.course);
    fprintf(file11,"%s\t%d \t%.2f\t%s\n",s5.name,s5.marks,s5.cgpa,s5.course);
    fclose(file11);
}
