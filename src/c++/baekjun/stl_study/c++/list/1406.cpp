#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> l;
	while (true) {
		char c = getchar();
		if (c == '\n')
			break;
		l.push_back(c);
	}

	int n;
	cin >> n;
	auto cursor = l.end();
	for (int i = 0; i < n; i++) {
		char cmd;
		cin >> cmd;
		if (cmd == 'L') {
			if (cursor != l.begin()) {
				cursor--;
			}
		} else if(cmd == 'D') {
			if (cursor !=  l.end()) {
				cursor++;
			}
		} else if(cmd == 'B') {
			if (cursor != l.begin()) {
				auto temp = cursor;
				cursor--;
				l.erase(cursor);
				cursor = temp;
			}
		} else if(cmd == 'P') {
			char c;
			cin >> c;
			l.insert(cursor, c);
		} else {
			cout << "Wrong input" << '\n';
		}
	}
	for(auto it = l.begin(); it != l.end(); it++)
		cout << *it;
	cout << '\n';
	return 0;
}
