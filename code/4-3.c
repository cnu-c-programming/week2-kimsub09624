#include <stdio.h>

int main() {
	int x = 0;
	scanf("%d", &x);
	
	int div = 2;

	while(div <= x/2) {
		int rem = x % div;
		if(rem == 0) {
			printf("false");
			return 0;
		} else {
			div++;
		}
	}
	
	printf("true");
	return 0;
}

