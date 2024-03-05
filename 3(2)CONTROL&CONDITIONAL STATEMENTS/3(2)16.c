//wap to read the temperature in centigrade........
#include<stdio.h>
int main()
{


int a;
printf("enter the temperature");
scanf("&d",&a);
if (a<0)
{
    printf("freezing temperature");
}

else if (0<10)
{
    printf("very cold weather");

}
else if (10<20)
{
    printf("cold temperature");
}
else if (20<30)
{
    printf("normal temperature");

}
else if (30<40)
{
        printf("hot temperature");
}
else

{
    printf("very hot temperature");
}

return 0;
}
