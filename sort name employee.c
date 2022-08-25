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
void sortname();
int  main()
{
    input();
    sortname();
}
void sortname()
    {
        int i,j,r;
        char temp[20];
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
            r=strcmp(emp[i].s,emp[j].s);
            if(1==r)
            {
                strcpy(temp,emp[i].s);
                strcpy(emp[i].s,emp[j].s);
                strcpy(emp[j].s,temp);
            }
        }
        }
        for(i=0;i<5;i++)

            printf("%s\n",emp[i].s);
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





