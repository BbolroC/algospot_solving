#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<string, int> d;
	while (n--) {
		string x;
		cin >> x;
		d[x] |= 1;
	}
	vector<string> ans;
	while (m--) {
		string x;
		cin >> x;
		d[x] |= 2;
		if (d[x] == 3) {
			ans.push_back(x);
		}
	}
	cout << ans.size() << '\n';
	for (auto &x : ans) {
		cout << x << '\n';
	}
	return 0;
}
