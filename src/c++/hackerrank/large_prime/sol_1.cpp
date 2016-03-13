#include <cstdio>
#include <algorithm>
using namespace std;

long largestPrimeFactor(long n) {
	long i = 2;
	while (i * i <= n) {
		if (n % i == 0)
			n /= i;
		else
			i++;
	}
	return max(i, n);
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long n;
		scanf("%ld", &n);
		printf("%ld\n", largestPrimeFactor(n));
	}
	return 0;
}
