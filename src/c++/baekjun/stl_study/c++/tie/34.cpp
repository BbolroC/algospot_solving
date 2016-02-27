#include <iostream>
#include <tuple>

using namespace std;

int main() {
	auto t = make_tuple(1, 2, 3);
	int x, y;
	tie(x, y, ignore) = t;

	cout << x << ' ' << y << '\n';
	return 0;
}
