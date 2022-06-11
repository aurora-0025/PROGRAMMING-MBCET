// Read n integers, store them in an array and find their sum and average

#include <stdio.h>
void main()
{
    int n;
    printf("Enter no of integers to be accepted=");
    scanf("%d", &n);
    float sum = 0;
    float avg;
    // Array declaration
    int arr[n];
    printf("Enter the numbers ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf("Sum=%f Average=%f", sum, avg);
}
