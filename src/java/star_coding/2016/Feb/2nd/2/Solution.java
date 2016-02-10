import java.io.*;
import java.util.*;

class ListNode {
	int val;
	ListNode next;
	ListNode(int x) { val = x; }
}

public class Solution {
	public static ListNode insertNode(ListNode head, int n) {
		if (head == null) { return new ListNode(n); }
		ListNode curr = head;
		while(curr.next != null) { curr = curr.next; }
		curr.next = new ListNode(n);
		return head; 
	}

	public static void printList(ListNode head) {
		ListNode curr = head;
		String gap = "";
		while (curr != null) {
			System.out.print(gap + curr.val);
			gap = " -> ";
			curr = curr.next;
		}
		System.out.println();
	}

	public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
		if(l1 == null && l2 == null) { return (ListNode) null; }
		if(l1 == null) { return l2; }
		if(l2 == null) { return l1; }

		ListNode curr1 = l1, curr2 = l2;
		ListNode nl = null, curr3 = null;
		int num1 = 0, num2 = 0, carry = 0;
		while (curr1 != null || curr2 != null || carry != 0) {
			if(curr1 == null) { 
				num1 = 0;
			} else {
				num1 = curr1.val;
				curr1 = curr1.next;
			}
			if(curr2 == null) { 
				num2 = 0;
			} else {
				num2 = curr2.val;
				curr2 = curr2.next;
			}
			int sum = num1 + num2 + carry;
			carry = sum / 10;
			sum = sum % 10;
			if (nl == null) {
				nl = new ListNode(sum);
				curr3 = nl;
			} else {
				curr3.next = new ListNode(sum);
				curr3 = curr3.next;
			}
		}
		return nl;
	}

	public static void main(String[] args) {
		ListNode h1 = null, h2 = null; 
		ListNode h3 = null;
		h1 = insertNode(h1, 9);
		/*h1 = insertNode(h1, 4);
		h1 = insertNode(h1, 7);*/
		System.out.println("List One");
		printList(h1);
		h2 = insertNode(h2, 5);
		h2 = insertNode(h2, 6);
		h2 = insertNode(h2, 4);
		System.out.println("List Two");
		printList(h2);
		h3 = addTwoNumbers(h1, h2);
		System.out.println("Sum");
		printList(h3);
	}
}

