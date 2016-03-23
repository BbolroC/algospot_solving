#include <cstdio>
#include <vector>
using namespace std;

struct Edge {
	int s;
	int e;
	int t;
	Edge() : s(0), e(0), t(0) {}
	Edge(int s, int e, int t) : s(s), e(e), t(t) {}
};

int d[501];
const int inf = 1000000000;

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m, w;
		scanf("%d %d %d", &n, &m, &w);
		vector<Edge> e(m + w);
		for (int i = 0; i < m + w; i++) {
			scanf("%d %d %d", &e[i].s, &e[i].e, &e[i].t);
			if (i >= m) {
				e[i].t *= -1;
			}
		}
		for (int i = 1; i <= n; i++) {
			d[i] = inf;
		}
		d[1] = 0;
		bool cycle = false;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < m + w; j++) {
				int from = e[j].s;
				int to = e[j].e;
				int time = e[j].t;
				if (d[from] != inf && d[to] > d[from] + time) {
					d[to] = d[from] + time;
					if (i == n) {
						cycle = true;
					}
				}
			}
		}
		if (!cycle) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	return 0;
}
