#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> &a) {
	for(auto it = a.begin(); it != a.end(); ++it) {
		cout << *it << ' ';
	}
	cout << '\n';
}

int main() {
	vector<int> a = {1, 2, 3, 4, 5};
	print_vector(a);

	a.push_back(6);
	print_vector(a);
	a.push_back(7);
	print_vector(a);

	a.pop_back();
	print_vector(a);
	a.pop_back();
	print_vector(a);
	a.pop_back();
	print_vector(a);

	a.clear();
	print_vector(a);

	a.resize(5);
	print_vector(a);

	return 0;
}


