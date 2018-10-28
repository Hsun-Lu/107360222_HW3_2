#include <stdio.h>
#include <stdlib.h>

void h(int, char, char, char);

int t = 0;

int main(void)
{
	int n;

	printf("請輸入河內塔的高度：");
	scanf_s("%d", &n);

	h(n, 'A', 'B', 'C');

	printf("移動 %d 層河內塔共需移動 %d 次\n", n, t);

	system("pause");
}

void h(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++t, n, A, C);
	}
	else
	{
		h(n - 1, A, C, B);
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++t, n, A, C);
		h(n - 1, B, A, C);
	}
}