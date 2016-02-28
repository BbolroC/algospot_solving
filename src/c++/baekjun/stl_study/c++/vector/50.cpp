#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &a) {
	for (auto &i : a)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	vector<int> a = {1, 2, 3, 4, 5};
	print(a);

	a.erase(a.begin() + 2);
	print(a);

	a.erase(a.begin() + 1, a.begin() + 3);
	print(a);

	return 0;
}
