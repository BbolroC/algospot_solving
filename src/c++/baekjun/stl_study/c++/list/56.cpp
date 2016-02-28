#include <iostream>
#include <list>

using namespace std;

void print(list<int> l) {
	for (auto &i : l)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	list<int> l = {2, 1, -5, 4, -3, 6, -7}; print(l);

	l.sort(); print(l);
	l.sort(greater<int>()); print(l);
	l.sort([](int &u, int &v) {
			return abs(u) < abs(v);
			});
	print(l);
	l.reverse(); print(l);
	return 0;
}
