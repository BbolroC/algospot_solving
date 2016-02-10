class Solution(object):
	def lengthOfLongestSubstring(self, s):
		"""
		:type: str
		:rtype: int
		"""
		start = 0
		end = 0
		maxLen = 0
		indexDic = {}
		for i in range(len(s)):
			if s[i] in indexDic:
				if indexDic[s[i]] >= start:
					start = indexDic[s[i]] + 1
			indexDic[s[i]] = i
			end += 1
			if end - start > maxLen:
				maxLen = end - start

		return maxLen

def main():
	test1 = "abcabcbb"
	test2 = "bbbbb"

	s = Solution()
	print s.lengthOfLongestSubstring(test2)

if __name__ == "__main__":
	main()


