#include <stdio.h>
int
main ()
{

  int number[30];

  int i = 1, j, a, n = 10;

  for (i = 1; i <= n; ++i)
    {
      printf ("[%d] Input number: ", i);
      scanf ("%d", &number[i]);
      while ( number[i] < 0)
		{
		    printf("This is an invalid input. Try Again.");
			printf ("\n[%d] Input number: ", i);
		    scanf("%d", &number[i]);
		}
    }

  for (i = 1; i <= n; ++i)
    {
      for (j = i + 1; j <= n; ++j)
	{
	  if (number[i] < number[j])
	    {
	      a = number[i];
	      number[i] = number[j];
	      number[j] = a;
	    }
	}
    }
  printf ("\n\nSorted List: ");
  for (i = 1; i <= n; ++i)
    {
      if (number[i] >= 0)
      {
      printf ("%d, ", number[i]);
      }
    }
  return 0;
}