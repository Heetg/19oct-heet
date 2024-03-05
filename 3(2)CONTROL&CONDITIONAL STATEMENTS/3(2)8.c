//wap to accept the height of a person in cm and categerize the person according to thier heioght
#include<stdio.h>
int main()
{
    int h;
    printf("enter the height in cm : ");
    scanf("%d",&h);

    if (h<=120)
    {
        printf("small");

    }
    else if(h>=120 && h<=150);
    {
        printf("medium");

    }
    else
    {
        printf("tall")
    }
    return 0;

}
