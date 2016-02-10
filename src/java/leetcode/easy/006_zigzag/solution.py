class Solution(object):
	def convert(self, s, numRows):
		"""
		:type s: str
		:type numRows: int
		:rtype: str
		"""
		matrix = [[] for x in range(numRows)]
		x = 0
		done = False
		while not done:
			for i in range(numRows):
				if x < len(s):
					matrix[i].append(s[x])
					x += 1
				else:
					done = True
					break
			for i in range(numRows - 2, 0, -1):
				if x < len(s):
					matrix[i].append(s[x])
					x += 1
				else:
					done = True
					break

		ret = ''
		for alist in matrix:
			ret += ''.join(alist)

		return ret

def main():
	testStr = "PAYPALISHIRING"
	nRows = 3
	s = Solution()
	print s.convert(testStr, nRows)

if __name__ == "__main__":
	main()
