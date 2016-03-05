#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string input, s;
	while (getline(cin, s))
		input += s;
	istringstream iss(input);
	int sum = 0;
	while (getline(iss, s, ',')) {
		sum += stoi(s);
	}
	cout << sum << '\n';
	return 0;
}
