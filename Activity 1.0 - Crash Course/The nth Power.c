#include <stdio.h>

int main()
{
    int i, base, exponent;
    int power = 1;

    printf("Enter X: ");
    scanf("%d", &base);
    printf("Enter Y: ");
    scanf("%d", &exponent);

    if (exponent >= 0)
    {
        for(i = 1; i <= exponent; i++)
        {
            power = power * base;
        }
    
        printf("%d^%d = %d.", base, exponent, power);
    }
    else if (exponent < 0)
    {
        for(i = 0; i > exponent; i--)
        {
            power = power * base;
        }
    
        printf("%d^%d = 1/%d.", base, exponent, power);
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}

