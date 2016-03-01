#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> s;
	while (n--) {
		int d;
		cin >> d;
		s.insert(d);
	}
	for (auto &i : s)
		cout << i << ' ';
	cout << '\n';
	return 0;
}
