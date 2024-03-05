#include<stdio.h>
void countChar(char cha[], int a, int b, int schar){
        int i;
        for(i=0; cha[i] != 0; i++){
		if((cha[i] >= 'A' && cha[i] <= 'Z') || (cha[i] >= 'a' && cha[i] <= 'z')){
			a++;
		}
		else if(cha[i] >= '0' && cha[i] <= '9'){
			b++;
		}

		else{
			schar++;
		}
	}
	printf("\nalphabets : %d",a);
	printf("\ndigits : %d",b);
	printf("\nspecial characters : %d",schar);
}
int main(){
	char str[50];
	int a1=0, d1=0, schar1=0;
	printf("Enter a string : ");
	scanf("%s",&str);
	countChar(str, a1, d1, schar1);
	return 0;
}
