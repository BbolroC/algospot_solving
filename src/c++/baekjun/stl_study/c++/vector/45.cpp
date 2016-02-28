#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a = {1, 2, 3, 4, 5};

	for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it << ' ';
	}
	cout << '\n';

	for (auto it = a.begin(); it != a.end(); it++) {
		cout << "a[" << (it - a.begin()) << "] = " << *it << '\n';
	}
}
