import sys

readInput = lambda : sys.stdin.readline().strip()
directions = ((-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1))

def getNeighborPos(pos):
	for direction in directions:
		if 0 <= pos[0] + direction[0] < 5 and \
					0 <= pos[1] + direction[1] < 5:
			yield pos[0] + direction[0], pos[1] + direction[1]

def findWord(word, pos):
	failed.append((len(word), pos))
	for x, y in ((x, y) for x, y in getNeighborPos(pos) if board[x][y] == word[0]):
		if len(word) == 1 or ((len(word) - 1, (x, y)) not in failed \
							and findWord(word[1:], (x, y))): 
			return True

for _ in range(int(readInput())):
	board = [readInput() for _ in range(5)]

	for _ in range(int(readInput())):
		word, isFound = readInput(), False

		failed = []
		for i, x in enumerate(board):
			for j, y in ((k, y) for k, y in enumerate(x) if y == word[0]):
				if len(word) == 1 or findWord(word[1:], (i, j)):
					isFound = True; break
			else: continue
			break
		print('{} {}'.format(word, 'YES' if isFound else 'NO'))
