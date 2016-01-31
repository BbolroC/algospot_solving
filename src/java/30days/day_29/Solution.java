import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	public static void main(String[] args) {
		/* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
		Scanner in = new Scanner(System.in);
		int T = in.nextInt();
		in.nextLine();
		for (int i = 0; i < T; i++) {
			String str = in.nextLine();
			int len = str.length();
			boolean isFunny = true;
			for (int j = 0; j < (len + 1) / 2; j++) {
				if (Math.abs(str.charAt(j) - str.charAt(j + 1)) 
						!= Math.abs(str.charAt(len - 1 - j) - str.charAt(len - 2 - j))) {
					System.out.println("Not Funny");
					isFunny = false;
					break;
						}
			}
			if (isFunny) {
				System.out.println("Funny");
			}
		}
	}
}
