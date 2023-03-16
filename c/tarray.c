#include <stdio.h>

int array[] = {1, 2, 3, 4, 5};
int b = 12;
int len = 5;

int main() {
	printf("%d", array[5]);
	array[5] = 0;
	printf("\n");
	printf("%d", b);

	return 0;
}
