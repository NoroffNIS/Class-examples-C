#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct{
    char name[SIZE];
    int ID;
}employee_t;

typedef struct{
    char dep_name[SIZE];
    int dep_ID;
    employee_t employee_list[5];
}depmartment_t;

void scan_employee(employee_t *employee);


int main()
{
        employee_t employee, employee2;
        strcpy(employee.name, "Jon Jonsen");
        employee.ID = 123;

        strcpy(employee2.name, "Kai Hansen");
        employee2.ID = 456;

        employee_t employee3 = {"Kari Larsen", 789};

        printf("Name: %s |ID: %d\n", employee.name, employee.ID);
        printf("Name: %s |ID: %d\n", employee2.name, employee2.ID);
        printf("Name: %s |ID: %d\n", employee3.name, employee3.ID);

        employee_t employee_list[3];

        depmartment_t department_list[3];
        strcpy(department_list[0].dep_name , "Administration");
        strcpy(department_list[1].dep_name , "Teachers");
        strcpy(department_list[2].dep_name , "Students");

        department_list[0].employee_list[0] = employee;
        department_list[0].employee_list[1] = employee2;
        department_list[0].employee_list[2] = employee3;


        int j, i;
        for(j=1;j<3;j++){
            department_list[0].dep_ID = j;
            department_list[j].dep_ID = j*2;
            printf("Department %s\n", department_list[j].dep_name);
            for(i=0;i<2;i++){
                scan_employee(&department_list[j].employee_list[i]);
            }
        }
    for(j=0;j<3;j++){
        printf("Department %s | ID: %d\n", department_list[j].dep_name, department_list[j].dep_ID);
        for(i=0;i<2;i++){
            printf("Name: %s | ID: %d\n", department_list[j].employee_list[i].name, department_list[j].employee_list[i].ID);
        }
    }
    return 0;
}

void scan_employee(employee_t *employee){
    printf("NAME>");
    scanf(" %[^\n]s",(*employee).name);
    printf("ID>");
    scanf(" %d",&(*employee).ID);

}

/*#include <stdio.h>
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
} depatment_t;

void scan_employees(employee_t *employees);

int main()
{
    employee_t employee, employee2 = {"Karl Roar",987};

    strcpy(employee.name, "Jon Jonsen");
    employee.ID = 123;

    printf("Name: %s \t ID: %d\n", employee.name, employee.ID);
    printf("Name: %s \t ID: %d\n", employee2.name, employee2.ID);


    depatment_t department[5];

    department[0].dep_employees[0]=employee;
    department[0].dep_employees[1]=employee;

    strcpy(department[0].dep_name, "Administration");
    strcpy(department[1].dep_name, "Staff");
    strcpy(department[2].dep_name, "Teachers");
    strcpy(department[3].dep_name, "Students");




    int i, j;
    for(i=0; i<4; i++)
    {

        department[i].dep_ID = i;
        printf("Department %s\n", department[i].dep_name);
        for(j=0; j<2; ++j)
        {
            printf("%d Next employee:\n",j);
            scan_employees(&department[i].dep_employees[j]);

        }
    }

    for(i=0; i<4; i++)
    {
        printf("Department: %s \t| ID: %d\nEmployees:\n",
               department[i].dep_name,
               department[i].dep_ID);

        for(j=0; j<2; j++)
        {
            printf("Name: %-10s | ID: %d\n",
                   department[i].dep_employees[j].name,
                   department[i].dep_employees[j].ID);
        }
    }
    return 0;
}

void scan_employees(employee_t *employees)
{
    printf("NAME>");
    scanf(" %[^\n]s", employees->name);
    printf("ID>");
    scanf(" %d", &employees->ID);
}
*/
