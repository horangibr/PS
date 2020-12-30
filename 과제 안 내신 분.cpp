#include <stdio.h>

int student[31];

int main() {
	
	int i;
	int num;
	for (i = 0; i < 28; i++) {
		
		scanf("%d", &num);
		student[num] = 1;
	}

	for (i = 1; i <= 30; i++) {
		if (student[i] == 0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}