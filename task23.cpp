#include <stdio.h>
int main()
{
	
    int age, price;
    char day;
    

    printf("Enter customer's age: ");
    scanf("%d", &age);

    printf("Enter day (W for weekday, H for weekend/holiday): ");
    scanf(" %c", &day);

    if (age < 12 || age > 60)
    {
       
        if (day == 'W')
        {
            price = 1500;
        }
        else
        {
            price = 1800;
        }
    }
    else
    {

        if (day == 'W')
        {
            price = 2000;
        }
        else
        {
            price = 3000;
        }
    }

    printf("Final Ticket Price = Rs. %d\n", price);
}
