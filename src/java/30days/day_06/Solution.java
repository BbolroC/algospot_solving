import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		for (int w = 0; w < n; w++) {
			for (int i = 1 + w; i < n; i++) {
				System.out.print(" ");
			}
			for (int i = 1 + w; i > 0; i--) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
