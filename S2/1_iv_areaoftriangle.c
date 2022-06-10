#include <stdio.h>
void main()
{
    int b, h;
    float area;
    printf("Enter breadth and height-");
    scanf("%d%d", &b, &h);
    area = 0.5 * b * h;
    printf("The required area of the triangle is =%f", area);
}
