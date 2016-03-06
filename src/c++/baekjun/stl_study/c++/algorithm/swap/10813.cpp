#include <iostream>
#include <vector>
#include <utility>
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
		swap(v[x - 1], v[y - 1]);
	}
	for (int &x : v)
		cout << x << ' ';
	cout << '\n';
	return 0;
}
