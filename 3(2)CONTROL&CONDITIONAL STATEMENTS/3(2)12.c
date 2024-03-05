//wap to find maximum number among 3numbers using ternary operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any number : ");
    scanf("%d%d%d",&a,&b,&c);

    (a>b)?(printf("%d is max",a)):(b>c?(printf("%d is max",b)):(printf("%d is max",c)));



  return 0;
}
