#include<stdio.h>
int main(int argc,char const *argv[])
{
    int ex1,ex2,ex3,ex4,ex5,to,av;
    printf("enter 5 expenses-");
    scanf("%d%d%d%d%d",&ex1,ex2,ex3,ex4,ex5);
    to=ex1+ex2+ex3+ex4+ex5;
    av=to/5;
    printf("expenses average=%d",av);
    return 0;
    }
