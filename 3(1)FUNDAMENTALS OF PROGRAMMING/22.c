#include<stdio.h>
int main(int argc,char const*argv[])
{
    int p,r,t,a;
    printf("enter amount");
    scanf("%d",&p);
    printf("enter intrest rate");
    scanf("%d",&r);
    printf("enter time in a year");
    scanf("%d",&t);
    a=p*(1+r/100)*t;
    printf("%d",a);
    return 0;
}
