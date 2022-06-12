// Program to find the sum of digits of a number using recursion

#include <stdio.h>

void main()
{
    int num, sum;
    sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of all digits of %d = ", num);
    while(num > 0)
    {
        sum = sum + num%10;
        num = num/10;
    }
    printf("%d\n", sum);
}
