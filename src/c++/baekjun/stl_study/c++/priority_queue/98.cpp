#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> q;

	for (int x : {2, 1, 4, 3, 5}) {
		cout << "x = " << x << '\n';
		q.push(x);
		cout << "top = " << q.top() << '\n';
	}
	cout << "size = " << q.size() << '\n';
	cout << "empty = " << q.empty() << '\n';
	while (!q.empty()) {
		cout << "top = " << q.top() << '\n';
		q.pop();
	}
	cout << "size = " << q.size() << '\n';
	cout << "empty = " << q.empty() << '\n';
	return 0;
}
