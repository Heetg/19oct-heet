#include<stdio.h>
int main(int argc,char const *argv[])
{


    int a,b;
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swape %d %d",a,b);
    return 0;
}
