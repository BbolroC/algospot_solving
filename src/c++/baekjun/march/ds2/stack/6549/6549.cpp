#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int h[100000];
long long int area[100000];

long long int maxSquare(int n) {
	stack<int> st;
	for (int i = 0; i < n; i++) {
		if (i == 0) st.push(i);
		else {
			if (!st.empty()) {
				auto t = st.top();
				int j = 1;
				while (h[t] > h[i]) {
					int right = t;
					int k = 1;
					while (h[i - k] >= h[t]) idx++;
					int left = i - k;
					area[t] = h[t] * (right - left);
					st.pop();
				}
				st.push(i);
				}
			}	
		}
	}
	return 0LL;
}

int main() {
	int n;
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			scanf("%d", &h[i]);
		}
		printf("%lld\n", maxSquare(n));
	}
}
