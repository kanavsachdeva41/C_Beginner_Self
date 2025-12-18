// Make a structure to store bank account details of a customer in abc bank. //
#include <stdio.h>

// Create a structure for ABC Bank account details
typedef struct bankaccount {
    int accountNumber;
    char name[50];
    float balance;
    char accountType[20];
} bankacc;   // 'bankacc' is the alias name

int main() {
    // Create a variable of structure type
    bankacc acc1 = {1001, "Rahul Sharma", 25000.50, "Savings"};

    // Display account details
    printf("---- ABC Bank Account Details ----\n");
    printf("Account Number : %d\n", acc1.accountNumber);
    printf("Name           : %s\n", acc1.name);
    printf("Balance        : %.2f\n", acc1.balance);
    printf("Account Type   : %s\n", acc1.accountType);

    return 0;
}