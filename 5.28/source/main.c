#include<stdio.h>
#include<stdlib.h>
main(){
	char c;
	printf("input a charater:");
	scanf_s("%c", &c);
	printf("returns to [ ");
	if (c >= 97 && c < 123){
		c = c - 32;
		printf("%c ]\n", c);
	}
	else if (c >= 64 && c < 91){
		c = c + 32;
		printf("%c ]\n", c);
	}
	else
		printf("ERROR");
	system("pause");
}
