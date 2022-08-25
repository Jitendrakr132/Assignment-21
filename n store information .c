#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    int class;
};
struct student s[20];

void input(int );
void display(int );
int main()
{
    int n;
    printf("Enter the number n student ");
    scanf("%d",&n);
    input(n);
    display(n);
}
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n student id=%d | student name=%s | student class=%d\n",s[i].id,s[i].name,s[i],s[i].class);
    }
}
void input(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n Enter the student id no:");
        scanf("%d",&s[i].id);
        printf("\ nEnter the student name :");
        fflush(stdin);
        gets(s[i].name);
        printf("\n Enter the student class name:");
        scanf("%d",&s[i].class);
    }
}

