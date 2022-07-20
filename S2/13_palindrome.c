// Read a string (word), store it in an array and check whether it is a palindrome word or not.

#include <stdio.h>
void main()
{
    char palin[100];
    printf("\nEnter a word to check if it is palindrome or not \n");
    scanf("%s", palin);
    int count = 0;
    int f = 0;
    for (int i = 0; i < 100; i++)
    {

        if (palin[i] == '\0')
            break;
        count++;
    }

    // char rev[100];

    for (int i = 0; i <= count/2; i++)
    {
        if (palin[i] != palin[count - 1 - i])
        {
            printf("%s is not a palindrome", palin);
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("%s is a palindrome ", palin);
}
