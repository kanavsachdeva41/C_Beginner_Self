#include <stdio.h>
void main()
{
    FILE *file2;

    file2=fopen("file2.txt", "w");
    fputc('B',file2);
    fputc('y',file2);
    fputc('e',file2);
    fputc('e',file2);
    fputc('!',file2);
    fclose(file2);
}