#include <stdio.h>
#
int main()
{
    char light, button;

    printf("Enter traffic light (R/Y/G): ");
    scanf(" %c", &light);

    switch(light)
    {
        case 'R':
            printf("Pedestrian button pressed? (Y/N): ");
            scanf(" %c", &button);

            switch(button)
            {
                case 'Y':
                    printf("Stop and let pedestrians cross.");
                    break;

                case 'N':
                    printf("Stop and wait.");
                    break;

                default:
                    printf("Invalid pedestrian button choice.");
            }
            break;

        case 'Y':
            printf("Slow down and get ready to stop.");
            break;

        case 'G':
            printf("Pedestrian button pressed? (Y/N): ");
            scanf(" %c", &button);

            switch(button)
            {
                case 'Y':
                    printf("Go but watch for pedestrians.");
                    break;

                case 'N':
                    printf("Go.");
                    break;

                default:
                    printf("Invalid pedestrian button choice.");
            }
            break;

        default:
            printf("Invalid traffic light color.");
    }
}
