#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<pair<int, int>> s;
	s.push(make_pair(1, 2));
	s.push({3, 4});
	s.emplace(5, 6);

	while (!s.empty()) {
		auto p = s.top();
		cout << p.first << ' ' << p.second << '\n';
		s.pop();
	}
	return 0;
}
