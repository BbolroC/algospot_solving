#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	vector<string> ans;
	set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));
	cout << ans.size() << '\n';
	for (auto & x : ans) {
		cout << x << '\n';
	}
	return 0;
}
