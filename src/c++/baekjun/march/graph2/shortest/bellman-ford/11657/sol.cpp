#include <cstdio>
#include <vector>
using namespace std;

struct Edge {
	int from;
	int to;
	int cost;
};
int d[501];
int inf = 1000000000;
int main() {
	int t;
	int n, m;
	scanf("%d %d", &n, &m);
	vector<Edge> a(m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &a[i].from, &a[i].to, &a[i].cost);
	}
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}
	d[1] = 0;
	bool ok = false;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			int x = a[j].from;
			int y = a[j].to;
			int z = a[j].cost;
			if (d[x] != inf && d[y] > d[x] + z) {
				d[y] = d[x] + z;
				if (i == n) ok = true;
			}
		}
	}
	if (ok) {
		printf("-1\n");
	} else {
		for (int i = 2; i <= n; i++) {
			if (d[i] == inf) d[i] = -1;
			printf("%d\n", d[i]);
		}
	}
	return 0;
}
