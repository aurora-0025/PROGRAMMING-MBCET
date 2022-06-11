// Display sum of diagonal elements of a matrix
#include <stdio.h>
void main()
{
    int ord;
    int sum = 0;
    printf("\nEnter the order of a matrix ");
    scanf("%d", &ord);
    int arr[ord][ord];
    printf("\nEnter the array elements");
    for (int i = 0; i < ord; i++)
    {
        for (int j = 0; j < ord; j++)
            scanf("%d", &arr[i][j]);
    }

    for (int i = 0; i < ord; i++)
    {

        sum = sum + arr[i][i];
    }

    printf("\nDiagonal Sum = %d", sum);
}
