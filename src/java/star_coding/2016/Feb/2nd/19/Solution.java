import java.util.*;
import java.io.*;

class ListNode {
	int val;
	ListNode next;
	ListNode(int x) { val = x; }
}

public class Solution {
	public static ListNode insertNode(ListNode head, int n) {
		ListNode node = new ListNode(n);
		if (head == null) { return node; }
		ListNode cur = head;
		while (cur.next != null) { cur = cur.next; }
		cur.next = node;

		return head;
	}
	
	public static void printList(ListNode head) {
		if (head == null) { return; }
		ListNode cur = head;
		String gap = "";
		while (cur != null) {
			System.out.print(gap + cur.val);
			gap = " -> ";
			cur = cur.next;
		}
		System.out.println();
	}

	public static ListNode  removeNthFromEnd(ListNode head, int n) {
		if (head == null) { return (ListNode)null; }

		ListNode prev = null, target = head, curr = head;
		while (curr.next != null) {
			if (n <= 1) {
				prev = target;
				target = target.next;	
				n = 0;
			}
			curr = curr.next;
			n -= 1;
		}
		if (prev == null) {
			head = head.next;
		} else {
			prev.next = target.next;
		}
		return head;
	}

	public static void main(String[] args) {
		ListNode head = null;
		ListNode testList;
		head = insertNode(head, 1);
		head = insertNode(head, 2);
		/*head = insertNode(head, 3);
		head = insertNode(head, 4);
		head = insertNode(head, 5);*/
		System.out.println("Before:");
		printList(head);
		head = removeNthFromEnd(head, 1);
		System.out.println("After:");
		printList(head);
	}
}

