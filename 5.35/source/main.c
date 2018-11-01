#include<stdio.h>
#include<stdlib.h>
main(){
	long a;
	printf("input a integer:");
	scanf_s("%d", &a);
	long f[100];
	f[0] = 0;
	f[1] = 1;

	printf("f[1]=0\nf[2]=1\n");
	for (int i = 2; i < a; i++){
		f[i] = f[i - 1] + f[i - 2];
		printf("f[%d]=%d\n", i+1,f[i]);
	}
	system("pause");
}