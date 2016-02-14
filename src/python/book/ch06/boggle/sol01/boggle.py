def adj(i0, j0):
	for di, dj in ((-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)):
		i, j = i0 + di, j0 + dj
		if 0 <= i < 5 and 0 <= j < 5:
			yield i, j

def solve(board, letters, word):
	if letters < set(word):
		return False
	def find_word(i, j, x):
		return x < 0 or (word[x] == board[i][j] and any(
		find_word(i1, j1, x - 1)
		for i1, j1 in adj(i, j)
		))
	return any(
		board[i][j] == word[-1] and find_word(i, j, len(word) - 1)
		for i in range(5) for j in range(5)
	)

def main():
	nCases = int(raw_input())
	for _ in xrange(nCases):
		board = tuple(raw_input() for _ in xrange(5))
		nWords = int(raw_input())
		words = [raw_input() for _ in xrange(nWords)]
		for word in words:
			print word, 'YES' if solve(board, set(''.join(board)), word) else 'NO'

if __name__ == '__main__':
	main()
