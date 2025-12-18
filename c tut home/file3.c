#include <stdio.h>
void main()
{
    FILE *file3;

    file3=fopen("file3.txt", "a");
    fputc('B',file3);
    fputc('y',file3);
    fputc('e',file3);
    fputc('e',file3);
    fputc('!',file3);
    fclose(file3);
}