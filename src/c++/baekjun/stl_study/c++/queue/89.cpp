#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;

	for (int i = 1; i <= 5; i++) {
		q.push(i);
	}

	for (int i = 0; i < 2; i++) {
		cout << q.front() << ' ' << q.back() << '\n';
		q.pop();
	}
	cout << "size = " << q.size() << '\n';
	cout << "empty = " << q.empty() << '\n';

	for (int i = 6; i <= 10; i++) {
		q.push(i);
		cout << "back = " << q.back() << '\n';
	} 
	while (!q.empty()) {
		cout << q.front() << ' ' << q.back() << '\n';
		q.pop();
	}
	cout << "size = " << q.size() << '\n';
	cout << "empty = " << q.empty() << '\n';
	return 0;
}
