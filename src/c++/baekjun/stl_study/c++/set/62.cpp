#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	s.insert(1); s.insert(3); s.insert(2);

	cout << "s.size() = " << s.size() << '\n';

	pair<set<int>::iterator, bool> result = s.insert(4);
	cout << "result iterator = " << *result.first << '\n';
	cout << "result bool = " << result.second << '\n';

	auto result2 = s.insert(3);
	cout << "result2 iterator = " << *result2.first << '\n';
	cout << "result2 bool = " << result2.second << '\n';
	return 0;
}
