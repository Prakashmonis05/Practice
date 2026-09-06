#include <stdio.h>

struct Salary
{
    float basic;
    float hra;
    float da;
    float total;
};

struct Employee
{
    char name[50];
    int id;
    struct Salary salary;
};

int main()
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter basic salary: ");
    scanf("%f", &e.salary.basic);

    printf("Enter HRA: ");
    scanf("%f", &e.salary.hra);

    printf("Enter DA: ");
    scanf("%f", &e.salary.da);

    e.salary.total = e.salary.basic +
                     e.salary.hra +
                     e.salary.da;

    printf("\n----- EMPLOYEE SALARY REPORT -----\n");
    printf("Name          : %s\n", e.name);
    printf("Employee ID   : %d\n", e.id);
    printf("Basic Salary  : %.2f\n", e.salary.basic);
    printf("HRA           : %.2f\n", e.salary.hra);
    printf("DA            : %.2f\n", e.salary.da);
    printf("Total Salary  : %.2f\n", e.salary.total);

    return 0;
}