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
	for (int i = 0, j = 0; i < a.size() && j < b.size();) {
		if (a[i] < b[j]) {
			i++;
		} else if (a[i] > b[j]) {
			j++;
		} else {
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
	cout << ans.size() << '\n';
	for (auto &x : ans) {
		cout << x << '\n';
	}
	return 0;
}
