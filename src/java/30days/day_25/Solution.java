import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static String isPrimeNumber(int num) {
		if (num == 1) { return "Not prime"; }
		for (int i = 2; i < num / 2 + 1; i++) {
			if (num % i == 0)
				return "Not prime";
		}
		return "Prime";
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuffer sb = new StringBuffer();
		int T = in.nextInt();
		for (int i = 0; i < T; i++) {
			int N = in.nextInt();
			sb.append(isPrimeNumber(N) + "\n");
		}
		System.out.print(sb.toString());
	}
}
