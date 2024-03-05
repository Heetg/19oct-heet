//Write a program in C to find the length of ...
#include<stdio.h>
int main(){
	char cha[50];
	int h, l=0;
	printf("Enter a string : ");
	scanf("%s", cha);
	for(h=0; cha[h]!=0; h++){
		l++;
	}
	printf("\n Length of String : %d", l);
	return 0;
}
