#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string u = "long string";
	string v = "short";

	cout << min(u, v) << '\n';
	cout << min(u, v, [](string u, string v) {
			return u.size() < v.size();
			}) << '\n';
	return 0;
}
