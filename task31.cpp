#include <stdio.h>

int main()
{
    char department;
    int semester;

    printf("University Departments\n");
    printf("C - Computer Science\n");
    printf("E - Electrical Engineering\n");
    printf("B - Business\n");

    printf("Enter department: ");
    scanf(" %c", &department);

    switch(department)
    {
        case 'C':
            printf("Enter semester (1-3): ");
            scanf("%d", &semester);

            switch(semester)
            {
                case 1:
                    printf("Core Course: Programming Fundamentals");
                    break;

                case 2:
                    printf("Core Course: Object Oriented Programming");
                    break;

                case 3:
                    printf("Core Course: Data Structures");
                    break;

                default:
                    printf("Invalid semester.");
            }
            break;

        case 'E':
            printf("Enter semester (1-3): ");
            scanf("%d", &semester);

            switch(semester)
            {
                case 1:
                    printf("Core Course: Basic Electrical Engineering");
                    break;

                case 2:
                    printf("Core Course: Circuit Analysis");
                    break;

                case 3:
                    printf("Core Course: Digital Logic Design");
                    break;

                default:
                    printf("Invalid semester.");
            }
            break;

        case 'B':
            printf("Enter semester (1-3): ");
            scanf("%d", &semester);

            switch(semester)
            {
                case 1:
                    printf("Core Course: Introduction to Business");
                    break;

                case 2:
                    printf("Core Course: Principles of Accounting");
                    break;

                case 3:
                    printf("Core Course: Marketing Management");
                    break;

                default:
                    printf("Invalid semester.");
            }
            break;

        default:
            printf("Invalid department.");
    }

    return 0;
}


