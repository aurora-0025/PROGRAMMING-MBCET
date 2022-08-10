#include <stdio.h>
int arr1[30][30];
int arr2[30][30];
int m1, n1, m2, n2;
int i = 1;
void scan(int arr[][30], int m, int n)
{
    int a;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d x %d element : ", i + 1, j + 1);
            scanf("%d", &a);
            arr[i][j] = a;
        }
    }
}

void display(int arr[][30], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void addition(int add1[][30], int add2[][30], int m, int n)
{
    int sum[30][30];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = add1[i][j] + add2[i][j];
        }
    }
    display(sum, m1, n1);
}

void multiply(int arr1[][30], int arr2[][30], int m1, int n1, int m2, int n2)
{
    int mult[30][30];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n1; k++)
            {
                mult[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }
    display(mult, m1, n2);
}

void trn(int arr[][30], int m, int n)
{
    int tran[30][30];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tran[i][j] = arr[j][i];
        }
    }
    display(tran, m1, n1);
}

int main()
{
    int isRunning=1;
    int oprtion;
    do
    {
    printf("1.addition\n2.multiplication\n3.transpose\n4.exit\nEnter the choice:");
    scanf("%d", &oprtion);
    switch (oprtion)
    {
    case 1:
        printf("Enter the order of the first matrix :\n");
        scanf("%d%d", &m1, &n1);
        printf("Enter the order of the second matrix :\n");
        scanf("%d%d", &m2, &n2);
        if (m1 == m2 && n1 == n2)
        {
            printf("Enter matrix %d\n", i++);
            scan(arr1, m1, n1);
            printf("Enter matrix %d\n", i++);
            scan(arr2, m2, n2);
            addition(arr1, arr2, m1, n1);
            break;
        }
        else
        {
            printf("Invalid Order for the matrix\n");
            break;
        }
    case 2:

        printf("Enter the order of the first matrix :\n");
        scanf("%d%d", &m1, &n1);
        printf("Enter the order of the second matrix :\n");
        scanf("%d%d", &m2, &n2);
        if (n1 != m2)
        {
            printf("Invalid Order for the matrix\n");
            break;
        }
        else
        {
            printf("Enter matrix %d\n", i++);
            scan(arr1, m1, n1);
            printf("Enter matrix %d\n", i++);
            scan(arr2, m2, n2);
            multiply(arr1, arr2, m1, n1, m2, n2);
            break;
        }
    case 3:
        printf("Enter the order of the matrix :\n");
        scanf("%d%d", &m1, &n1);
        scan(arr1, m1, n1);
        trn(arr1, m1, n1);
        break;
    case 4:
        printf("Exiting Program");
        isRunning=0;
        break;
    default:
        printf("Invalid operation");
    }
    } while(isRunning);
    return 0;
}
