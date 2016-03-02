#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	string pad;
	cout << "<";
	while (!q.empty()) {
		for (int i = 1; i <= m; i++) {
			if (i == m) {
				cout << pad << q.front();
				pad = ", ";
				q.pop();
				break;
			}
			int x = q.front();
			q.pop();
			q.push(x);
		}
	}
	cout << ">\n";
	return 0;
}
