#include <cstdio>
using namespace std;

int p[500000];
int find(int x) {
	if (p[x] == x) {
		return x;
	} else {
		return p[x] = find(p[x]);
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i <= n; i++) {
		p[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int c, a, b;
		scanf("%d %d %d", &c, &a, &b);
		if (c == 0) {	// attach b to a
			int x = find(a);
			int y = find(b);
			p[y] = x;
		} else {		// check if a and b belong to the same set
			if (find(a) == find(b))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
