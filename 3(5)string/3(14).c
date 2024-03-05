#include<stdio.h>
    int main()
    {
	char fstr[30], sstr[30];
	int a, b;
	printf("First string : ");
	scanf("%s", fstr);
	printf("Second string : ");
	scanf("%s", sstr);
	for(a=0; fstr[a] != 0; a++){
	}
	for(b=0; sstr[b] != 0; b++){
		fstr[a] = sstr[b];
		a++;
	}
	fstr[a] = 0;
	printf("combine string : %s",fstr);
	return 0;
}
