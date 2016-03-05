#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "book";
	cout << s << ": " << s.empty() << '\n';
	s = "";
	cout << s << ": " << s.empty() << '\n';
	return 0;
}
