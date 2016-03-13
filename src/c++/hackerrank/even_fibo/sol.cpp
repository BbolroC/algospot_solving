#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long evenFibonacci(int n) {
	// n is at least equal and more than 10
	unsigned long long one = 0;
	unsigned long long two = 2;
	unsigned long long even_sum = 0;
	while (two < n) {
		unsigned long long tmp = 4 * two + one;
		even_sum += two;
		one = two;
		two = tmp;	
	}
	return even_sum;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		unsigned long long n;
		scanf("%llu", &n);
		printf("%llu\n",  evenFibonacci(n));
	}
	return 0;
}
