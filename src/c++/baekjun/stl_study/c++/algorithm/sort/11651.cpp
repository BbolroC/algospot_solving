#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void print(vector<pair<int, int>> v) {
	for (auto &x : v) {
		cout << x.first << ' ' << x.second << '\n';
	}
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	while (n--) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), [](pair<int, int> u, pair<int, int> v) {
			if (u.second < v.second) {
				return true;
			} else if (u.second == v.second) {
				return u.first < v.first;
			} else {
				return false;
			}
			});
	print(v);
	return 0;
}
