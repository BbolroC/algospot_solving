#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, int>> a;
	a.emplace_back(1, 2);
	a.push_back({3, 4});
	a.push_back(make_pair(5, 6));

	for (auto &x : a) {
		cout << x.first << ' ' << x.second << '\n';
	}

	for (auto it = a.begin(); it != a.end(); ++it) {
		cout << it->first << ' ' << it->second << '\n';
	}
	return 0;
}
