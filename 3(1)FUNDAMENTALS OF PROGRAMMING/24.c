#include<stdio.h>
int main(int argc,char const *argv[])
{
    char employee1[10],employee2[10],employee3[10],employee4[10],employee5[10];
    int em,em2,em3,em4,em5,av,to;
    printf("enter employee name -");
    scanf("%s",&employee1);
    printf("enter employee salary -");
    scanf("%d",&employee1);
    printf("enter employee name -");
    scanf("%s",&employee2);
    printf("enter employee salary");
    scanf("%d",&employee2);
    printf("enter employee name-");
    scanf("%s",&employee3);
    printf("enter employee salary");
    scanf("%d",&employee3);
    printf("enter employee name-");
    scanf("%s",&employee4);
    printf("enter employee salary");
    scanf("%d",&employee4);
    printf("enter employee name-");
    scanf("%s",&employee5);
    printf("enter employee salary");
    scanf("%d",&employee5);
    to=employee1+employee2+employee3+employee4+employee5;
    av=to/5;
    printf("average salary=%d",av);
    printf("\n total salary=%d",to);
    return 0


}
