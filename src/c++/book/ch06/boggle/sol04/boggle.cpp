#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<string> board;
set<pair<int, int>> S;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int main(int argc, const char *argv[])
{
	int nCases;
	cin >> nCases;
	while (nCases--)
	{
		board.resize(5);
		for (size_t i = 0; i < 5; ++i)
		{
			cin >> board[i];
		}
		int nWords;
		cin >> nWords;
		for (size_t q = 0; q < nWords; ++q)
		{
			string word;
			cin >> word;

			S.clear();
			for (int i = 0; i < 5; i++)
			{
				for (int j =0; j < 5; j++)
				{
					if (board[i][j] == word[0]) S.insert(make_pair(i, j));
				}
			}

			for (int i = 1; i < word.size(); i++)
			{
				set<pair<int, int>> NS;
				for (set<par<int, int>>::iterator it = S.begin(); it != S.end(); ++it)
				{
					int y = it->first, x = it->second;
					for (int k = 0; k < 8; k++)
					{
						int ny = y + dy[k];
						int nx = x + dx[k];
						if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
						if (board[ny][nx] == word[i])
						{
							NS.insert(make_pair(ny, nx));
						}
					}
				}
				swap(NS, S);
			}
			cout << word << " ";
			if (!S.size()) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
