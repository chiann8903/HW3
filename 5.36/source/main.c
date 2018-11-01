#include<stdio.h>
#include<stdlib.h>
void qwer(int, int, int, int);

int main(void)
{
	int i;
	printf("How many?");
	scanf_s("%d", &i);
	qwer(i, 1, 2, 3);
	system("pause");
	return 0;
}

void qwer(int i, int begin, int mid, int dest)
{
	if (i == 1)
		printf("the %d plate frome %d's tower to %d's tower\n", i, begin, dest);
	else
	{
		qwer(i - 1, begin, dest, mid);
		printf("put the %d plate from %'s tower from %d's tower\n\n",
			i, begin, dest);
		qwer(i - 1, mid, begin, dest);
	}
}