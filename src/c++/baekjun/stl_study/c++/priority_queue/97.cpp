#include <iostream>
#include <queue>
using namespace std;

int main() {
	vector<int> a = {5, 2, 4, 1, 3};
	priority_queue<int, vector<int>, greater<int>> q3;
	for (int x : a) {
		q3.push(x);
	}
	while (!q3.empty()) {
		cout << q3.top() << ' ';
		q3.pop();
	}
	cout << '\n';
	return 0;
}
