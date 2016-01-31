import java.io.*;
import java.util.*;

public class Solution {
	public static String countAndSay(int n) {
		String res = "";
		String cur = "1";

		while (n > 1) {
			StringBuffer out = new StringBuffer();
			char letter = cur.charAt(0);
			int cnt = 1;
			for (int i = 1; i < cur.length(); i++) {
				if (letter != cur.charAt(i)) {
					out.append(String.valueOf(cnt));
					out.append(letter);
					letter = cur.charAt(i);
					cnt = 1;
				} else {
					cnt += 1;
				}
			}
			out.append(String.valueOf(cnt));
			out.append(letter);
			cur = out.toString();
			n -= 1;
		}
		return cur;
	}

	public static void main(String[] args) {
		System.out.println(String.valueOf(1) + ": " + countAndSay(1));
		System.out.println(String.valueOf(2) + ": " + countAndSay(2));
		System.out.println(String.valueOf(3) + ": " + countAndSay(3));
		System.out.println(String.valueOf(4) + ": " + countAndSay(4));
		System.out.println(String.valueOf(21) + ": " + countAndSay(21));

	}
}

