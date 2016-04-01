#include <cstdio>
#include <algorithm>
using namespace std;

int a[1001][1001];
int d[1001][1001];
int n, m;

int go(int x, int y) {
	d[x][y] = a[x][y];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			d[i][j] = a[i][j] + max(d[i - 1][j], d[i][j - 1]);
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	go(1, 1);
	printf("%d\n", d[n][m]); 
	return 0;
}
