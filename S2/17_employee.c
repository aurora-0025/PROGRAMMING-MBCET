// Using structure, read and print data of n employees (Name, Employee Id andSalary)

#include <stdio.h>

struct employee
{
    char name[20];
    int employeeId;
    int salary;
};

void main()
{
    int empNum;
    printf("Enter the number of employees: ");
    scanf("%d", &empNum);
    struct employee emp[empNum];

    // Reading Employee Data
    for (int i = 0; i < empNum; i++)
        {
            printf("\nEnter details of employee No %d :\n", (i + 1));
            printf("Name = ");
            scanf("%s", &emp[i].name);
            printf("Employee Id = ");
            scanf("%d", &emp[i].employeeId);
            printf("Salary = ");
            scanf("%d", &emp[i].salary);
        }
    // Displaying 
    printf("\nEMPLOYEE DETAILS\n");
    for (int i = 0; i < empNum; i++)
        {
            printf("Employee %d :\n", (i + 1));
            printf("\nName = %s", emp[i].name);
            printf("\nEmployee Id = %d", emp[i].employeeId);
            printf("\nSalary = %d \n\n", emp[i].salary);
        }
}
