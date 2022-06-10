// Read a Natural Number and check whether the number is Armstrong or not
#include <stdio.h>
void main()
{
    int num, temp;
    int sum = 0;
    printf("Enter a number to check if its armstrong or not: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == num)
        printf("%d is an armstrong number.", num);
    else
        printf("%d is not an armstrong number.", num);
}
