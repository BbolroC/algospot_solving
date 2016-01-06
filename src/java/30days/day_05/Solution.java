import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num_case = sc.nextInt();
		String output[] = new String[num_case];
		for (int i = 0; i < num_case; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int N = sc.nextInt();
			String gap = "";
			output[i] = "";
			for (int j = 0; j < N; j++) {
				int sum = 0;
				int co = 1;
				sum += a;
				for (int k = 0; k < j + 1; k++) {
					sum += co * b;
					co *= 2;
				}
				output[i] += gap + sum;
				gap = " ";
			}
		}

		for (int i = 0; i < num_case; i++) {
			System.out.println(output[i]);
		}
	}
}

