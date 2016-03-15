#include <cstdio>
#include <utility>
#include <stack>
using namespace std;

int people[500000];

long long getPeopleLookingAt(int n) {
	stack<pair<int, int>> s;
	long long ans = 0LL;
	for (int i = 0; i < n; i++) {
		pair<int, int> p = {people[i], 1};
		while (!s.empty()) {
			if(s.top().first <= p.first) {
				ans += (long long) s.top().second;
				if (s.top().first == p.first) {
					p.second += s.top().second;
				} 
				s.pop();
			} else {
				break;
			}
		}
		if (!s.empty()) ans += 1LL;
		s.push(p);
	}
	return ans;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &people[i]);
	}
	printf("%lld\n", getPeopleLookingAt(n));
	return 0;
}
