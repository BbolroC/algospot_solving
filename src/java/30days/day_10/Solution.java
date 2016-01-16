import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < t; i++) {
			int n = in.nextInt();
			sb.append(decimalToBinary(n));
		}
		System.out.println(sb.toString());
	}
	public static String decimalToBinary(int num) {
		ArrayList<Integer> myList = new ArrayList<Integer>();
		while (num != 0) {
			myList.add(num % 2);
			num /= 2;
		}
		String res = "";
		for (int i = myList.size() - 1; i >= 0; i--) {
			res += String.valueOf(myList.get(i));
		}
		res += "\n";
		return res;
	}
}
