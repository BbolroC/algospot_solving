#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a = {1, 2, 3};

	cout << "front = " << a.front() << '\n';
	cout << "a[1] = " << a[1] << '\n';
	cout << "back = " << a.back() << '\n';

	a.push_back(4);

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	return 0;
}
