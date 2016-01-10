import java.util.*;
import java.io.*;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		in.nextLine();
		Map<String,String> myMap = new HashMap<String,String>();
		StringBuffer ans = new StringBuffer();
		for (int i = 0; i < N; i++) {
			String name = in.nextLine();
			int phone = in.nextInt();
			in.nextLine();
			myMap.put(name, String.valueOf(phone));
		}
		while (in.hasNext()) {
			String s = in.nextLine();
			String res = myMap.get(s);
			if (res != null) {
				ans.append(s + "=" + res + "\n");
			} else {
				ans.append("Not found\n");
			}
		}
		System.out.print(ans.toString());
	}
}

