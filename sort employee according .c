#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char s[20];
    float salary;
};
struct employee emp[5];
void input();
void sortsalary();
int  main()
{
    input();
    sortsalary();
}
void sortsalary()
    {
        int i,j,temp=0;
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
            if(emp[i].salary>emp[j].salary)
            {
                temp=emp[i].salary;
                emp[i].salary=emp[j].salary;
                emp[j].salary=temp;
            }
        }
        }
        for(i=0;i<5;i++)

            printf("%f\n",emp[i].salary);
        }

    void input()
    {
        int i;
        for(i=0;i<5;i++)
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




