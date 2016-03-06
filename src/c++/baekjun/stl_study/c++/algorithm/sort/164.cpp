#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &a) {
	for (auto &x : a)
		cout << x << ' ';
	cout << '\n';
}

bool cmp(int u, int v) {
	return u > v;
}

int main() {
	vector<int> a = {5, 3, 2, 1, 4};
	//sort(a.begin(), a.end(), greater<int>());
	sort(a.begin(), a.end(), cmp);
	/*sort(a.begin(), a.end(), [](int u, int v) {
			return u > v;
			});*/
	print(a);
	return 0;
}
