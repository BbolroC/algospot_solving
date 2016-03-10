#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	auto comp = [&x] (int y) {
		if (y < x) cout << y << ' ';
	};
	while (n--) {
		int i;
		cin >> i;
		comp(i);
	}
	cout << '\n';
	return 0;
}
