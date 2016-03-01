#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> d = { {1, 2}, {3, 4}, {5, 6} };

	for (auto it = d.begin(); it != d.end(); it++) {
		cout << (it->first) << ' ' << (it->second) << '\n';
	}

	for (auto p : d) {
		cout << p.first << ' ' << p.second << '\n';
	}
	return 0;
}
