#include <iostream>
using namespace std;

int main() {
	auto printName = []{ return "2/12"; };
	cout << printName() << '\n';
	return 0;
}
