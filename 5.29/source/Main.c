#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("�п�J��Ӿ�ơG");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
		printf("�̤p�����Ƭ�%d\n", a);
	else if (b % a == 0)
		printf("�̤p�����Ƭ�%d\n", b);
	else
		printf("�̤p�����Ƭ�%d\n", a * b);
	system("pause");
	return 0;
}