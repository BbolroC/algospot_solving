#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4};
	for (int i = 1; i <= 5; i++) {
		auto it = find(a.begin(), a.end(), i);
		cout << "location of " << i << ": ";
		if (it == a.end()) {
			cout << "nowhere";
		} else {
			cout << (it - a.begin());
		}
		cout << '\n';
	}
	return 0;
}
