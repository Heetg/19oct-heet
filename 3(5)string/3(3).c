#include<stdio.h>
#include<string.h>
int main(){
	char cha[50], h;
	printf("Enter a string : ");
	scanf("%s", &cha);
	printf("Invidual character from  string  reverse order : \n");
	for(h=strlen(cha) - 1; h>=0; h--){
		printf("%c\n",cha[h]);
	}
	return 0;
}
