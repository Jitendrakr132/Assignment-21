#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char s[20];
    float salary;
};
struct employee emp;
void input();
void display();
int  main()
{
    input();
    display();
}
void display()
    {
        printf(" \n %d-%s-%f",emp.id,emp.s,emp.salary);
    }
    void input()
    {
printf("Enter the employee id:");
scanf("%d",&emp.id);
printf("\nEnter the employee name :");
fflush(stdin);
gets(emp.s);
printf("\nEnter the employee salary:");
scanf("%f",&emp.salary);
}



