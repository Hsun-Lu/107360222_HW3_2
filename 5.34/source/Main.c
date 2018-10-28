#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	printf("請輸入一個整數與其次方：");
	scanf_s("%d %d", &a, &b);
	printf("%d的%d次方為", a, b);
	if (a > 1)
	{
		if (b > 0)
		{
			printf("%d", a);
			for (c = 1; c < b; c++)
				printf("*%d", a);
		}
		else if (b == 0)
			printf("1");
	}
	else if (a == 1)
		printf("1");
	printf("\n");
	system("pause");
	return 0;
}