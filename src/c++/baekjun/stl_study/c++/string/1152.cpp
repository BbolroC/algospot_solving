#include <iostream>
using namespace std;

int main() {
	char s[1000001];
	int cnt = 0;
	while (scanf("%s", s) != EOF) {
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
