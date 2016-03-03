#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;

	char c[] = "c string";
	string s2(c);
	cout << s2 << '\n';
	string s3 = c;
	cout << s3 << '\n';

	c[1] = '\0';

	string s4(c);
	cout << s4 << '\n';
	string s5 = c;
	cout << s5 << '\n';

	string s6(10, '!');
	cout << s6 << '\n';
	string s7 = "abcdefg";
	cout << s7 << '\n';
	return 0;
}
