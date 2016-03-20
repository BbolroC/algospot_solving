#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<string> log;
	while (n--) {
		string name, act;
		cin >> name >> act;
		if (act == "enter") {
			log.insert(name);
		} else {
			log.erase(log.find(name));
		}
	}
	for (auto it = log.rbegin(); it != log.rend(); it++)
		cout << *it << '\n';
	return 0;
}
