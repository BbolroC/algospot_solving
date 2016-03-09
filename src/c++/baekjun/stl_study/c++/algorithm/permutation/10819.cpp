#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int max = -1;
	do {
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += abs(v[i] - v[i + 1]);
		}
		if (max < sum) {
			max = sum;
		}
	} while(next_permutation(v.begin(), v.end()));
	cout << max << '\n';
	return 0;
}
