#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &a) {
	for (auto &i : a)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	vector<int> a = {1, 2, 3};
	print(a);

	auto it = a.begin();
	a.insert(it, 4); print(a);

	it = a.begin() + 1;
	a.insert(it, 5, 0); print(a);

	it = a.begin() + 2;
	vector<int> b = {10, 20};
	a.insert(it, b.begin(), b.end()); print(a);

	return 0;
}
