#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "e";
	s.insert(0, "H");
	s.insert(2, "o");
	s.insert(2, 2, 'l').append(" ");
	string world = "Half the World Away";
	s.insert(6, world, 9, 5).push_back('!');
	cout << s << '\n';
	return 0;
}
