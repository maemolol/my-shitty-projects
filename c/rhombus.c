#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n; i++) {
		printf("*" * i);
	} for(int i = n - 1; i > 0; i--) {
		printf("*" * i);
	} return 0;
}
