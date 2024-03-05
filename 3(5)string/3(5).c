#include<stdio.h>
int compareSTR(char cha1[], char cha2[]){
	int i=0;
	while(cha1[i] != 0 && cha2[i] != 0){
		if(cha1[i] != cha2[i]){
			return 0;
		}
		i++;
	}
	return (cha1[i] == 0 && cha2[i] == 0);
}
int main(){
	char j1[50], j2[50];
	printf("Enter a first string : ");
	scanf("%j",&j1);
	printf("Enter a second string : ");
	scanf("%j",&j2);
	if(compareSTR(j1, j2)){
		printf("strings are equal");
	}
	else{
		printf("strings are
          not equal");
	}
	return 0;
}
