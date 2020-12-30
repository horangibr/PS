#include <stdio.h>

long long arr[36];

int main() {
	
	arr[0] = 1;
	
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= (i - 1); j++) {
			arr[i] += arr[j] * arr[i - j - 1];
		}
	}

	printf("%lld", arr[n]);




	return 0;
}