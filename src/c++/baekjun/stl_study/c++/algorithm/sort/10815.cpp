#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	set<int> v;
	while (n--) {
		int x;
		scanf("%d", &x);
		v.insert(x);
	}
	scanf("%d", &m);
	while (m--) {
		int x;
		scanf("%d", &x);
		printf("%d ",  binary_search(v.begin(), v.end(), x));
	}
	printf("\n");
	return 0;
}
