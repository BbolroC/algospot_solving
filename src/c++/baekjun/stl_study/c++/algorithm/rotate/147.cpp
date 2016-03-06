#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> a = {0, 1, 2, 3, 4, 5};
	rotate(a.begin(), a.begin() + 2, a.end());
	for(int &x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	return 0;
}
