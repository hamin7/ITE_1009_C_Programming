#include <stdio.h>     //   전처리

int main() {

	for (int i = 2; i <= 9; i += 3) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d \t", i, j, i*j);
			printf("%d * %d = %d \t", i + 1, j, (i + 1)*j);
			printf("%d * %d = %d \n", i + 2, j, (i + 2)*j);
		}
		printf("\n");
	}

	return 0;
}
