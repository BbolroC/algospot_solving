#include <iostream>
#include <stack>
#include <vector>
using namespace std;

long long int maxSquare(vector<long long int>  &v) {

	return 0LL;
}

int main() {
	int n;
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		vector<long long int> v(n);
		for (int i = 0; i < n; i++) {
			scanf("%lld", &v[i]);
		}
		printf("%lld\n", maxSquare(v));
		v.clear();
	}
}
