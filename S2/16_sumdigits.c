// Program to find the sum of digits of a number using recursion

#include <stdio.h>

int sumDigits(int);

void main()
{
    int num, sum;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
	sum = sumDigits(num);
    printf("Sum of all digits of %d = %d", num, sum);
}

int sumDigits(int n)
{
	if(n == 0) return 0;
	return (n%10 + sumDigits(n/10));
}
