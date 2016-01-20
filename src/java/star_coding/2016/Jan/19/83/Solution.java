import java.util.*;

class ListNode {
	int val;
	ListNode next;
	ListNode(int x) {
		val = x;
	}
}

public class Solution {
	public static void main(String[] args) {
		ListNode head = null;
		head = addNode(head, new ListNode(1));
		head = addNode(head, new ListNode(1));
		head = addNode(head, new ListNode(2));
		head = addNode(head, new ListNode(3));
		head = addNode(head, new ListNode(3));
		printList(head);
		ListNode res = deleteDuplicates(head);
		printList(head);
	}
	
	public static ListNode deleteDuplicates(ListNode head) {
		ListNode cur = head;
		ListNode pre = null;
		if (cur == null) {
			return head;
		} else {
			Map<Integer, Integer> once = new HashMap<Integer, Integer>();
			while (cur != null) {
				if (once.get(cur.val) == null) {
					System.out.println("one: " + cur.val);
					once.put(cur.val, 1);
					pre = cur;
					cur = cur.next;
				} else {
					System.out.println("two: " + cur.val);
					pre.next = cur.next;
					cur = pre.next;
				}
				
			}
			return head;
		}
	}

	public static ListNode addNode(ListNode head, ListNode node) {
		ListNode cur = head;
		if (cur  == null) {
			head = node;
			return head;
		} else {
			String gap = "";
			while (cur.next != null) {
				cur = cur.next;
				gap = " ";
			}
			cur.next = node;
			return head;
		}
	}

	public static void printList(ListNode head) {
		ListNode cur = head;
		if (cur == null) {
			return;
		} else {
			String gap = "";
			while (cur != null) {
				System.out.print(gap + cur.val);
				cur = cur.next;
				gap = " ";
			}
			System.out.println();
		}
	}
}
