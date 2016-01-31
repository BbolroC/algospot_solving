import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static int calculateFine(int[] aDate, int[] eDate) {
		if (aDate[2] > eDate[2]) { 
			return 10000; 
		} else if (aDate[2] == eDate[2]) {
			if (aDate[1] > eDate[1]) {
				return 500 * (aDate[1] - eDate[1]);
			} else if (aDate[1] == eDate[1]) {
				if (aDate[0] <= eDate[0]) {
					return 0;
				} else {
					return 15 * (aDate[0] - eDate[0]);
				}
			} else {
				return 0;
			}
		} else {
			return 0;
		}
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[] actualDate = new int[3];
		int[] expectedDate = new int[3];
		for (int i = 0; i < 3; i++) {
			actualDate[i] = in.nextInt();
		}
		for (int i = 0; i < 3; i++) {
			expectedDate[i] = in.nextInt();
		}
		System.out.println(calculateFine(actualDate, expectedDate));
	}
}
