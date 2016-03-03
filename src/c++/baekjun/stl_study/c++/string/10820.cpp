#include <cstdio>
using namespace std;

int main() {
	int lower = 0, upper = 0, number = 0, space = 0;

	while(true) {
		char c = getchar();
		if ('a' <= c && 'z' >= c) {
			lower++;
		} else if ('A' <= c && 'Z' >= c) {
			upper++;
		} else if ('0' <= c && '9' >= c) {
			number++;
		} else if (c == ' ') {
			space++;
		} else if (c == '\n') {
			printf("%d %d %d %d\n", lower, upper, number, space);
			lower = upper = number = space = 0;
		} else {
			break;
		}
	}
	return 0;
}
