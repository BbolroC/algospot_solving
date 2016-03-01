#include <iostream>
#include <set>
using namespace std;

void print(set<int, greater<int>> &s) {
	for (auto &i : s)
		cout << i << ' ';
	cout << '\n';
}

int main() {
	set<int> s1;
	set<int> s2 = {1, 2, 3, 4, 5};
	set<int> s3 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3};

	cout << "s1.size() = " << s1.size() << '\n';
	cout << "s2.size() = " << s2.size() << '\n';
	cout << "s3.size() = " << s3.size() << '\n';

	set<int, greater<int>> s4 = {1, 2, 3, 4, 5};
	print(s4);
}
