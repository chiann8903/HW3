#include<stdio.h>
#include<stdlib.h>
int lcm(int,int);
main(){
	int a, b;
	int ans;
	printf("input 2 integers :\n");
	scanf_s("%d%d", &a, &b);
	ans = lcm(a, b);
	printf("the LCM of %d & %d is %d\n", a,b,ans);
	system("pause");
}
int lcm(int x, int y){
	for (int i = 1; i <= x*y; i++){
		if (i%x == 0 && i%y == 0)
			return i;
	}
}