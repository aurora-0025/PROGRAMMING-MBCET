// Input and print the sum of elements of an array using pointers

#include <stdio.h>
int main()
{
   int i, sum = 0, n = 0;
   int *ptr;
   printf("Enter the number of elements to add to array: ");
   scanf("%d", &n);
   printf("Enter the array elements: \n");
   int array[n];
   ptr=array;
   for (i = 0; i<n; i++)
   {
      printf("Enter element %d\n", i + 1);
     scanf("%d", ptr);
      sum = sum + *ptr;
      ptr++;
   }
   printf("Sum of inputted numbers = %d",sum);
}
