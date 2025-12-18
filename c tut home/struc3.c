// create a structure to store vectors. Then make a function to return sum of two vectors. //
#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

void sum(vec v1, vec v2)
{
    vec sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("sum of vectors: (%d,%d)", sum.x, sum.y);
}

int main()
{
    vec v1,v2;

    printf("Enter x and y for first vector: ");
    scanf("%d %d", &v1.x,&v1.y);

    printf("Enter x and y for second vector: ");
    scanf("%d %d", &v2.x,&v2.y);

    sum(v1,v2);

    return 0;

}