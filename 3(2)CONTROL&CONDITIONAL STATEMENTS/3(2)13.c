//wap to find minimum number among 3 numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any number : ");
    scanf("%d%d%d",&a,&b,&c);

    (a<b)?(printf("%d is less",a)):(b<c?(printf("%d is less",b)):(printf("%d is less",c)));

return 0;
}
