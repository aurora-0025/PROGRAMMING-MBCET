// Read n integers, store them in an array and sort the elements in the array using Bubble Sort algorithm

#include <stdio.h>
void main()
{
    int n;
    printf("Enter no of integers to be accepted: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swapping the element
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Displaying the array
    for (int ind = 0; ind < n; ind++)
    {
        printf("%d", arr[ind]);
    }
    
}
