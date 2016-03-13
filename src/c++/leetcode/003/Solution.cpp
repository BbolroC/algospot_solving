#include <iostream>
#include <string>
#include <map>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int l = s.size();
	if (l < 2) return l;
	int res = 0;
	int first = 1;
	bool dup = false;
	map<char, int> m;
	int i;
	for (i = 1; i <= l; i++) {
		if (m[s[i - 1]] != 0 && first <= m[s[i - 1]]) {
			int len  = i - first;
			dup = true;
			if (len > res) {
				res = len;
			}
			first = m[s[i - 1]] + 1;
			m[s[i - 1]] = i;
		} else {
			dup = false;
			m[s[i - 1]] = i;
		}
	}
	cout << first << ' ' << i << '\n';
	if (!dup) {
		if (res < i - first) {
			res = i - first;
		}
	}
	return res;
}

int main() {
	string s;
	cin >> s;
	cout << lengthOfLongestSubstring(s) << '\n';
	return 0;
}
