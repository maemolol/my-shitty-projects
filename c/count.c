#include <stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int num = 0;
	for (int i = 0; i < n + 1; i++)
	{
		printf("%d\n", num);
		++num;
	}
	return 0;
}
