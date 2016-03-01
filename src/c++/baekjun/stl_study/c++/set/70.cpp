#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s = {7, 1, 5, 3};

	for (int i = 1; i <= 9; i++) {
		cout << "s.count(" << i << "} = " << s.count(i) << '\n';
	}
}
