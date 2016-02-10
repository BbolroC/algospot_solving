class Solution(object):
	def twoSum(self, nums, target):
		"""
		:type nums: List[int]
		:type target: int
		:rtype: List[int]
		"""
		indexList = {}

		for i in range(len(nums)):
			if target - nums[i] in indexList:
				return [indexList[target - nums[i]] + 1, i + 1]
			indexList[nums[i]] = i

		return [-1, -1]

def main() :
	s = Solution()
	testList = [2, 7, 11, 15]
	testList1 = [3, 2, 4]
	testList2 = [-3, 4, 3, 90]

	target = 9
	target1 = 6
	target2 = 0
	print s.twoSum(testList2, target2)

if __name__ == "__main__":
	main()
