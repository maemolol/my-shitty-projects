#include <stdio.h>

int main() {
	unsigned int max = 1;
	unsigned int prev_max = 0;
	while(max > prev_max) {
		prev_max = max;
		max++;
	}
	printf("%lu %lu", prev_max, max);

	return 0;
}
