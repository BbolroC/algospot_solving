#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "string";
	string s2 = "stirng";

	if (s1 == s2) {
		cout << "s1 == s2" << '\n';
	} else if (s1 != s2) {
		cout << "s1 != s2" << '\n';
	}

	if (s1 < s2) {
		cout << "s1 < s2" << '\n';
	} else if (s1 > s2) {
		cout << "s1 > s2" << '\n';
	}
}
