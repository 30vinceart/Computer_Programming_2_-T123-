#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    int vowels, consonants;
    
    vowels=consonants=0;
    
    printf("Input a Sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (int i = 0; sentence[i] != '\0'; ++i)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||sentence[i] == 'o' || sentence[i] == 'u') 
        {
            sentence[i] = sentence[i] - 32;
            ++vowels;
        }
        else if ((sentence[i] >= 'a' && sentence[i] <= 'z')) 
        {
            ++consonants;
        }
    }
  
    printf("String Converted: ");    
    puts(sentence);
    printf("String Length: %zu\n", strlen(sentence));
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);
    return 0;
}