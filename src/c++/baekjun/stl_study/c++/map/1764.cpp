#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, m, res = 0;
	cin >> n >> m;

	map<string, int> d;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		d[name] += 1;
	}
	for (int i = 0; i < m; i++) {
		string name;
		cin >> name;
		d[name] += 1;
	}

	for (auto &i : d) {
		if (i.second == 2)
			res += 1;
	}
	
	cout << res << '\n';
	for (auto &i : d) {
		if (i.second == 2)
			cout << i.first << '\n';
	}
	return 0;
}
