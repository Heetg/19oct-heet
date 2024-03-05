//Write a program in C to separate individual character..
#include<stdio.h>
int main(){
	char cha[50],h;
	printf("Enter a string :");
	scanf("%s",&cha);

	printf("Individual characters from a string : \n");
	for(h=0; cha[h]!=0; h++){
		printf("%c\n",cha[h]);
	}
	return 0;
}
