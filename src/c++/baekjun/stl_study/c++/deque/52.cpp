#include <iostream>
#include <deque>

using namespace std;

void print(deque<int> &d) {
	for (auto &i : d)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	deque<int> d;

	d.push_back(1); print(d);
	d.push_front(2); print(d);
	d.push_back(3); print(d);
	d.pop_back(); print(d);
	d.pop_front(); print(d);

	return 0;
}
