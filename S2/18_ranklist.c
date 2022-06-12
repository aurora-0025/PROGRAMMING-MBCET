// Read the marks of three subjects for n students of a class and display their names in the order of rank. (Use array of structure)
#include <stdio.h>

struct student
{
    char name[20];
    float m1, m2, m3;
    float sum;
};

void initial(struct student st[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter details of Student No:%d\n", (i + 1));
        printf("\n Name = ");
        scanf("%s", &st[i].name);
        printf("\n Mark 1= ");
        scanf("%f", &st[i].m1);
        printf("\n Mark 2= ");
        scanf("%f", &st[i].m2);
        printf("\n Mark 3= ");
        scanf("%f", &st[i].m3);
        st[i].sum = st[i].m1 + st[i].m2 + st[i].m3;
    }
}

void sort(struct student st[], int n)
{
    struct student temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (st[j].sum < st[j + 1].sum)
            {
                temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int n;
    printf("\n Enter the total count of students\n");
    scanf("%d", &n);
    struct student st[n];
    initial(st, n);
    sort(st, n);
    printf("RANK LIST\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Rank = %d\n", (i + 1));
        printf("Name = %s\n", st[i].name);
        printf("Total Marks = %f\n\n", st[i].sum);
    }
}
