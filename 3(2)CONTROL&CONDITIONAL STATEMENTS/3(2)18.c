//wap to calculate the profit or loss of the account
#include<stdio.h>
int main()
{
    int b,s;
    printf("enter the buying amount : ");
    scanf("%d",&b);

    printf("enter the selling amount : ");
    scanf("%d",&s);

    if (b<s)
    {
    printf("profit");

    }
    else
    {
    printf("loss");
    }

    return 0;
}
