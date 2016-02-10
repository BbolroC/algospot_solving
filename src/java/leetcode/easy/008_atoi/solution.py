class Solution(object):
	def myAtoi(self, str):
		"""
		:type str: str
		:rtype: int
		"""
		pos = 0
		l = []
		sign = 1
		first = True
		found = False
		wrong = False
		while pos < len(str) and not wrong:
			if (ord(str[pos]) >= ord('0') and ord(str[pos]) <= ord('9')):
				l.append(ord(str[pos]) - ord('0'))
				found = True
			elif first and (str[pos] == '+' or str[pos] == '-'):
				first = False
				if str[pos] == '-':
					sign = -1
			elif not found and str[pos] == ' ':
				pass
			else:
				wrong = True 
			pos += 1

		sum = 0
		for i in range(len(l)):
			sum += l.pop() * (10 ** i)

		sum *= sign
		if sum > 2147483647 
			sum = 2147483647
		if sum < -2147483648:
			sum = -2147483648
		return sum


def main():
	s = Solution()
	print s.myAtoi("   +0 123")

if __name__ == "__main__":
	main()
