#include <iostream>
#include <utility>

using namespace std;

int main() {
	pair<pair<int, int>, pair<int, int>> p =
		make_pair(make_pair(10, 20), make_pair(30, 40));

	cout << p.first.first << ' ' << p.first.second << ' ';
	cout << p.second.first << ' ' << p.second.second << '\n';

	return 0;
}
