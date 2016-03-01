#include <iostream>
#include <set>
using namespace std;

void print(set<int> &s, set<int>::iterator it) {
	if (it == s.end()) {
		cout << "end\n";
	} else {
		cout << *it << '\n';
	}
}

int main() {
	set<int> s = {7, 5, 3, 1};
	for (auto &i : s)
		cout << i << ' ';
	cout << '\n';

	auto it = s.find(1);
	print(s, it);

	it = s.find(2);
	print(s, it);

	it = s.find(3);
	print(s, it);

	it = s.find(4);
	print(s, it);

	return 0;
}
