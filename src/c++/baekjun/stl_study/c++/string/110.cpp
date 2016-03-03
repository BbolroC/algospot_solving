#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "abc";
	printf("%s\n", s.c_str());

	s += "def";
	printf("%s\n", s.c_str());

	s = "";
	printf("%s\n", s.c_str());

	s = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", s.c_str());

	s = "book";
	cout << s << ": " << s.size() << '\n';
	cout << s << ": " << s.length() << '\n';

	s = "";
	cout << s << ": " << s.size() << '\n';
	cout << s << ": " << s.size() -1 << '\n';
	return 0;
}
