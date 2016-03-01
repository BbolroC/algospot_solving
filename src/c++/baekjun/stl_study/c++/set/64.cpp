#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s = {1, 2, 3, 4, 5};
	s.erase(s.begin());
	cout << "s.size() = " << s.size() << '\n';

	auto it = s.begin();
	++it;
	cout << "*it = " << *it << '\n';
	it = s.erase(it);
	cout << "*it = " << *it << '\n';
	cout << "s.size() = " << s.size() << '\n';
	return 0;
}
