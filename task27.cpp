#include <stdio.h>
#include <math.h>
int main()
{
    int mode;
    char choice;
    float a, b;

    printf("Enter Mode:\n");
    printf("1. Basic Arithmetic\n");
    printf("2. Power/Root Operations\n");
    printf("Enter mode: ");
    scanf("%d", &mode);

    switch(mode)
    {
        case 1:
            printf("Enter First number: ");
            scanf("%f", &a);
            printf("Enter Second number: ");
            scanf("%f", &b);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &choice);

            switch(choice)
            {
                case '+':
                    printf("Result = %.2f", a + b);
                    break;

                case '-':
                    printf("Result = %.2f", a - b);
                    break;

                case '*':
                    printf("Result = %.2f", a * b);
                    break;

                case '/':
                    if(b != 0)
                        printf("Result = %.2f", a / b);
                    else
                        printf("Cannot divide by zero.");
                    break;

                default:
                    printf("Invalid operator.");
            }
            break;

        case 2:
            printf("Enter operation (s for square, r for square root): ");
            scanf(" %c", &choice);

            printf("Enter a number: ");
            scanf("%f", &a);

            switch(choice)
            {
                case 's':
                    printf("Square = %.2f", a * a);
                    break;

                case 'r':
                    if(a >= 0)
                        printf("Square Root = %.2f", sqrt(a ));
                    else
                        printf("Invalid number for square root.");
                    break;

                default:
                    printf("Invalid operation.");
            }
            break;

        default:
            printf("Invalid mode.");
    }
}
