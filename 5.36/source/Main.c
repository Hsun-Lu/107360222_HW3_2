#include <stdio.h>
#include <stdlib.h>

void h(int, char, char, char);

int t = 0;

int main(void)
{
	int n;

	printf("�п�J�e���𪺰��סG");
	scanf_s("%d", &n);

	h(n, 'A', 'B', 'C');

	printf("���� %d �h�e����@�ݲ��� %d ��\n", n, t);

	system("pause");
}

void h(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++t, n, A, C);
	}
	else
	{
		h(n - 1, A, C, B);
		printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++t, n, A, C);
		h(n - 1, B, A, C);
	}
}