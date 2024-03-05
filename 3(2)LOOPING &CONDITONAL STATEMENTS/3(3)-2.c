//wap to accept 5 numbers from users and display all numbers
#include<stdio.h>
int main()
{
    int numbers[5];
    printf("Enter 5 numbers");
    for (int i=0;i<5; i++)
    {
        scanf("%d",&numbers[i]);

    }
    printf("Entered numbers are:\n");
    for (int i=0;i<5; i++)
    {
        printf
        ("%d\n",numbers[i]);
    }



    return 0;
}
