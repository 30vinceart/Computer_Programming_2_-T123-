#include <stdio.h>
int main() {

  int array[10], a, b, sum = 0;

    printf("Enter the size of the Array: ");
    scanf("%d", &b);

   if (b <= 10 && b >= 5)
   {
        for(a = 0; a < b; ++a) 
        {
            printf("Enter Element %d: ", a + 1);
            scanf("%d", &array[a]);
            sum += array[a];
        }

            printf("Sum of all array elements = %d", sum);
   }
   else 
   {
            printf("\nArray size limit is 5 to 10 only.\nPlease try again.");
   }

  return 0;
}