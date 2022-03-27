#include <stdio.h>
int main()
{
    int i = 1, PositiveInt, Total = 0, Count = 0, Mean;
   
    while (1)
    {
        printf("[%d] Enter Integer: ", i);
        scanf("%d", &PositiveInt);
        if (PositiveInt < 0)
        {
            continue;
        }
        else if (PositiveInt == 0)
        {
            break;
        }
        else
        {
            Count++;
            Total += PositiveInt;
            i++;
        }
    }
    Mean = Total / Count;
    printf("Average = %d.", Mean);
    return 0;
}
