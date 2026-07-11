#include <stdio.h>

struct Bank {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank b;
    float deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &b.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    b.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if (withdraw <= b.balance)
        b.balance -= withdraw;
    else
        printf("Insufficient Balance!\n");

    printf("\n----- Account Details -----\n");
    printf("Account No : %d\n", b.accountNo);
    printf("Name       : %s\n", b.name);
    printf("Balance    : %.2f\n", b.balance);

    return 0;
}