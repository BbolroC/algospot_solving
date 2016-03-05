#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	while (n--) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	int q;
	scanf("%d", &q);
	cout << count(v.begin(), v.end(), q) << '\n';
	return 0;
}
