// Read a Natural Number and check whether the number is prime or not
#include <stdio.h>
void main()
{
    int n;
    int isPrime = 0;
    printf("Enter number to be checked = ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d is not prime number", n);
    }
    else
    {
        for (int i = 2; i < (n / 2); i++)
        {
            if (n % i == 0)
            {
                printf("%d is not prime number", n);
                isPrime = -1;
            }
        }

        if (isPrime == 0)
            printf("%d is a prime number", n);
    }
}
