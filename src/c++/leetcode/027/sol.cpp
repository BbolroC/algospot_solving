#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	if (nums.empty()) return 0;
	for (auto it = nums.begin(); it != nums.end(); it++) {
		if (*it == val) {
			nums.erase(it);
			it--;
		}	
	}
	return nums.size();
}

void print(vector<int>& nums) {
	for (auto &i : nums) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int m;
	cin >> m;
	cout << removeElement(v, m) << '\n';
	print(v);
	return 0;
}

