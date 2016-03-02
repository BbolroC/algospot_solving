#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<pair<int, int>> q;
	q.push(make_pair(1, 2));
	q.push({3, 4});
	q.emplace(5, 6);

	while (!q.empty()) {
		auto p = q.front();
		cout << p.first << ' ' << p.second << '\n';
		q.pop();
	}
	return 0;
}
