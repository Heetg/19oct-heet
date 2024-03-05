#include<stdio.h>
int main(){
	int num, reverse, reminder;
  	printf("Enter number : ");
  	scanf("%d", &num);
  	while (num != 0) {
    	reminder = num % 10;
    	reverse = reverse * 10 + reminder;
    	num = num / 10;
  	}
  	printf("Reverse number = %d", reverse);
	return 0;
}
