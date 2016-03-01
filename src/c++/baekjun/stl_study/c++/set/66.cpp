#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s = {5, 2, 4, 1, 3, 7, 6};

	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << *it << ' ';
	}
	cout << '\n';

	for (auto &x : s) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
