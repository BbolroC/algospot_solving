#include <cstdio>
int a[1001][1001];
int d[1001];
bool c[1001];
int inf = 1000000000;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j] = inf;
		}
	}
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if (a[x][y] > z) {
			a[x][y] = z;
		}
	}
	int start, end;
	scanf("%d %d", &start, &end);
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}
	d[start] = 0;
	for (int k = 0; k < n - 1; k++) {
		int m = inf + 1;
		int x = -1;
		for (int i = 1; i <= n; i++) {
			if (c[i] == false && m > d[i]) {
				m = d[i];
				x = i;
			}
		}
		c[x] = true;
		for (int i = 1; i <= n; i++) {
			if (d[i] > d[x] + a[x][i]) {
				d[i] = d[x] + a[x][i];
			}
		}
	}
	printf("%d\n", d[end]);
	return 0;
}
