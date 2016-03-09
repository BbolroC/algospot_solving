#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	int l = min({x, y, z});
	if (l == x) {
		cout << min(y, z);
	} else if (l == y) {
		cout << min(x, z);
	} else {
		cout << min(x, y);
	}
	cout << '\n';
	return 0;
}
