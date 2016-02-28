#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a = {1, 2, 3, 4};
	cout << "size = " << a.size() << '\n';

	a.push_back(5);
	cout << "size = " << a.size() << '\n';
	cout << "empty = " << a.empty() << '\n';

	a.clear();
	cout << "size = " << a.size() << '\n';
	cout << "empty = " << a.empty() << '\n';
	return 0;
}
