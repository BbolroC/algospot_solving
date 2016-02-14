#include <iostream>
#include <array>
#include <string>

using namespace std;

typedef array<array<char, 5>, 5> char5x5;
typedef array<array<int, 5>, 5> int5x5;

int inline safeAccess(const int5x5& table, int i, int j)
{
	if (0 <= i && i < 5)
	{
		if (0 <= j && j < 5)
		{
			return table[i][j];
		}
	}
	return 0;
}

int inline getNearMax(const int5x5& table, int i, int j) 
{
	int max = 0;
	for (int k = -1; k < 2; k++)
	{
		for (int l = -1; l < 2; l++)
		{
			if (k == 0 && l == 0)
				continue;

			int val = safeAccess(table, i + k, j + l);
			max = max < val ? val : max;
		}
	}
	return max;
}

bool bogglePossible(const char5x5& board, const string& word) 
{
	int5x5 table = { 0, };

	int len = word.length();
	for (int n = 0; n < len; n++)
	{
		char c = word[n];
		int5x5 newTable = table;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (board[i][j] == c)
				{
					newTable[i][j] = getNearMax(table, i, j) + 1;
				}
			}
		}
		table = newTable;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (table[i][j] >= len)
				return true;
		}
	}
	return false;
}

int main() 
{
	int nTestCase = 0;
	cin >> nTestCase;
	for (int c = 0; c < nTestCase; c++) 
	{
		char5x5 board;

		for (int i = 0; i < 5; i++) 
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> board[i][j];
			}
		}
		
		int nWord = 0;
		cin >> nWord;
		cin.get();

		for (int i = 0; i < nWord; i++)
		{
			string word;
			getline(cin, word);
			cout << word << ' ' << (bogglePossible(board, word) ? "YES" : "NO") << endl;
		}
	}
	return 0;
}

