#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

struct Edge {
	int from;
	int to;
	int time;
	Edge(int from, int to, int time) : from(from), to(to), time(time) {}
};

vector<Edge> e;
int d[501];
const int inf = 1000000000;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}
	for (int i = 0; i < m; i++) {
		int from, to, time;
		scanf("%d %d %d", &from, &to, &time);
		e.push_back(Edge(from, to, time));
	}

	d[1] = 0;
	bool safe = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int from  = e[j].from;
			int to = e[j].to;
			int time = e[j].time;
			if (d[to] > d[from] + time) {
				if (i == n - 1) {
					safe = false;
				}
				d[to] = d[from] + time;
			}
		}	
	}
	if (!safe) {
		printf("-1\n");
		return 0;
	}
	for (int i = 2; i <= n; i++) {
		printf("%d\n", d[i] == inf ? -1 : d[i]);
	}
	return 0;
}
