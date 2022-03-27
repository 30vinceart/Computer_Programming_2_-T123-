#include <stdio.h>
int main()
{
    int p;
    printf("Enter Integer: ");
    scanf("%d", &p);
    if (p > 0)
    {
        for (int a = 1; a < p + 1; a++)
        {
        for (int b = 1; b <= a; b++)
        {
        if (b == 1)
        {
        for (int c = 0; c < p - a; c++)
        {
        printf(" ");
        }
        }
        printf("* ");
        }
        printf("\n");
        }
    }
    else
    {
        printf("Invalid input!");
    }
    return 0;
}