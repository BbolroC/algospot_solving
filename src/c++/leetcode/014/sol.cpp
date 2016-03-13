#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.empty()) return "";
	if (strs.size() == 1) return strs[0];
	sort(strs.begin(), strs.end(), [](string u, string v) {
			return u.size() < v.size();
			});
	int len = strs[0].size();
	int i;
	bool out = false;
	for (i = 0; i < len; i++) {
		auto it = strs.begin();
		const char tmp = (*it).at(i);
		it++;
		while (it != strs.end()) {
			if (tmp != (*it).at(i)) {
				out = true;
				break;
			}
			it++;
		}
		if (out)
			break;
	}
	return strs[0].substr(0, i);
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << longestCommonPrefix(v) << '\n';
	return 0;
}
