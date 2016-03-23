#include <cstdio>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int d[1001];
int p[1001];
int e[1001][1001];
const int inf = 1000000000;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			e[i][j] = inf;
		}
	}
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
	q.push(make_pair(-d[src], src));
	for (int i = 1; i < n; i++) {
		auto tmp = q.top();
		q.pop();
		int idx = tmp.second;
		for (int j = 1; j <= n; j++) {
			if (d[j] > d[idx] + e[idx][j]) {
				d[j] = d[idx] + e[idx][j];
				p[j] = idx;
				q.push(make_pair(-d[j], j));
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
