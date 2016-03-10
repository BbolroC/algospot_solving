#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &v, int n) {
	cout << "start" << '\n';
	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';
	cout << '\n';
}

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v = { 0 };
	for (int i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	print(v, n);
	int j, k;
	for (j = 1; j <= n - 1; j++) {
		int max = v[1];
		int maxLoc = 1;
		cout << "max: " << max << "maxLoc: " << maxLoc << '\n';
		for(k = 1; k <= n - j; k++) {
			if (max < v[k]) {
				max = v[k];
				maxLoc = k;
			}
		}
		cout << v[maxLoc] << " swap " << v[k] << '\n';
		swap(v[maxLoc], v[k]);
	}
	print(v, n);
	return 0;
}
