#include <stdio.h>

int nanu[43];

int main() {


	int num;

	for (int i = 1; i <= 10; i++) {
		scanf_s("%d", &num);
		nanu[num % 42] = 1;
	}

	int remain = 0;
	for (int i = 0; i <= 42; i++) {
		if (nanu[i] == 1) {
			remain++;
		}


	}

	printf("%d", remain);

	return 0;
}