#include<stdio.h>
int main(){
	int num, num1 = 0, num2 = 1, num3, i;
	printf("Enter the number of terms : ");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        if (i <= 1) {
            num3 = i;
        }
		else{
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        printf("%d ", num3);
    }
	return 0;
}
