#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {5, 3, 2, 1, 4};
	for (int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';

	sort(a.begin(), a.end());

	for (int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
