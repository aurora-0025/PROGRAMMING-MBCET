// Read a Natural Number and check whether the number is Armstrong or not
#include <stdio.h>
#include <math.h>
void main()
{
    int num, temp,temp1;
    int sum = 0;
    int d=0;
    printf("Enter a number to check if its armstrong or not: ");
    scanf("%d", &num);
    temp=num;
    temp1=num;
    
    while(temp>0)
    {
       d++;
       temp=temp/10;
    }
    
    while (temp1 > 0)
    {
        sum = sum + pow(temp1%10,d);
        temp1 = temp1 / 10;
    }
    if (sum == num)
        printf("%d is an armstrong number.", num);
    else
        printf("%d is not an armstrong number.", num);
}
