// Read two numbers, add them and display their sum
#include <stdio.h>
void main()
{
    int num1, num2, sum;
    printf("Enter two numbers:");
    scanf("%d%d", num1, num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}
