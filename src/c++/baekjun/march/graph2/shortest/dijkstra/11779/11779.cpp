#include <cstdio>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

struct Edge {
	int from;
	int to;
	int cost;
};
int d[1001];
int c[1001];
int p[1001];
const int inf = 1000000000;
int e[1001][1001];
int main() {
	int n;
	scanf("%d", &n);
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		e[x][y] = z;
	}
	int src, dst;
	scanf("%d %d", &src, &dst);
	priority_queue<pair<int, int>> q;
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
		p[i] = i;
	}
	d[src] = 0;
	c[src] = 1;
	q.push(make_pair(-d[src], src));
	while (!q.empty()) {
		auto tmp = q.top();
		q.pop();
		int idx = tmp.second;
		for (int j = 1; j <= n; j++) {
			if (e[idx][j] != 0) {
				if (d[idx] != inf && d[j] > d[idx] + e[idx][j]) {
					d[j] = d[idx] + e[idx][j];
					p[j] = idx;
					q.push(make_pair(-d[j], j));
				}
			}
		}
	}
	printf("%d\n", d[dst]);
	int cnt = 1;
	int cur = dst;
	stack<int> s;
	s.push(cur);
	while (p[cur] != cur) {
		cur = p[cur];
		s.push(cur);
		cnt++;
	}
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%d ", s.top());
		s.pop();
	}
	printf("\n");
	return 0;
}
