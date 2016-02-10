class Solution(object):
	def reverse(self, x):
		"""
		:type x: int
		:rtype: int
		"""
		if x > 2147483647 or x < -2147483648:
			return 0

		sign = 1
		if x < 0:
			sign = -1
		s = []
		num = sign * x
		digit = len(str(num))
		for i in range(digit - 1, -1, -1):
			s.append(num / (10 ** i))
			num = num % (10 ** i)
		print s
		sum = 0 
		for i in range(digit - 1, -1, -1):
			sum += s.pop() * (10 ** i)

		return sign * sum

def main():
	num = 123
	s = Solution()
	print s.reverse(num)

if __name__ == "__main__":
	main()
