#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	while (m--) {
		int x, y;
		cin >> x >> y;
		reverse(v.begin() + x - 1, v.begin() + y);
	}
	for (int x : v) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
