#include <stdio.h>
int main(){
    int X, Y, Z, W, largest;

    printf("Enter first numbers: ");
    scanf("%d", &X);
     printf("Enter Second numbers: ");
    scanf("%d", &Y);
     printf("Enter Third numbers: ");
    scanf("%d", &Z);
     printf("Enter fourth numbers: ");
    scanf("%d", &W);

    if (X > Y)
    {
        if (X > Z)
        {
            if (X > W)
            {
                largest = X;
            }
            else
            {
                largest = W;
            }
        }
        else
        {
            if (Z > W)
            {
                largest = Z;
            }
            else
            {
                largest = W;
            }
        }
    }
    else
    {
        if (Y > Z)
        {
            if (Y > W)
            {
                largest = Y;
            }
            else
            {
                largest = W;
            }
        }
        else
        {
            if (Z > W)
            {
                largest = Z;
            }
            else
            {
                largest = W;
            }
        }
    }

    printf("The largest number is: %d\n", largest);
}
