#include <stdio.h>
int addNumbers (int a, int b, int c, int d, int e); 
int average (int sum);

int main()
{
    int n1, n2, n3, n4, n5, sum, Average;

    printf("Enter students' grade: \n");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    sum = addNumbers (n1, n2, n3, n4, n5); 
    
    Average = average (sum);
    printf("average = %d", Average);
    return 0;
}

int addNumbers (int a, int b, int c, int d, int e)   
{
    int result;
    result =a+b+c+d+e;
    return result;               
}

int average (int sum)
{
    int ave;
    ave = sum / 5;
    return ave;
}
