#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	s1 += s2;
	s3 += s4;
	long long n1 = stoll(s1);
	long long n2 = stoll(s3);
	cout << n1 + n2 << '\n';
	return 0;
}
