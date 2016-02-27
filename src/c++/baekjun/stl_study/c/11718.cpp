#include <stdio.h>

int main() {
	char line[101];
	int res;
	for (int i = 0; (res = scanf("%[^\n]\n", line)) == 1 && i < 100; i++)
		printf("%d %s\n", res, line);
	return 0;
}
