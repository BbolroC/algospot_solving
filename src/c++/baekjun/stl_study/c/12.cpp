#include <stdio.h>

int main() {
	char s[10];
	scanf("%[^\n]\n", s);
	printf("%s", s);
	return 0;
}
