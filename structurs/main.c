#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

typedef struct
{
    char name[SIZE];
    int ID;
} employee_t;

typedef struct
{
    char dep_name[SIZE];
    employee_t dep_employees[5];
    int dep_ID;
}depatment_t;

void scan_employees(employee_t *employees);

int main()
{
    employee_t employee, employee2 = {"Karl Roar",987};

    strcpy(employee.name, "Jon Jonsen");
    employee.ID = 123;

    printf("Name: %s \t ID: %d\n", employee.name, employee.ID);
    printf("Name: %s \t ID: %d\n", employee2.name, employee2.ID);

    employee_t employees[5];
    depatment_t department[3];
    int i;
    for(i=0; i<3; i++)
    {
        scan_employees(&department[i].dep_employees);
        printf("Name: %s \t ID: %d\n", department[i].dep_employees[i].name, department[i].dep_employees[i].ID);
    }

    strcpy(department[0].dep_name, "Sails");
    //department.dep_employee = employees;
    department[0].dep_ID = 12345;

    printf("Department: %s \t| ID: %d\n Employees:\nName: %s \t ID: %d",
            department[0].dep_name,
            department[0].dep_ID,
           department[0].dep_employees[0].name,
           department[0].dep_employees[0].ID);


    return 0;
}

void scan_employees(employee_t *employees)
{
    scanf(" %s%d", (*employees).name, &(*employees).ID);
}
