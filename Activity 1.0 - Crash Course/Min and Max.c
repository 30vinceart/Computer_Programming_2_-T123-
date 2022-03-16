#include <stdio.h>

int main() 
{

	int i,max,min,N=10,x;

	max=0;
	min=1000000;
	for(i=1;i<=N;i++)
	{
		printf("[%d] Input number: ",i);
		scanf("%d",&x);
		while (x<0)
		{
		    printf("This is an invalid input. Try Again.");
			printf ("\n[%d] Input number: ", i);
		    scanf("%d", &x);
		}
	
	
	
		if(max < x)
			max = x;

		if(min > x)
			min = x;
	}
	printf("\nMin : %d",min);
	printf("\nMax : %d",max);
	return 0;
}