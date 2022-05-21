#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE * fptr;
    int c, d, IDnumber, math, science, english, sum, average;
    char FileName [100];
    char name [100];
    char str [100];

        printf("How many students: ");
        scanf("%d", &d);
 
    for (int c = 0; c < d; c++)
    {
    
        sprintf(FileName, "Student%d", c + 1);
        fptr = fopen(FileName, "w");
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
        
        printf("\nFor Student %d", c + 1);
        
        printf("\nStudent Name: ");
        fgets(name, sizeof name, stdin);
       
        printf("Student ID Number: ");
        scanf("%d", &IDnumber);
        
        printf("Math Grade: ");
        scanf("%d", &math);
        
        printf("Science Grade: ");
        scanf("%d", &science);
        
        printf("English Grade: ");
        scanf("%d", &english);
        
        printf("Data written successfully!\n");
        
        sum = math + science + english;
        
        average = sum / 3;
        
        fprintf(fptr, "Student Name: %s \nStudent ID Number: %d \nMath Grade: %d \nScience Grade: %d \nEnglish Grade: %d \nTotal Grade: %d \nGrade Average: %d", name, IDnumber, math, science, english, sum, average);
    }
    
    fclose(fptr);
    
    return 0;
}



