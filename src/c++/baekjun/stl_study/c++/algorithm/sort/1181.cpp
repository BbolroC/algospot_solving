#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void print(vector<string> &a) {
	for (auto &x : a) 
		cout << x << '\n';
}

int main() {
	int n;
	cin >> n;
	vector<string> v;

	while (n--) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), [](string u, string v) {
			return (u.size() < v.size()) || ((u.size() == v.size()) && (u < v));
			});
	auto last = unique(v.begin(), v.end());
	v.erase(last, v.end());
	print(v);
	return 0;
}
