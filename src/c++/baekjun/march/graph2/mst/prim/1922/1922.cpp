#include <cstdio>
#include <vector>
#include <queue>
#include <climits>
#include <set>
using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	vector<int> v(n + 1);
	vector<vector<pair<int, int>>> e(n + 1);
	set<int> done;
	while (m--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		e[x].push_back(make_pair(y, z));
		e[y].push_back(make_pair(x, z));
	}
	int cost = 0;
	done.insert(1);
	while (done.size() < n) {
		int min = INT_MAX;
		int mIdx = 0;
		for (auto it = done.begin(); it != done.end(); it++) {
			int x = *it;
			for (int j = 0; j < e[x].size(); j++) {
				int y = e[x][j].first;
				int c = e[x][j].second;
				if (done.count(y) == 0) {
					if (min > c) {
						min = c;
						mIdx = y;
					}
				}
			}
		}
		cost += min;
		done.insert(mIdx);
	}
	printf("%d\n", cost);
	return 0;
}
