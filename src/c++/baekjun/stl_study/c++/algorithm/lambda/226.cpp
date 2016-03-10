#include <iostream>
#include <functional>
using namespace std;

int main() {
	int x = 10;
	int y = 20;

	auto f = [&x, y]() mutable {
		x += 10;
		y += 10;
	};

	cout << "x = " << x << ", y = " << y << '\n';
	f();
	cout << "x = " << x << ", y = " << y << '\n';
	f();
	cout << "x = " << x << ", y = " << y << '\n';
}
