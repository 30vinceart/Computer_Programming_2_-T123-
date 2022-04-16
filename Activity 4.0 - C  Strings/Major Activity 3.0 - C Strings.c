#include <stdio.h>
#include <string.h>
 
int main()
{
  	char sentence[100];
  	int Length, StartWord, EndWord;
 
  	printf("Enter any String :  ");
  	scanf("%[^\n]s", sentence);
  	
  	Length = strlen(sentence);
  	EndWord = Length - 1;
  	
  	printf("Reverse ordered words:\n"); 	   	
  	for(int a = Length - 1; a >= 0; a--)
	{
		if(sentence[a] == ' ' || a == 0)
		{
			if(a == 0)
			{
				StartWord = 0;
			}
			else
			{
				StartWord = a + 1;
			}
			for(int b = StartWord; b <= EndWord; b++)
			{
				printf("%c", sentence[b]);
			}
			EndWord = a - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}