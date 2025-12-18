#include <stdio.h>
void hello(int n);

int main()
{
    int n;
    printf("Enter n");
    scanf("%d", & n);

    hello(n);
    return 0;
}
void hello(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("Hello!\n");
    hello(n-1);
}