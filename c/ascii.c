#include <stdio.h>

int main() {
	int c = 1;
	while(c < 256) {
		printf("%d %c\n", c, c);
		++c;
	}
	return 0;
}
