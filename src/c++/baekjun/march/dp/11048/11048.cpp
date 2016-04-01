#include <cstdio>
using namespace std;

int maze[1001][1001];
int dist[1001][1001];
int n, m;

int maxCandy(int x, int y) {
	if (x > n || y > m) return 0;
	if (dist[x][y] != 0) return dist[x][y];
	dist[x][y] = maze[x][y] + maxCandy(x + 1, y);
	if (dist[x][y] < maze[x][y] + maxCandy(x, y + 1)) {
		dist[x][y] = maze[x][y] + maxCandy(x, y + 1);
	}
	return dist[x][y];
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &maze[i][j]);
		}
	}
	maxCandy(1, 1);
	printf("%d\n", dist[1][1]); 
	return 0;
}
