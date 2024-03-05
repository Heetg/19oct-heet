#include<stdio.h>
#include<string.h>
    int main(){
        char cha1[50], cha2[50];
        printf("Enter a string : ");
        scanf("%s",&cha1);
        strcpy(cha2,cha1);
        printf("copy string : %s",cha2);
        return 0;
}
