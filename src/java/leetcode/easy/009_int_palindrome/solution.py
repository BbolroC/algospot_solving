class Solution(object):
	def isPalindrome(self, x):
		"""
		:type x: int
		:rtype: bool
		"""
		sign = 1
		if x < 0:
			sign = -1

		digit = 0
		num = sign * x
		while num > 0:
			num /= 10
			digit += 1

		pal = 0
		num = sign * x
		for i in range(digit):
			pal += (num / (10 ** (digit - 1 - i))) * (10 ** i)
			num = num % (10 ** (digit - 1 - i))

		if x == sign * pal:
			return True
		else:
			return False


def main():
	s = Solution()
	print s.isPalindrome(12321)
	print s.isPalindrome(-122)
	print s.isPalindrome(3553)
	print s.isPalindrome(-3553)
	print s.isPalindrome(0)

if __name__ == "__main__":
	main()
