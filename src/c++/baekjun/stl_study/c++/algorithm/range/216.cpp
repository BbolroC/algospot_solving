#include <iostream>
#include <string>
using namespace std;

int main() {
	const char cstr[] = "string";
	int sum = 0;
	for (auto x : cstr) {
		sum++;
	}
	cout << "sum = " << sum << '\n';

	string str = "string";
	sum = 0;
	for (auto x : str) {
		sum++;
	}
	cout << "sum = " << sum << '\n';
	return 0;
}
