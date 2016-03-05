#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	char c;
	vector<char> v;
	while (scanf("%c", &c) != EOF) {
		v.push_back(c);
	}
	for (int i = 0; i < 26; i++) {
		auto it = find(v.begin(), v.end(), 'a' + i);
		if (it == v.end())
			cout << -1 << ' ';
		else
			cout << (it - v.begin()) << ' ';
	}
	cout << '\n';
	return 0;
}
