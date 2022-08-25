#include<stdio.h>
#include<string.h>
struct time
{
    int hh;
    int mm;
    int ss;
};
struct time t1;
struct time t2;
struct time temp;
void input();
void diffe(struct time);
int main()
{
    input();
    diffe(temp);
}
 void diffe(struct time temp)
{
   temp.hh=t1.hh-t2.hh;
   temp.mm=t1.mm-t2.mm;
   temp.ss=t1.ss-t2.ss;
printf("%d :%d: %d",temp.hh,temp.mm,temp.ss);
}
void input()
{
    printf("\n Enter the hour");
    scanf("%d",&t1.hh);
    printf("\n Enter the minutes");
    scanf("%d",&t1.mm);
    printf("\n Enter the second");
    scanf("%d",&t1.ss);
    printf("\n Enter the hour");
    scanf("%d",&t2.hh);
    printf("\n Enter the minutes");
    scanf("%d",&t2.mm);
    printf("\nEnter the second ");
    scanf("%d",&t2.ss);
}
