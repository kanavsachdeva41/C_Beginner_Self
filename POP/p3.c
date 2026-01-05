// The marks obtained by a student in 5 different subjects are input. Wap to obtain aggregate and percentage marks obtained by student.
#include <stdio.h>
void main()
{
    float m1, m2, m3, m4, m5, aggr, per;

    printf("Enter marks obtained in 5 subjects by the student: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    per=aggr/5;

    printf("Aggregate marks: %f\nPercentage marks: %f", aggr, per);
}