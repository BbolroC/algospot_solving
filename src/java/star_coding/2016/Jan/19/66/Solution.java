import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;

public class Solution {
	public static int[] plusOne(int[] digits) {
		int carry = 1;
		ArrayList<Integer> myDigits = new ArrayList<Integer>();
		for (int i = digits.length - 1; i >= 0; i--) {
			int tmp = digits[i] + carry;
			carry = tmp / 10;
			myDigits.add(tmp % 10);
		}
		if (carry == 1) {
			myDigits.add(carry);
		}
		Collections.reverse(myDigits);
		int[] res = new int[myDigits.size()];
		for (int i = 0; i < res.length; i++) {
			res[i] = myDigits.get(i).intValue();
		}

		return res;
	}
	public static void main(String[] args) {
		int[] testArr = new int[] { 9, 9, 9 };
		int[] res = plusOne(testArr);
		System.out.println(Arrays.toString(res));
	}
}

