#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {1, 1, 2, 2, 2, 3, 1, 1, 1, 2, 2, 2, 2};
	for (int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	auto last = unique(a.begin(), a.end());
	for (int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	for (auto it = a.begin(); it != last; ++it) {
		cout << *it << ' ';
	}
	cout << '\n';
}
