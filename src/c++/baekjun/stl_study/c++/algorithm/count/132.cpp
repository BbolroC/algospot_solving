#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> a = {1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4};
	for (int i = 1; i <= 5; i++) {
		cout << "The number of " << i << ": " << count(a.begin(), a.end(), i);
		cout << '\n';
	}
	return 0;
}
