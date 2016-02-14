#include <iostream>

using namespace std;

int sum(int n) {
	int ret = 0;
	for (int i = 1; i <= n; ++i)
		ret += i;
	return ret;
}

int recursiveSum(int n) {
	if (n == 1) return 1;
	return n + recursiveSum(n - 1);
}

int main() {
	cout << "sum(5): " << sum(5) << endl;
	cout << "recursiveSum(5): " << recursiveSum(5) << endl;

	return 0;
}
