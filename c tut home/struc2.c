// Enter adress of 5 people //
#include <stdio.h>

typedef struct address
{
    int houseno;
    char block;
    char city[100];
    char state[100];
} add;

int main()
{
    printf("House details of A: \n");
    add A;
    printf("Enter house no.: ");
    scanf("%d \n", &A.houseno);
    printf("Enter block: ");
    scanf("%c \n", &A.block);
    printf("Enter city: ");
    scanf("%s \n", A.city);
    printf("Enter state: ");
    scanf("%s \n", A.state);

    printf("House details of B: \n");
    add B;
    printf("Enter house no.: ");
    scanf("%d \n", &B.houseno);
    printf("Enter block: ");
    scanf("%c \n", &B.block);
    printf("Enter city: ");
    scanf("%s \n", B.city);
    printf("Enter state: ");
    scanf("%s \n", B.state);

    printf("House details of C: \n");
    add C;
    printf("Enter house no.: ");
    scanf("%d \n", &C.houseno);
    printf("Enter block: ");
    scanf("%c \n", &C.block);
    printf("Enter city: ");
    scanf("%s \n", C.city);
    printf("Enter state: ");
    scanf("%s \n", C.state);

    printf("House details of D: \n");
    add D;
    printf("Enter house no.: ");
    scanf("%d \n", &D.houseno);
    printf("Enter block: ");
    scanf("%c \n", &D.block);
    printf("Enter city: ");
    scanf("%s \n", D.city);
    printf("Enter state: ");
    scanf("%s \n", D.state);

    printf("House details of E: \n");
    add E;
    printf("Enter house no.: ");
    scanf("%d \n", &E.houseno);
    printf("Enter block: ");
    scanf("%c \n", &E.block);
    printf("Enter city: ");
    scanf("%s \n", E.city);
    printf("Enter state: ");
    scanf("%s \n", E.state);

    return 0;
}
// It can be more easy with loop //