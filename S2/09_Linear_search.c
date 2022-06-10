//Read n integers, store them in an array and search for an element in the array using an algorithm for Linear Search

#include <stdio.h>

void main()
{
    int n,num,srch,val;
    val=0;
    printf("How many values do you want to add?");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the values:");
        scanf("%d",&num);
        arr[i]=num;
    }
    printf("Enter the value to be searched:");
    scanf("%d",&srch);
    for (int i=0;i<n;i++)
    {
        if (arr[i]==srch)
        {
            printf("%d is found at %d",srch,i+1);
            val=1;
            break;
        }
    }
    if (val!=1)
    {
        printf("Element not found");
    }
}
