#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter first side of the triangle: ");
    scanf("%d", &a);
     printf("Enter Second side of the triangle: ");
    scanf("%d", &b);
     printf("Enter Third side of the triangle: ");
    scanf("%d", &c);

    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                
                if (a == b)
                {
                    if (b == c)
                    {
                        printf("Equilateral Triangle\n");
                    }
                    else
                    {
                        printf("Isosceles Triangle\n");
                    }
                }
                else
                {
                    if (a == c)
                    {
                        printf("Isosceles Triangle\n");
                    }
                    else
                    {
                        if (b == c)
                        {
                            printf("Isosceles Triangle\n");
                        }
                        else
                        {
                            printf("Scalene Triangle\n");
                        }
                    }
                }
            }
            else
            {
                printf("Not a valid triangle\n");
            }
        }
        else
        {
            printf("Not a valid triangle\n");
        }
    }
    else
    {
        printf("Not a valid triangle\n");
    }

    return 0;
}
