#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char s[20];
    float salary;
};
struct employee emp;
int  main()
{
printf("Enter the employee id:");
scanf("%d",&emp.id);
printf("\nEnter the employee name :");
fflush(stdin);
gets(emp.s);
printf("\nEnter the employee salary:");
scanf("%f",&emp.salary);
printf("\n --------------------\n");

printf("  %d-%s-%f",emp.id,emp.s,emp.salary);
}

