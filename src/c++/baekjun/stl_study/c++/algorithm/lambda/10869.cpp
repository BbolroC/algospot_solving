#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<function<int(int, int)>> v;
	v.push_back([](int x, int y) {
			return x + y;
			});
	v.push_back([](int x, int y) {
			return x - y;
			});
	v.push_back([](int x, int y) {
			return x * y;
			});
	v.push_back([](int x, int y) {
			return x / y;
			});
	v.push_back([](int x, int y) {
			return x % y;
			});
	for (auto &x : v) {
		cout << x(a, b) << '\n';
	}
	return 0;
}
