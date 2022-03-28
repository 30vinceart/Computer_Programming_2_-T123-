#include <stdio.h>

int main()
{
    int Account[3][2] = {{1122,3344},{1234,5678},{1100,5555}};
    int IDnumber, PIN;
    
    
    printf("Enter ID Number: ");
    scanf("%d", &IDnumber);
    printf("Enter PIN: ");
    scanf("%d", &PIN);
    
    for(int j = 0; j<3 ; j++)
    {
        if (IDnumber == Account[j][0] && PIN == Account[j][1])
        {
             printf("\nYou have successfully logged in\nID#:%d",IDnumber);
             return 0;
        }
    }
   printf("\nInvalid ID/PIN!");
    return 0;
}
