#include <stdio.h>

int main() {
	printf("%d",biggest(69, 420, 56));
	return 0;
}

int biggest(int a, int b, int c) {
	int res = 0;
	if (a > b) {
		res = a;
	} else {
		res = b;
	}
	if (res > c) {
		return res;
	} else {
		return c;
	}
}	
