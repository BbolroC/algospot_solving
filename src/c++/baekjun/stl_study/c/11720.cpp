#include <cstdio>

int main() {
	int n, e, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%1d", &e);
		sum += e;
	}
	printf("%d\n", sum);
	return 0;
}

