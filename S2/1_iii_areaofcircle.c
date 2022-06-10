// Read the radius of a circle, calculate its area and display it
#include <stdio.h>
void main()
{
     int r;
     float area;
     printf("Input the required radius-");
     scanf("%d",&r);
     area=3.14*r*r;
    printf("The area of the circle= %f sq.units",area);
}
