#include <stdio.h>

int main()
{
    int account, transaction;

    printf("ATM MENU\n");
    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("Enter account type: ");
    scanf("%d", &account);

    switch(account)
    {
        case 1:
            printf("\nSavings Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch(transaction)
            {
                case 1:
                    printf("Deposit performed for Savings Account.");
                    break;

                case 2:
                    printf("Withdrawal performed from Savings Account.");
                    break;

                case 3:
                    printf("Balance checked for Savings Account.");
                    break;

                default:
                    printf("Invalid transaction.");
            }
            break;

        case 2:
            printf("\nCurrent Account\n");
            printf("1. Deposit\n");
            printf("2. Withdraw\n");
            printf("3. Check Balance\n");
            printf("Enter transaction: ");
            scanf("%d", &transaction);

            switch(transaction)
            {
                case 1:
                    printf("Deposit performed for Current Account.");
                    break;

                case 2:
                    printf("Withdrawal performed from Current Account.");
                    break;

                case 3:
                    printf("Balance checked for Current Account.");
                    break;

                default:
                    printf("Invalid transaction.");
            }
            break;

        default:
            printf("Invalid account type.");
    }


}
