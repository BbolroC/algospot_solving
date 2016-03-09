#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a = {4, 2, 1, 5, 7, 3};
	auto it = min_element(a.begin(), a.end());
	cout << "minVal: " << *it << ", minLoc: " << (it - a.begin()) << '\n';
	it = max_element(a.begin(), a.end());
	cout << "maxVal: " << *it << ", maxLoc: " << (it - a.begin()) << '\n';
	return 0;
}
