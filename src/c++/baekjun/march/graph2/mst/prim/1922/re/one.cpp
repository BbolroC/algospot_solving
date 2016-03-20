#include <cstdio>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

bool done[1001];
vector<pair<int, int>> net[1001];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int from, to, cost;
		scanf("%d %d %d", &from, &to, &cost);
		net[from].push_back(make_pair(to, cost));
		net[to].push_back(make_pair(from, cost));
	}
	priority_queue<pair<int, int>> q;
	done[1] = true;
	for (auto & i : net[1]) {
		q.push(make_pair(-i.second, i.first));
	}
	int ans = 0;
	for (int i = 1; i < n; i++) {
		pair<int, int> x;
		while(!q.empty()) {
			x = q.top();
			q.pop();
			if (!done[x.second]) {
				break;
			}
		}
		ans += -x.first;
		int next = x.second;
		done[next] = true;
		for (auto &j : net[next]) {
			q.push(make_pair(-j.second, j.first));
		}
	}
	printf("%d\n", ans);
	return 0;
}
