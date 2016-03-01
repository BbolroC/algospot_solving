#include <cstdio>
#include <set>
using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		s.insert(x);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int x;
		scanf("%d", &x);
		printf("%d ", (int)s.count(x));
	}
	printf("\n");
	return 0;
}
