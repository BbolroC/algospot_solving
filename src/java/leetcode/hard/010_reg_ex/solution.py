class Solution(object):
	def isMatch(self, s, p):
		"""
		:type s: str
		:type p: str
		:rtype: bool
		"""
		slist = list(s)
		slist.append(None)
		plist = list(p)
		plist.append(None)
		return self.realMatch(slist, plist)

	def realMatch(self, s, p):
		if p[0] == None:
			return s[0] == None

		if p[1] != '*':
			return ((s[0] == p[0]) or (s[0] != None and p[0] == '.')) and self.realMatch(s[1:], p[1:])

		w = 0 
		while 1 + 2 * w < len(p) and (p[1 + 2 * w] == '*' and p[0] == p[2 * w]):
			w += 1
			
		cur = 0
		while ((s[cur] == p[0]) or (s[cur] != None and p[0] == '.')):
			if self.realMatch(s[cur:], p[2 * w:]):
				return True
			cur += 1

		return self.realMatch(s[cur:], p[2 * w:])

def main():
	s = Solution()
	print s.isMatch("aaaaaaaaaaaaab", "a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*c")
	print s.isMatch("aa","a")
	print s.isMatch("aa","aa")
	print s.isMatch("aaa","aa")
	print s.isMatch("aa", "a*")
	print s.isMatch("aa", ".*")
	print s.isMatch("ab", ".*")
	print s.isMatch("aab", "c*a*b")
if __name__ == "__main__":
	main()
