//wap to chechk uppercase lowercase or special character
#include<stdio.h>
int main()
{
    char a;
    printf("enter character or digit or special character -");
    scanf("%c",&a);
    if (a>=65 && a<=90)
    {
        printf("uppercase");

    }
    else if (a>=97 && a<=122)
        {printf("lowercase");
        }
    else if (a>=48 && a<=58)
        {
            printf("digit");
        }
    else
    {
        printf("special character");
    }

    return 0;
}
