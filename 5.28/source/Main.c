#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("�п�J�@�ӭ^��r���G");
	scanf_s("%c", &a);
	if ((a >= 65) && (a <= 90))
		printf("%c\n", a + 32);
	else if ((a >= 97) && (a <= 122))
		printf("%c\n", a - 32);
	system("pause");
	return 0;
}