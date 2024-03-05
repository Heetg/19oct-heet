//WAP TO FIND GROSS SALARY
#include<stdio.h>
int main()
{
    int basicSALARY;
    printf("Enter the basic salary");
    scanf("%d",&basicSALARY);
    if(basicSALARY=10000)
    {
        basicSALARY=basicSALARY+.20+.80;
        printf("salary=%d",basicSALARY);

    }
    else if(basicSALARY<=20000)
    {
        basicSALARY=basicSALARY+.25+.90;
        printf("salary=%d",basicSALARY);

    }
    else{basicSALARY=basicSALARY+.35+.95;
    printf("salary=%d",basicSALARY);
    }





    return 0;
}




