#include <cstdio>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

void print(vector<int> a, int n) {
	for (int i = 1; i <= n; i++) {
		printf("%5d ", i);
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		printf("%5d ", a[i]);
	}
	printf("\n\n");
}

int main() {
	int n;
	scanf("%d", &n);
	vector<vector<int>> conn(n + 1);
	vector<int> ind(n + 1);
	vector<int> time(n + 1);
	vector<int> aggr(n + 1);
	for (int i = 1; i <= n; i++) {
		int jobs;
		scanf("%d %d", &time[i], &jobs);
		aggr[i] = time[i];
		for (int j = 0; j < jobs; j++) {
			int x;
			scanf("%d", &x);
			conn[x].push_back(i);
			ind[i]++;
		}
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (ind[i] == 0) {
			q.push(i);
		}
	}
	print(aggr, n);
	for (int i = 0; i < n; i++) {
		int curr = q.front();
		q.pop();
		for (int i = 0; i < conn[curr].size(); i++) {
			int next = conn[curr][i];
			ind[next]--;
			if (aggr[next] < aggr[curr] + time[next]) aggr[next] = aggr[curr] + time[next];
			print(aggr, n);
			if (ind[next] == 0) {
				q.push(next);
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < aggr[i]) {
			ans = aggr[i];
		}
	}
	printf("%d\n", ans);
	return 0;
}
