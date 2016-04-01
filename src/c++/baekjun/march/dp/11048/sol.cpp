#include <cstdio>
using namespace std;

int a[1001][1001];
int d[1001][1001];
int n, m;

int go(int x, int y) {
	if (x > n || y > m) return 0;
	if (d[x][y] > 0) return d[x][y];
	d[x][y] = go(x + 1, y) + a[x][y];
	int temp = go(x, y + 1) + a[x][y];
	if (d[x][y] < temp) {
		d[x][y] = temp;
	}
	return d[x][y];
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	go(1, 1);
	printf("%d\n", d[1][1]); 
	return 0;
}
