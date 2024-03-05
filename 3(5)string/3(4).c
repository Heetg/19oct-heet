#include<stdio.h>
#include<string.h>
int main(){
	char h[50];
	int words = 0, i;
	printf("Enter a string : ");
	gets(h);
	for(i=0; h[i]; i++){
		if(h[i]==32){
			words++;
		}
	}
	if(i>0){
		words++;
	}
	printf("no of words in string : %d", words);
	return 0;
}
