#include<stdio.h>
#include<stdlib.h>
long r(long, long);
main(){
	long a, b;
	long ans;
	printf("input the power of base and exponent (A^B) :\n");
	scanf_s("%ld%ld", &a, &b);
	ans = r(a, b);
	printf("power(%ld,%ld)=%ld=", a,b,ans);
	for (int i = 1; i <= b; i++){
		printf("%ld*", a);
	}
	printf("\b \n");
	system("pause");
}
long r(long x, long y){
	long z=1;
	for (int j = 1; j <= y; j++){
		z = z*x;
	}
	return z;
}