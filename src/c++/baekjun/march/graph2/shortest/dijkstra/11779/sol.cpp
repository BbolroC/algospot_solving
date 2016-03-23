#include <cstdio>
#include <stack>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
vector<Edge> a[1001];
int d[1001];
bool c[1001];
int v[1001];
int inf = 1000000000;

int main() {
	int n;
	scanf("%d", &n);
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(Edge(y, z));
	}
	int start, end;
	scanf("%d %d", &start, &end);
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}
	d[start] = 0;
	v[start] = -1;
	priority_queue<pair<int, int>> q;
	q.push(make_pair(0, start));
	for (int k = 0; k < n - 1; k++) {
		auto tmp = q.top();
		q.pop();
		int x = tmp.second;
		c[x] = true;
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i].to;
			if (d[y] > d[x] + a[x][i].cost) {
				d[y] = d[x] + a[x][i].cost;
				v[y] = x;
				q.push(make_pair(-d[y], y));
			}
		}
	}
	printf("%d\n", d[end]);
	stack<int> st;
	int x = end;
	while (x != -1) {
		st.push(x);
		x = v[x];
	}
	printf("%d\n", (int)st.size());
	while(!st.empty()) {
		printf("%d ", st.top());
		st.pop();
	}
	printf("\n");
	return 0;
}
