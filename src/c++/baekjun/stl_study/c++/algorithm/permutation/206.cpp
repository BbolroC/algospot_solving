#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {3, 1, 2};
	sort(a.begin(), a.end());

	do {
		for (auto x : a) {
			cout << x << ' ';
		}
		cout << '\n';
	} while (next_permutation(a.begin(), a.end()));
	return 0;
}
