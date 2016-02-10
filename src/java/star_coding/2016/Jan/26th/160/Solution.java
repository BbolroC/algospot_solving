import java.io.*;
import java.util.*;

class ListNode {
	int val;
	ListNode next;
	ListNode(int x) {
		val = x;
		next = null;
	}
}

public class Solution {
	public static ListNode getIntersectionNode(ListNode headA, ListNode headB) {
		if (headA == null || headB == null) { return null; }

		ListNode curA = headA;
		ListNode curB = headB;
		int lengthA = 0;
		int lengthB = 0;
		while(curA != null) { 
			curA = curA.next;
			lengthA += 1;
		}
		while(curB != null) { 
			curB = curB.next; 
			lengthB += 1;
		}
		if (curA == curB) {	// There is an intersection node.
			curA = headA;
			curB = headB;
			int diff = lengthA - lengthB;
			if (diff > 0) {
				while (diff > 0) {
					curA = curA.next;
					diff -= 1;
				}
			} else {
				while (diff < 0) {
					curB = curB.next;
					diff += 1;
				}
			}
			while (true) {
				if (curA == curB) { return curA; }
				curA = curA.next;
				curB = curB.next;
			}
		} else {
			return null;
		}
	}

	public static void main(String[] args) {
		ListNode a1 = new ListNode(1);
		ListNode head1 = a1;
		ListNode a2 = new ListNode(2);
		a1.next = a2;
		ListNode head2 = a2;
		ListNode res = getIntersectionNode(head1, head2);
		System.out.println("The value at the intersection node: " + String.valueOf(res.val));
	}
}

