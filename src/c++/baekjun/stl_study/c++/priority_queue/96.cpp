#include <iostream>
#include <queue>
using namespace std;

int main() {
	vector<int> a = {5, 2, 4, 1, 3};
	priority_queue<int> q2;
	for (int x : a) {
		q2.push(x);
	}
	while (!q2.empty()) {
		cout << -q2.top() << ' ';
		q2.pop();
	}
	cout << '\n';
	return 0;
}
