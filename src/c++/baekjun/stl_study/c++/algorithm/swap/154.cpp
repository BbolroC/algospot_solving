#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {1, 2};
	vector<int> b = {3, 4};
	cout << a[0] << ' ' << b[0] << '\n';
	swap(a, b);
	cout << a[0] << ' ' << b[0] << '\n';
	swap(a, b);
	cout << a[0] << ' ' << b[0] << '\n';
	return 0;
}
