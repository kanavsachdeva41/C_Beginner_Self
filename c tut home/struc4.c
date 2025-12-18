// Create structure to store complex numbers //
#include <stdio.h>

typedef struct complex{
    int real;
    int imag;
} com;

int main()
{
    com c1={5,6};
    com *ptr;

    ptr=&c1;

    printf("Real and imaginary part of the complex number c1: (%d,%d)", ptr->real,ptr->imag);

}