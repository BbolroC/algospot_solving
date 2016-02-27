#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> &a) {
	for (auto it = a.begin(); it != a.end(); it++)
		cout << *it << ' ';
	cout << '\n';
}

int main() {
	vector<int> a;
	a.clear();

	a.push_back(1);
	print_vector(a);
	a.push_back(2);
	print_vector(a);

	a.resize(5);
	print_vector(a);
	a.resize(3);
	print_vector(a);
	a.clear();
	print_vector(a);

	return 0;
}
