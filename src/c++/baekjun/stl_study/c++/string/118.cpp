#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "He";
	a.append(2, 'l');
	a.append("o").append(1, ' ');

	string b = "";
	const char *c = "World";
	b.append(c);

	string hello_world = a;
	hello_world.append(b);
	hello_world.push_back('!');

	cout << hello_world << '\n';
	return 0;
}
