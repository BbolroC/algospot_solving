#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {1, 1, 2, 2, 2, 3, 1, 1, 1, 2, 2, 2, 2};

	auto last = unique(a.begin(), a.end());
	a.erase(last, a.end());
	for (int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
