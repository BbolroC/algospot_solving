#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	set<string> one;
	while (n--) {
		string x;
		cin >> x;
		one.insert(x);
	}
	vector<string> ans;
	while (m--) {
		string x;
		cin >> x;
		if (one.count(x)) {
			ans.push_back(x);
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (auto &i : ans) {
		cout << i << '\n';
	}
	return 0;
}
