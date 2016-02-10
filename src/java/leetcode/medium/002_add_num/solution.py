class ListNode():
	def __init__(self, x):
		self.val = x
		self.next = None

	def add(self, x):
		pos = self
		while pos.next != None:
			pos = pos.next

		pos.next = ListNode(x)

	def printList(self):
		buf = ''
		pos = self
		buf += str(pos.val)
		while pos.next != None:
			pos = pos.next
			buf += '->' + str(pos.val)
		print buf

class Solution():
	def addTwoNumbers(self, l1, l2):
		"""
		:type l1: ListNode
		:type l2: ListNode
		:rtype: ListNode
		"""
		lo = None
		ret = None 
		l1p = l1
		l2p = l2
		addition = 0
		while l1p != None or l2p != None:
			one = two = 0
			if l1p != None:
				one = l1p.val
			if l2p != None:
				two = l2p.val
			if one + two + addition >= 10:
				print 'here'
				if lo == None:
					lo = ListNode(one + two + addition - 10)
				else:
					lo.next = ListNode(one + two + addition - 10)
					lo = lo.next
				addition = 1
			else:
				print 'there'
				if lo == None :
					lo = ListNode(one + two + addition)
				else:
					lo.next = ListNode(one + two + addition)
					lo = lo.next
				addition = 0
			if ret == None:
				ret = lo
			if l1p != None:
				l1p = l1p.next
			if l2p != None:
				l2p = l2p.next

		if addition == 1:
			lo.next = ListNode(1)

		return ret

def main():	
	list1 = ListNode(9)
	list1.add(9)
	list1.add(9)
	list1.add(9)
	list1.printList()
	list2 = ListNode(1)
	list2.printList()
	s = Solution()
	rlist = s.addTwoNumbers(list1, list2)
	rlist.printList()

if __name__ == "__main__":
	main()
