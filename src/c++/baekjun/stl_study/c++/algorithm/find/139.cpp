#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4};
	auto even = find_if(a.begin(), a.end(), [](int x) {
			return x % 2 == 0;
			});
	auto odd = find_if(a.begin(), a.end(), [](int x) {
			return x % 2 == 1;
			});

	cout << "location of the first even number: " << (even - a.begin()) << '\n';
	cout << "location of the first odd number: " << (odd - a.begin()) << '\n';
	return 0;
}
