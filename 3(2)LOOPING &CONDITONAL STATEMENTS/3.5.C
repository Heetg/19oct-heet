//WAP to print factorial of given number
#include<stdio.h>
int main(){
	int num, i, fact=1;
	printf("Enter number : ");
	scanf("%d", &num);
	if (num < 0){
		printf("Enter only integer number");
	}
    else {
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factor = %d", fact);
    }
	return 0;
}
