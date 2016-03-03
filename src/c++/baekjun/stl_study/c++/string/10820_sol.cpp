#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		int lower, upper, number, space;
		lower = upper = number = space = 0;
		for (char c : s) {
			if ('a' <= c && 'z' >= c) {
				lower++;
			} else if ('A' <= c && 'Z' >= c) {
				upper++;
			} else if ('0' <= c && '9' >= c) {
				number++;
			} else {
				space++;
			}
		}
		cout << lower << ' ' << upper << ' ';
		cout << number << ' ' << space << '\n';
	}
	return 0;
}
