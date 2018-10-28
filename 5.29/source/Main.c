#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("叫块ㄢ俱计");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
		printf("程そ计%d\n", a);
	else if (b % a == 0)
		printf("程そ计%d\n", b);
	else
		printf("程そ计%d\n", a * b);
	system("pause");
	return 0;
}