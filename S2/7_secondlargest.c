// Display second largest number after reading n numbers from user(without using an array)
#include <stdio.h>
void main()
{
    int limit, big, s, n;
    big = 0;
    printf("\n Enter number of numbers to be checked= ");
    scanf("%d", &limit);
    printf("Enter the numbers to be checked ");

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &n);
        if (n > big)
        {
            s = big;
            big = n;
        }
        if (n > s && n < big)
            s = n;
    }

    printf("The second largest number is = %d", s);
}
