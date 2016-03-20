#include <cstdio>
#include <queue>
#include <utility>
using namespace std;

int rel[10001];
struct Edge {
	int from;
	int to;
	int cost;
	Edge() : from(0), to(0), cost(0) {}
	Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}
	bool operator < (const Edge &v) const {
		return cost > v.cost;
	}
};

int find(int a) {
	if (rel[a] == a) {
		return a;
	}
	rel[a] = find(rel[a]);
	return rel[a];
}

void make_union(int a, int b) {
	int ra = find(a);
	int rb = find(b);
	rel[rb] = ra;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		rel[i] = i;
	}
	priority_queue<Edge> q;
	for (int i = 0; i < m; i++) {
		int from, to, cost;
		scanf("%d %d %d", &from, &to, &cost);
		q.push(Edge(from, to, cost));
	}
	int ans = 0;
	while (!q.empty()) {
		auto x = q.top();
		q.pop();
		if (find(x.from) != find(x.to)) {
			ans += x.cost;
			make_union(x.from, x.to);
		}
	}
	printf("%d\n", ans);
	return 0;
}
