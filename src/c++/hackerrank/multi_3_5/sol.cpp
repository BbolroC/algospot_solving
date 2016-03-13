#include <cstdio>
using namespace std;

long multipleThreeFive(long n) {
	long three_r = (n - 1) / 3;
	long five_r = (n - 1) / 5;
	long fifteen_r = (n - 1) / 15;

	long sum = 0;
	sum += three_r * (3 + three_r * 3) / 2;	
	sum += five_r * (5 + five_r * 5) / 2;	
	sum -= fifteen_r * (15 + fifteen_r * 15) / 2;	
	return sum;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long n;
		scanf("%ld", &n);
		printf("%ld\n", multipleThreeFive(n));
	}
	return 0;
}
