#include <cstdio>

int d[101][101];
const int inf = 1000000000;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)
				d[i][j] = 0;
			else 
				d[i][j] = inf;
		}
	}
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		d[x][y] = z;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (d[i][j] > d[i][k] + d[k][j]) {
					d[i][j] = d[i][k] + d[k][j];
				}					
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
