#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    int chem_marks;
    int math_marks;
    int phy_marks;
};
struct student st[5];
void input();
void display();
int main()
{
    input();
    display();
}
void display()
{
    int i;
    float pect[20];
    printf("Roll no| Student name |chem_marks| maths_marks |phy_marks |percentage\n");
    for(i=0;i<5;i++)
    {
        pect[i]=((st[i].chem_marks+st[i].math_marks+st[i].phy_marks)*100)/300;

        printf("\t%d %2s %2d  %2d   %2d %2f\n ",st[i].roll_no,st[i].name,st[i].chem_marks,st[i].math_marks,st[i].phy_marks,pect[i]);

    }
}
void input()
{
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the student Roll no:");
    scanf("%d",&st[i].roll_no);
    printf("Enter the student Name:");
    fflush(stdin);
    gets(st[i].name);
    printf("Enter the chemistry marks:");
    scanf("%d",&st[i].chem_marks);
    printf("Enter the Math marks:");
    scanf("%d",&st[i].math_marks);
    printf("Enter the Physics marks:");
    scanf("%d",&st[i].phy_marks);
}
}
