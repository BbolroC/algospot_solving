#include<iostream>
#include<set>
#include<map>
#include<vector>

using namespace std;

map<pair<int, int>, set<string>> FailSet;

bool checkVisit(int row, int col, string s)
{
	if (FailSet.empty())
		return false;

	set<string> strSet = FailSet[pair<int, int>(row, col)];
	if (!strSet.empty() && strSet.find(s) != strSet.end())
		return true;
	else
		return false;
}

const int DIRECTION_MAX_COUNT = 8;
int Direction[DIRECTION_MAX_COUNT][2] = {
	{0, 1}, {1, 1}, {1, 0}, {1, -1},
	{0, -1}, {-1, -1}, {-1, 0}, {-1, 1}
};
const int MAX_ROW = 4;
const int MAX_COL = 4;

bool checkBoard(string *board, int wordLen, int row, int col, string word, int index)
{
	if (row < 0 || row > MAX_ROW || col < 0 || col > MAX_COL)
		return false;
	if (word.size() == 0)
		return false;

	if (board[row][col] != word.substr(0, 1)[0])
		return false;
	if (checkVisit(row, col, word)) 
		return false;

	if (index == wordLen - 1)
		return true;

	bool ret;
	for (int d = 0; d < DIRECTION_MAX_COUNT; d++)
	{
		int nextRow = row + Direction[d][0];
		int nextCol = col + Direction[d][1];
		if (nextRow < 0 || nextRow > MAX_ROW || nextCol < 0 || nextCol > MAX_COL)
			continue;
		
		ret = checkBoard(board, wordLen, nextRow, nextCol, word.substr(1), index + 1);

		if (ret)
			return true;
	}

	FailSet[pair<int, int>(row, col)].insert(word);
	return false;
}

int main()
{
	int cnt;
	cin >> cnt;

	while (cnt--)
	{
		string board[MAX_ROW + 1];
		for (int i = 0; i <= MAX_ROW; i++)
			cin >> board[i];

		int wordCount;
		cin >> wordCount;

		vector<string> words;
		for (int i = 0; i < wordCount; i++)
		{
			string str;
			cin >> str;
			words.push_back(str);
		}

		for (int i = 0; i < wordCount; i++)
		{
			FailSet.clear();

			bool ret = false;
			for (int r = 0; r <= MAX_ROW; r++)
			{
				for (int c = 0; c <= MAX_COL; c++)
				{
					ret = checkBoard(board, (int) words[i].size(), r, c, words[i], 0);
					if (ret)
						break;
				}
				if (ret)
					break;
			}
			cout << words[i] << " " << (ret ? "YES" : "NO") << endl;
		}
	}
	return 0;
}
