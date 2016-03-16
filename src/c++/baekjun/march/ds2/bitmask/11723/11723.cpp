#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int m;
	char cmd[10];
	scanf("%d", &m);
	int s = 0;
	while (m--) {
		scanf("%s", cmd);
		if (strcmp(cmd, "add") == 0) {
			int n;
			scanf("%d", &n);
			s = s | (1 << (n - 1));
		} else if (strcmp(cmd, "remove") == 0) {
			int n;
			scanf("%d", &n);
			s = s & ~(1 << (n - 1));
		} else if (strcmp(cmd, "check") == 0) {
			int n;
			scanf("%d", &n);
			printf("%d\n", ((s & (1 << (n - 1))) != 0));
		} else if (strcmp(cmd, "toggle") == 0) {
			int n;
			scanf("%d", &n);
			s = s ^ (1 << (n - 1));
		} else if (strcmp(cmd, "all") == 0) {
			s = (1 << 20) - 1;
		} else if (strcmp(cmd, "empty") == 0) {
			s = 0;
		}
	}
	return 0;
}
