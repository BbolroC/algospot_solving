class Solution(object):
	def longestPalindrome(self, s):
		"""
		:type: str
		:rtype: str 
		"""
		if len(s) == 1:
			return ''
		if len(s) == 2:
			if s[0] == s[1]:
				return s
			else:
				return ''
		ret = ''
		pivot = 0
		maxLen = 0
		if s[-1] == s[-2]:
			ret = s[-2:]
			maxLen = 2

		while pivot + 2 < len(s):
			if s[pivot] == s[pivot + 1]:
				less = pivot
				more = pivot + 1
				start, end = self.stretch(s, less, more)	
				if end - start + 1 > maxLen:
					maxLen = end - start + 1
					ret = s[start:end + 1]
			if s[pivot] == s[pivot + 2]:
				less = pivot
				more = pivot + 2
				start, end = self.stretch(s, less, more)	
				if end - start + 1 > maxLen:
					maxLen = end - start + 1
					ret = s[start:end + 1]
			pivot += 1
		return ret
	
	def stretch(self, s, less, more):
		while (less >= 0 and more < len(s)) and s[less] == s[more]:
			less -= 1
			more += 1

		return less + 1, more - 1

def main():
	test1 = "abcawowbcbb"
	test2 = "bb"
	test3 = "aaaa"

	s = Solution()
	print s.longestPalindrome(test3)

if __name__ == "__main__":
	main()


