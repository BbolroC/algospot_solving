#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double f = 3.14159265358979;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(8) << f << '\n';
	cout << setprecision(10) << f << '\n';
	return 0;
}
