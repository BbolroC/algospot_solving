import java.io.*;
import java.util.*;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int T = in.nextInt();
		int[] students = new int[T];
		int[] thresholds = new int[T];
		String arrivalStr;
		@SuppressWarnings({"rawtypes", "unchecked"})
		List<String>[] arrivals = (ArrayList<String>[])new ArrayList[T];
		for (int i = 0; i < T; i++) {
			students[i] = in.nextInt();
			thresholds[i] = in.nextInt();
			in.nextLine();
			arrivalStr = in.nextLine();
			arrivals[i] = new ArrayList<String>();
			arrivals[i] = Arrays.asList(arrivalStr.split(" "));
		}
		for (int i = 0; i < T; i++) {
			System.out.println(arrivals[i].toString());
		}
	}
}
