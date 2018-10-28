#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	unsigned long long int a = 0;
	while (1)
	{
		printf("%d,", F(a));
		a++;
	}

	system("pause");
}

int F(int b)
{
	if (b <= 2)
	{
		if (b == 0)
			return 0;
		else
			return 1;
	}

	return F(b - 1) + F(b - 2);
}