#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "Hello";
	string b = "World";

	string hello_world = a + " " + b;
	hello_world += "!";

	cout << hello_world << '\n';
	return 0;
}
