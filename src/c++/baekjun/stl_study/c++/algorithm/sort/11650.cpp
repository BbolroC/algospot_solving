#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point {
	int x, y;
	bool operator < (const Point &v) const {
		if (x < v.x) {
			return true;
		} else if (x == v.x) {
			return y < v.y;
		} else {
			return false;
		}
	}
};

void print(vector<Point> &a) {
	for (auto &i : a)
		cout << i.x << ' ' << i.y << '\n';
}

int main() {
	int n;
	cin >> n;
	vector<Point> v;
	while (n--) {
		Point tmp;
		cin >> tmp.x >> tmp.y;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	print(v);
	return 0;
}
