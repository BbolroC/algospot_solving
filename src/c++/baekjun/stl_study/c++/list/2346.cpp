#include <iostream>
#include <list>
#include <utility>

using namespace std;

int main() {
	int n;
	list<pair<int, int>> l;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		int tmp;
		cin >> tmp;
		l.push_back({i, tmp});
	}
	int index = 0;
	while (n--) {
		int margin = (int)l.size();
		auto ot = l.begin();
		auto nt = ot;
		advance(ot, index);
		int new_index = (index + (*ot).second + margin) % margin;
		advance(nt, new_index);
		cout << (*ot).first << ' ';
		if ((*ot).first < (*nt).first)
			new_index--;
		l.erase(ot);
		index = new_index;
	}
	cout << '\n';
	return 0;
}
