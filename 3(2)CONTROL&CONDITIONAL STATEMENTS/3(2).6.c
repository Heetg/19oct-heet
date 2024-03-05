//wap to find the charcahter is vowel or not
#include<stdio.h>
int main()
{
    char b;
    printf("enter character :");
    scanf("%c",&b);

    if (b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
    {
        printf("character is vowel");

    }
    else{

        printf("character is not vowel");
    }

    return 0;
}
