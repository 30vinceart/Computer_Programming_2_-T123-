#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE * fptr;
    int a, b;
    char Word [100];
    char FileLocation [50];

    printf("Input the file location: ");
    scanf("%s", FileLocation);
    fptr = fopen(FileLocation, "w");
    
    printf("Input how many lines to be appended: ");
    scanf("%d", & b);
    
    for (a = 0; a < b + 1; a++) 
    {
        fgets(Word, sizeof Word, stdin);
        fputs(Word, fptr);
    }
    return 0;
}