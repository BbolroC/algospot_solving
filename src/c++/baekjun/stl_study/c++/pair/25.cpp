#include <iostream>
#include <utility>

using namespace std;

int main() {
	pair<int, int> p1;
	cout << p1.first << ' ' << p1.second << '\n';

	p1 = make_pair(10, 20);
	cout << p1.first << ' ' << p1.second << '\n';

	p1 = pair<int, int>(30, 40);
	cout << p1.first << ' ' << p1.second << '\n';

	pair<int, int> p2(50, 60);
	cout << p2.first << ' ' << p2.second << '\n';

	return 0;
}
