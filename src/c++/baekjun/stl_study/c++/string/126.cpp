#include <iostream>
#include <string>
using namespace std;

int main() {
	int n1 = 1;
	int n2 = 2;

	string s1 = to_string(n1);
	string s2 = to_string(n2);

	cout << s1 << ' ' << s2 << '\n';

	long long l1 = 2147483647;
	long long l2 = 2147483648;

	s1 = to_string(l1);
	s2 = to_string(l2);

	cout << s1 + ' ' + s2 << '\n';

	double d = 3.141592;
	float f = 65358979.0;

	s1 = to_string(d);
	s2 = to_string(f);

	cout << s1 + ' ' + s2 << '\n';

	return 0;
}
