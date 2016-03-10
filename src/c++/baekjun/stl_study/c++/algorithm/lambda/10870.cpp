#include <iostream>
#include <functional>
using namespace std;

int main() {
	int n;
	cin >> n;
	function<int(int)> f = [&](int k) {
		if (k <= 1) return k;
		else return f(k - 1) + f(k - 2);
	};
	cout << f(n) << '\n';
	return 0;
}
