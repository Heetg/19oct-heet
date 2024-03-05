//wap to chechk the result pass or fail
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    if (21<a)
    {
        printf("pass");

    }
    else
    {
        printf("fail");
    }

    return 0;
}
