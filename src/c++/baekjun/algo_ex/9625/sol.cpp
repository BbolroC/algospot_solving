#include <iostream>
#include <utility>
using namespace std;

int main() {
	int k;
	cin >> k;
	if (k == 1) {
		cout << "0 1" << '\n';
		return 0;
	}
	if (k == 2) {
		cout << "1 1" << '\n';
		return 0;
	}
	pair<int, int> oneP = make_pair(0, 1);
	pair<int, int> twoP = make_pair(1, 1);
	pair<int, int> tmpP;
	for (int i = 2; i < k; i++) {
		tmpP.first = twoP.first + oneP.first;
		tmpP.second= twoP.second + oneP.second;
		oneP = twoP;
		twoP = tmpP;
	}
	cout << twoP.first << ' ' << twoP.second << '\n';
	return 0;
}
