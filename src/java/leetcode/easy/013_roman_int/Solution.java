import java.io.*;
import java.util.*;

public class Solution {
	public static int romanToInt(String s) {
		HashMap<Character, Integer> rMap = new HashMap<Character, Integer>();
		rMap.put('I', 1);
		rMap.put('V', 5);
		rMap.put('X', 10);
		rMap.put('L', 50);
		rMap.put('C', 100);
		rMap.put('D', 500);
		rMap.put('M', 1000);

		char[] rArray = s.toCharArray();
		int res = 0;
		int prev = 0, curr = 0;
		for (int i = 0; i < rArray.length; i++) {
			curr = rMap.get(rArray[i]);
			if (prev < curr) {
				res += -1 * prev;
			} else {
				res += prev;
			}
			prev = curr;
		}
		res += curr;
		return res;
	}

	public static void main(String[] args) {
		System.out.println("LXIV: " + romanToInt("LXIV"));
		System.out.println("XCIV: " + romanToInt("XCIV"));
		System.out.println("CM: " + romanToInt("CM"));
		System.out.println("LXII: " + romanToInt("LXII"));
		System.out.println("LXXXVII: " + romanToInt("LXXXVII"));
		System.out.println("MDCCC: " + romanToInt("MDCCC"));
	}
}

