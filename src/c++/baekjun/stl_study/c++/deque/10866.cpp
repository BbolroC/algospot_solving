#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	int nCase, num;
	string cmd;
	deque<int> d;
	scanf("%d\n", &nCase);


	while (nCase--) {
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> num;
			d.push_front(num);
		} else if (cmd == "push_back") {
			cin >> num;
			d.push_back(num);
		} else if (cmd == "pop_front") {
			if (d.size() == 0)
				cout << -1 << '\n';
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		} else if (cmd == "pop_back") {
			if (d.size() == 0)
				cout << -1 << '\n';
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		} else if (cmd == "size") {
			cout << d.size() << '\n';
		} else if (cmd == "empty") {
			cout << d.empty() << '\n';
		} else if (cmd == "front") {
			if (d.size() == 0)
				cout << -1 << '\n';
			else
				cout << d.front() << '\n';
		} else { // back
			if (d.size() == 0)
				cout << -1 << '\n';
			else
				cout << d.back() << '\n';
		}
	}
	return 0;
}
