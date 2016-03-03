#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	priority_queue<int, vector<int>, greater<int>> q;
	while (n--) {
		int x;
		scanf("%d", &x);
		if (x > 0) {
			q.push(x);
		} else if(x == 0) {
			if (q.empty())
				cout << 0 << '\n';
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
	}
	return 0;
}
