// Read a string (ending with a $ symbol), store it in an array and count the number of vowels, consonants and spaces in it.

#include <stdio.h>
#include <string.h>

void main()
{
    int vowelCount, consonantCount, spaceCount;
    char str[50];
    vowelCount = consonantCount = spaceCount = 0;
    printf("Enter a string ending with $ :");
    scanf("%[^$]s", str);

    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowelCount = vowelCount + 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            consonantCount = consonantCount + 1;
        }
        else if (str[i] == ' ')
        {
            spaceCount = spaceCount + 1;
        }
    }

    printf("\nNumber of vowels :- %d\n", vowelCount);
    printf("Number of consonants :- %d\n", consonantCount);
    printf("Number of spaces :- %d\n", spaceCount);
}
