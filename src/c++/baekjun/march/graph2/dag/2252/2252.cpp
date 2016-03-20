#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> conn(n + 1);
	vector<int> ind(n + 1);
	queue<int> q;
	while (m--) {
		int x, y;
		cin >> x >> y;
		conn[x].push_back(y);
		ind[y]++;
	}
	int total = n;
	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			q.push(i);
		}
	}
	while (total > 0) {
		int cur = q.front();
		cout << cur << ' ';
		q.pop();
		total--;
		for (int i = 0; i < conn[cur].size(); i++) {
			int nex = conn[cur][i];
			ind[nex]--;
			if (ind[nex] == 0) {
				q.push(nex);
			}
		}
	}
	cout << '\n';
	return 0;
}
