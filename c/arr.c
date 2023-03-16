#include <stdio.h>

int main() {
	int a[6] = {1, 2, 3, 4, 5, 6};
	int counter = 0;
	while(counter < 6) {
		printf("%d", a[counter]);
		printf("\n");
		counter++;
	}
	return 0;
}
