d#include<stdio.h>
int main()
{
    int pi=3.14,r,a;
    printf("enter radius");
    scanf("%d",&r);
    a=pi*r*r;
    printf("area of circle=%d\n",a);
    a=2*r;
    printf("Diameter of circle %d",a);
    return 0;
}
