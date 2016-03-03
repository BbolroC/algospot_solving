#include <iostream>
#include <queue>
using namespace std;

int main() {
	vector<int> a = {5, 2, 4, 1, 3};
	priority_queue<int> q1;

	for (int x : a) {
		q1.push(x);
	}
	while (!q1.empty()) {
		cout << q1.top() << ' ';
		q1.pop();
	}
	cout << '\n';
	return 0;
}
