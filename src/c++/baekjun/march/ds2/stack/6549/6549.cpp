#include <cstdio>
#include <stack>
using namespace std;

int h[100000];
long long maxSquare(int n) {
	stack<int> st;
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && h[st.top()] > h[i]) {
			long long height = h[st.top()];
			st.pop();
			long long width = i;
			if (!st.empty()) width = i - st.top() - 1;
			long long area = width * height;
			if (area > ans) ans = area;
		}
		st.push(i);
	}
	// At the end of the arrary
	while (!st.empty()) {
		long long height = h[st.top()];
		st.pop();
		long long width = n;
		if (!st.empty()) width = n - st.top() - 1;
	 	long long area = width * height;
		if (area > ans) ans = area;
	}
	return ans;
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
	return 0;
}
