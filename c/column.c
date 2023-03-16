#include <stdio.h>

int main() {
	int n;
	printf("Please enter any number: ");
	scanf("%d", &n);
	int mul = 1;
	int i = 0;
	while(i < 99) {
		printf("%d x %d = %d\n", n, mul, n * mul);
		++mul;
		++i;
	}
	return 0;
}
