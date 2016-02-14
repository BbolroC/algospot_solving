import java.util.HashMap;
import java.util.Scanner;

public class Main {
	static String[][] gameBoard = new String[5][5];
	final static int[] dx = { -1, -1, -1, 1, 1, 1, 0, 0 };
	final static int[] dy = { -1, 0, 1, -1, 0, 1, -1, 1 };
	static HashMap<String, String> map = new HashMap<String, String>();

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int cases = sc.nextInt();
		int i, j, k, numOfWords = 0;

		String[] testWords = new String[10];
		String[] testResults = new String[10];
		String temp = "";

		while (cases-- > 0) {
			for (i = 0; i < 5; i++) {
				temp = sc.next();
				for (j = 0; j < 5; j++) {
					gameBoard[i][j] = temp.substring(j, j + 1);
				}
			}
			numOfWords = sc.nextInt();

			for (i = 0; i < numOfWords; i++) {
				testWords[i] = sc.next();
				testResults[i] = "NO";

				for (j = 0; j < 5; j++) {
					for (k = 0; k < 5; k++) {
						if (hasWord(testWords[i], j, k)) {
							testResults[i] = "YES";
						}
					}
				}
			}

			for (i = 0; i < numOfWords; i++) {
				System.out.print(testWords[i] + " ");
				System.out.println(testResults[i]);
			}
			map.clear();
		}
		sc.close();
	}

	public static boolean hasWord(String word, int y, int x) {
		if (!inRange(y, x)) {
			return false;
		}
		if (!gameBoard[y][x].equals(word.substring(0, 1))) {
			return false;
		}
		if (word.length() == 1) {
			return true;
		}
		for (int direction = 0; direction < 8; direction++) {
			int nextY = y + dy[direction];
			int nextX = x = dx[direction];

			if (map.containsKey(Integer.toString(nextY) + Integer.toString(nextX) + word.substring(1))) {
				if (map.get(Integer.toString(nextY) + Integer.toString(nextX) + word.substring(1)).equals("TRUE")) {
					return true;
				} else {
					continue;
				}
			} else {
				if (hasWord(word.substring(1), nextY, nextX)) {
					map.put(Integer.toString(nextY) + Integer.toString(nextX) + word.substring(1), "TRUE");
					return true;
				} else {
					map.put(Integer.toString(nextY) + Integer.toString(nextX) + word.substring(1), "FALSE");
				}
			}
		}
		return false;
	}

	public static boolean inRange(int x , int y) {
		if (x < 0 || y < 0 || x > 4 || y > 4) {
			return false;
		} else {
			return true;
		}
	}
}
