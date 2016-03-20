#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	vector<vector<int>> conn(n + 1);
	vector<int> ind(n + 1);
	while (m--) {
		int x, y;
		scanf("%d %d", &x, &y);
		conn[x].push_back(y);
		ind[y]++;
	}
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			q.push(i);
		}
	}
	for (int i = 0; i < n; i++) {
		int x = q.top();
		q.pop();
		printf("%d ", x);
		for (int j = 0; j < conn[x].size(); j++) {
			int y = conn[x][j];
			ind[y]--;
			if (ind[y] == 0) {
				q.push(y);
			}
		}
	}
	printf("\n");
	return 0;
}
