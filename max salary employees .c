#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char s[20];
    float salary;
};
struct employee emp[4];
void input();
void maxsalary();
int  main()
{
    input();
    maxsalary();
}
void maxsalary()
    {
        int i,max;
        max=emp[0].salary;
        for(i=0;i<10;i++)
        {
            if(max<emp[i].salary)
            {
                max=emp[i].salary;
            }
        }
            printf("\n max salary=%d",max);
        }

    void input()
    {
        int i;
        for(i=0;i<10;i++)
        {
printf("\nEnter the employee id:");
scanf("%d",&emp[i].id);
printf("\nEnter the employee name :");
fflush(stdin);
gets(emp[i].s);
printf("\nEnter the employee salary:");
scanf("%f",&emp[i].salary);
        }
}



