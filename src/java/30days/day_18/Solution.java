import java.io.*;
import java.util.*;

class Palindrome {
	//Write your code here
	ArrayList<Character> mStack;
	ArrayList<Character> mQueue;
	Palindrome() {
		mStack = new ArrayList<Character>();
		mQueue = new ArrayList<Character>();
	}
	public void pushCharacter(char ch) {
		mStack.add(0, ch);
	}
	public char popCharacter() {
		char res = mStack.get(mStack.size() - 1);
		mStack.remove(mStack.size() - 1);
		System.out.println(res + " is popped out");
		return res;
	}
	public void enqueueCharacter(char ch) {
		mQueue.add(0, ch);
	}
	public char dequeueCharacter() {
		char res = mQueue.get(0);
		mQueue.remove(0);
		System.out.println(res + " is dequeued");
		return res;
	}
}

class Solution {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s = sc.nextLine();

		Palindrome p = new Palindrome();
		char arr[]=s.toCharArray();
		for (char c : arr) {
			p.pushCharacter(c);
		}

		for (char c : arr) {
			p.enqueueCharacter(c);
		}

		boolean f = true;
		for (int i = 0; i < s.length(); i++) {
			if (p.popCharacter() != p.dequeueCharacter()) {
				f = false;                
				break;
			}
		}

		if (f) {
			System.out.println("The word, "+s+", is a palindrome.");
		} else {
			System.out.println("The word, "+s+", is not a palindrome.");
		}
	}
}
