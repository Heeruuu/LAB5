#include <stdio.h>
int main ()
{
	int units;
    char type;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    printf("Enter connection type (D for Domestic, C for Commercial): ");
    scanf(" %c", &type);

    if (type == 'D')
    {
    
        if (units <= 100)
        {
            bill = units * 10;
        }
        else
        {
            if (units <= 300)
            {
                bill = units * 15;
            }
            else
            {
                bill = units * 20;
            }
        }
    }
    else
    {
        if (type == 'C')
        {
            
            if (units <= 100)
            {
                bill = units * 15;
            }
            else
            {
                if (units <= 300)
                {
                    bill = units * 20;
                }
                else
                {
                    bill = units * 30;
                }
            }
        }
        else
        {
            printf("Invalid connection type!\n");
        
        }
    }

    printf("Total Electricity Bill = Rs. %.2f\n", bill);

}
