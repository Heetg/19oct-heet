//wap to check weather a triangle can be formed with given values of the angles or not
#include<stdio.h>
int main()

{
    int a,b,c;
    printf("enter the value of the side of a triangle : " );
    scanf("%d%d%d",&a,&b,&c);

    if (a+b<=c||b+c<=a||c+a<=b)
    {
        printf("this is triangle ");
    }
    else
    {
        printf("this is not a triangle");
    }



    return 0;
}
