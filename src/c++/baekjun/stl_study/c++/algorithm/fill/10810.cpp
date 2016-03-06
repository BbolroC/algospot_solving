#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
		v.push_back(0);
	while (m--) {
		int x, y, z;
		cin >> x >> y >> z;
		fill(v.begin() + x - 1, v.begin() + y, z);
	}
	for (auto &x : v) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
