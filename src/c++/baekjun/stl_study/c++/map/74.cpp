#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> d1;
	map<int, int> d2 = { {1, 2}, {3, 4}, {5, 6} };

	cout << "d1.size() = " << d1.size() << '\n';
	cout << "d2.size() = " << d2.size() << '\n';

	d1[10] = 20;

	cout << "d1[10] = " << d1[10] << '\n';
	cout << "d2[1] = " << d2[1] << '\n';
	cout << "d2[2] = " << d2[2] << '\n';
	cout << "d2[3] = " << d2[3] << '\n';
	cout << "d2[4] = " << d2[4] << '\n';
	cout << "d2[5] = " << d2[5] << '\n';

	return 0;
}
