#include <stdio.h>

int main() {
	int l = 65;
	while(l < 91) {
		printf("%c%c\n", l, l+32);
		++l;
	}
	return 0;
}
