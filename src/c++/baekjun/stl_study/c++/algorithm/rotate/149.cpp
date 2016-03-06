#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> &v) {
	for(int &x : v)
		cout << x << ' ';
	cout << '\n';
}

int main() {
	vector<int> a = {0, 1, 2, 3, 4, 5};
	int n = a.size();
	for (int i = 0; i < n; i++) {
		rotate(a.begin(), a.begin() + 1, a.end());
		print(a);
	}
}
