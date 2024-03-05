#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=3, b=7
    a+=b;
    printf("sum=%d/nn",a);
    a-=b;
    printf("sub=%d/n",a);
    a*=b;
    printf("mul=%d/n",a);
    a/=b;
    printf("div=%d/n",a);
    a%=b;
    printf("modulo%d",a);

    return 0;
}

    