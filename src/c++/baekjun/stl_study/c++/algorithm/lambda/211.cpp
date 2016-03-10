#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int main() {
	cout << sum(1, 2) << '\n';
	cout << [](int x, int y) {
		return x + y;
	}(1, 2) << '\n';
	auto sum2 = [](int x, int y) {
		return x + y;
	};
	cout << sum2(1, 2) << '\n';
	return 0;
}
