// Display the grade of a student after reading his mark for a subject. (Use switch)
#include <stdio.h>
void main()
{
    int mark;
    printf("Enter the mark of a student between 0 and 100:");
    scanf("%d", &mark);
    switch (mark / 10)
    {
    case 10:
        printf("S Grade");
        break;
    case 9:
        printf("S Grade");
        break;
    case 8:
        printf("A Grade");
        break;
    case 7:
        printf("B Grade");
        break;
    case 6:
        printf("C Grade");
        break;
    case 5:
        printf("P Grade");
        break;
    default:
        printf("F Grade");
    }
}
