#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

vector<pair<int, int>> a[20001];
int d[20001];
bool c[20001];
const int inf = 1000000000;

int main() {
	int v, e;
	scanf("%d %d", &v, &e);
	int start;
	scanf("%d", &start);
	for (int i = 0; i < e; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(make_pair(y, z));
	}
	for (int i = 1; i <= v; i++) {
		d[i] = inf;
		c[i] = false;
	}
	d[start] = 0;
	priority_queue<pair<int, int>> q;
	q.push(make_pair(0, start));
	for (int i = 0; i < v - 1; i++) {
		int x = -1;
		while (!q.empty()) {
			auto tmp = q.top();
			q.pop();
			if (c[tmp.second] == false) {
				x = tmp.second;
				break;
			}
		}
		if (x == -1) {
			break;
		}
		c[x] = true;
		for (int j = 0; j < a[x].size(); j++) {
			int y = a[x][j].first;
			if (d[y] > d[x] + a[x][j].second) {
				d[y] = d[x] + a[x][j].second;
				q.push(make_pair(-d[y], y));
			}
		}
	}
	for (int i = 1; i <= v; i++) {
		if (d[i] >= inf) {
			printf("INF\n");
		} else {
			printf("%d\n", d[i]);
		}
	}
	return 0;
}
