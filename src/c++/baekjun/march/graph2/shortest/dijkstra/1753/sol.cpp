#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
struct Check {
	int vertex;
	int dist;
	Check(int vertex, int dist) : vertex(vertex), dist(dist) {}
	bool operator > (const Check &v) const {
		return dist > v.dist;
	}
};
vector<Edge> a[20001];
int d[20001];
bool c[20001];
int inf = 1000000000;
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int start;
	scanf("%d", &start);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(Edge(y, z));
	}
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}
	d[start] = 0;
	priority_queue<Check, vector<Check>, greater<Check>> q;
	q.push(Check(start, 0));
	for (int k = 0; k < n - 1; k++) {
		int x = -1;
		while (!q.empty()) {
			auto p = q.top();
			q.pop();
			if (c[p.vertex] == false) {
				x = p.vertex;
				break;
			}
		}
		if (x == -1) {
			break;
		}
		c[x] = true;
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i].to;
			if (d[y] > d[x] + a[x][i].cost) {
				d[y] = d[x] + a[x][i].cost;
				q.push(Check(y, d[y]));
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (d[i] >= inf) {
			printf("INF\n");
		} else {
			printf("%d\n", d[i]);
		}
	}
	return 0;
}
