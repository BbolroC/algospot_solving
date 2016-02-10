class Solution(object):
	def findMedianSortedArrays(self, num1, num2):
		"""
		:type num1: List[int]
		:type num2: List[int]
		:rtype: float
		"""
		# Merge sort -_-;;
		num3 = num1[:] + num2[:]
		i = 0
		j = 0
		k = 0
		while i < len(num1) and j < len(num2):
			if num1[i] < num2[j]:
				num3[k] = num1[i]
				i += 1
			else:
				num3[k] = num2[j]
				j += 1
			k += 1

		while i < len(num1):
			num3[k] = num1[i]
			i += 1
			k += 1

		while j < len(num2):
			num3[k] = num2[j]
			j += 1
			k += 1

		mid = len(num3) / 2
		if len(num3) % 2 == 0:
			return (num3[mid - 1] + num3[mid]) / 2.0
		else:
			return num3[mid] * 1.0

		

def main():
	arr1 = [1]
	arr2 = []

	s = Solution()
	print s.findMedianSortedArrays(arr1, arr2)

if __name__ == "__main__":
	main()

