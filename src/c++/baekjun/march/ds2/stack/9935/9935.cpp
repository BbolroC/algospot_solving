#include <iostream>
#include <stack>
#include <utility>
#include <string>
using namespace std;

string stringExplosion(string &str, string &exStr) {
	int len = str.size();
	stack<pair<int, int>> st;
	string res;
	int curPos = 0;
	for (int i = 0; i < len; i++) {
		if (str.at(i) == exStr.at(curPos) && st.top().second == curPos - 1) {
			st.push(make_pair(i, curPos)); 		
		} else {
			res.append(str.at(i));
		}
	}
}

int main() {
	string s;
	string es
	cin >> s;
	cin >> es; 
	cout << stringExplosion(s, es) << '\n';
	
}
