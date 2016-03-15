#include <iostream>
#include <map>
#include <string>
using namespace std;

string find(map<string, string> &m, string k) {
	if (m[k] == k) {
		return k;
	} else {
		return m[k] = find(m, m[k]);
	}
}

int count(map<string, string> &m, string k) {
	int cnt = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (k == find(m, it->first)) cnt++;
	}
	return cnt;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int f;
		scanf("%d", &f);
		map<string, string> m;
		int i = 0;
		while (f--) {
			string n1, n2;
			cin >> n1 >> n2;
			if (m.find(n1) == m.end())
				m[n1] = n1; 
			if (m.find(n2) == m.end())
				m[n2] = n2; 
			string x = find(m, n1);
			string y = find(m, n2);
			m[y] = x;
			cout << count(m, find(m, n1)) << '\n';
		}
	}
}
