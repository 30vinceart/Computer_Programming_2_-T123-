#include <stdio.h>
int main() {

  int array[11], a, b, sum = 0;

  printf("Enter the size of the Array: ");
  scanf("%d", &b);

  for(a=1; a <= b; ++a) 
  {
    printf("Enter Element %d: ", a);
    scanf("%d", &array[a]);
          
    sum += array[a];
  }

  printf("Sum of all array elements = %d", sum);

  return 0;
}
