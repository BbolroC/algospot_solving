#include <cstdio>
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

char a[1000001];
bool erased[1000001];
char b[100];

int main() {
	scanf("%s", a);
	scanf("%s", b);
	int n = strlen(a);
	int m = strlen(b);
	if (m == 1) {
		for (int i = 0; i < n; i++) {
			if (a[i] == b[0]) {
				erased[i] = true;
			}
		}
	} else {
		stack<pair<int, int>> s;
		for (int i = 0; i < n; i++) {
			if (a[i] == b[0]) {
				s.push(make_pair(i, 0));
				cout << "(" << i << ", " << 0 << ") pushed" << '\n';
			} else {
				if (!s.empty()) {
					auto p = s.top();
					if (a[i] == b[p.second + 1]) {
						cout << "In\n";
						s.push(make_pair(i, p.second + 1));
						cout << "(" << i << ", " << p.second + 1 << ") pushed" << '\n';
						if (p.second + 1 == m - 1) {
							for (int k = 0; k < m; k++) {
								auto p = s.top();
								erased[p.first] = true;
								cout << "(" << p.first << ", " << p.second << ") poped" << '\n';
								s.pop();
							}
						}
					} else {
						while (!s.empty()) {
							auto p = s.top();
							cout << "(" << p.first << ", " << p.second << ") poped" << '\n';
							s.pop();
						}
					}
				}
			}
		}
	}
	bool printed = false;
	for (int i = 0; i < n; i++) {
		if (erased[i]) continue;
		printf("%c", a[i]);
		printed = true;
	}
	printf("\n");
	if (!printed) {
		printf("Frula\n");
	}
	return 0;
}
