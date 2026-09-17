#include <stdio.h>

int main()
{
    int category, item;

    printf("Restaurant Menu\n");
    printf("1. Beverages\n");
    printf("2. Main Course\n");
    printf("3. Desserts\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("\nBeverages\n");
            printf("1. Tea  Rs. 100\n");
            printf("2. Coffee Rs. 150\n");
            printf("3. Juice  Rs. 200\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Tea  Rs. 100");
                    break;

                case 2:
                    printf("Coffee Rs. 150");
                    break;

                case 3:
                    printf("Juice  Rs. 200");
                    break;

                default:
                    printf("Invalid beverage choice.");
            }
            break;

        case 2:
            printf("\nMain Course\n");
            printf("1. Burger  Rs. 500\n");
            printf("2. Pizza  Rs. 800\n");
            printf("3. Biryani  Rs. 400\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Burger  Rs. 500");
                    break;

                case 2:
                    printf("Pizza Rs. 800");
                    break;

                case 3:
                    printf("Biryani  Rs. 400");
                    break;

                default:
                    printf("Invalid main course choice.");
            }
            break;

        case 3:
            printf("\nDesserts\n");
            printf("1. Ice Cream  Rs. 200\n");
            printf("2. Cake  Rs. 300\n");
            printf("3. Custard  Rs. 250\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch(item)
            {
                case 1:
                    printf("Ice Cream  Rs. 200");
                    break;

                case 2:
                    printf("Cake  Rs. 300");
                    break;

                case 3:
                    printf("Custard  Rs. 250");
                    break;

                default:
                    printf("Invalid dessert choice.");
            }
            break;

        default:
            printf("Invalid category.");
    }

}


