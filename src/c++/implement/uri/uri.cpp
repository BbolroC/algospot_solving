#include <iostream>
#include <cstring>
#include <map>

using namespace std;

const int max_len = 80;
map<string, char> table;

void decode_uri(char *str) {
	int len = strlen(str);
	int pos = 0;
	char tmp[4];
	for (int i = 0; i < len; ++i) {
		if ((str[i] == '%') && (i + 2 < len)) {
			tmp[0] = str[i];
			tmp[1] = str[i + 1];
			tmp[2] = str[i + 2];
			tmp[3] = '\0';
			string c(tmp);
			if (table.find(c) != table.end()) {
				str[pos++] = table[c];
				i += 2;
			}
			else
				str[pos++] = str[i];
		}
		else
			str[pos++] = str[i];
	}
	str[pos] = '\0';
}

int main() {
	table["%20"] = ' ';
	table["%21"] = '!';
	table["%24"] = '$';
	table["%25"] = '%';
	table["%28"] = '(';
	table["%29"] = ')';
	table["%2a"] = '*';
	int num_case;
	cin >> num_case;
	char **uris = new char*[num_case];
	for (int i = 0; i < num_case; ++i) {
		uris[i] = new char[max_len];
		cin >> uris[i];
		decode_uri(uris[i]);
	}

	for (int i = 0; i < num_case; ++i) {
		cout << uris[i] << endl;
	}

	delete uris;
	return 0;
}
