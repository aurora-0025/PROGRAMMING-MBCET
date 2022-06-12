// Display first n prime numbers using Function.

#include <stdio.h>

int isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int num, primeCount;

    primeCount = 0;
    printf("Enter the n number of prime numbers you want to find, \n n = ");
    scanf("%d", &num);
    printf("The first %d prime are ", num);
    for (int i = 0; primeCount <= num; i++)
    {
        if (isPrime(i) == 1)
        {
            primeCount++;
            printf("%d ", i);
        }
    }
}
