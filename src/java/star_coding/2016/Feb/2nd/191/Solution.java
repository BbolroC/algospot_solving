import java.io.*;
import java.util.*;

public class Solution {
	public static int hammingWeight(int n) {
		int cnt = 0;
		
		for (int i = 0; i < 32; i++) {
			if ((n & 1) == 1) { cnt++; }
			n = n >> 1;
		}
		return cnt;
	}

	public static void main(String[] args) {
		System.out.println(hammingWeight(11));
	}
}

