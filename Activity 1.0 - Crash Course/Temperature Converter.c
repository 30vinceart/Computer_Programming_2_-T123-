#include <stdio.h>
int main()
{
    float originalTemp, convertedTemp;
    char selection, converted;
    printf("[f] - Fahrenheit \n[c] - Celsius \n[k] - Kelvin");
    printf("\n\nInput original temperature value: ");
    scanf("\n%f", &originalTemp);
    printf("Select original temperature scale: ");
    scanf("\n%c", &selection);
    printf("Select converted temperature scale: ");
    scanf("\n%c", &converted);
    if (selection == 'f' || selection == 'F')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = (originalTemp - 32) * 5 / 9;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = (originalTemp - 32) * 5 / 9 + 273.15;
        }
        else if (converted == 'f' || converted == 'F')
        {
            convertedTemp = originalTemp;
        }
        else
        {
            printf("%c is not valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'c' || selection == 'C')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = originalTemp;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = originalTemp + 273.15;
        }
        else if (converted == 'f' || converted == 'F')
        {
            convertedTemp = (originalTemp * 9 / 5) + 32;
        }
        else
        {
            printf("%c is not valid input!", converted);
            return -1; 
        }
    }
    else if (selection == 'k' || selection == 'K')
    {
        if (converted == 'c' || converted == 'C')
        {
            convertedTemp = originalTemp - 273.15;
        }
        else if (converted == 'k' || converted == 'K')
        {
            convertedTemp = originalTemp;
        }
        else if (converted == 'f' || converted == 'F')
        {
            convertedTemp = (originalTemp - 273.15) * 9 / 5 + 32;
        }
        else
        {
            printf("%c is not valid input!", converted);
            return -1; 
        }
    }
    else
    {
        printf("%c is not valid input!", converted);
        return -1; 
    }
    printf("\n\n%.2f %c = %.2f %c", originalTemp, selection, convertedTemp, converted);
    return 0;
}
