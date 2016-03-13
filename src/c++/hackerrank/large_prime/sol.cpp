#include <cstdio>
using namespace std;

long largestPrimeFactor(long n) {
	long newnumm = n;
	long largestFact = 0;

	int counter = 2;
	while (counter * counter <= newnumm) {
		if (newnumm % counter == 0) {
			newnumm = newnumm / counter;
			largestFact = counter;
		} else {
			counter++;
		}
	}
	if (newnumm > largestFact) {
		largestFact = newnumm;
	}
	return largestFact;
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
