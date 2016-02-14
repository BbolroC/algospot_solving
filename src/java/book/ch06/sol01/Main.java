import java.util.*;
import java.io.*;

class Main {
	public static char[][] board;
	public static int[][][] memo;
	public static char[] theWord;
	public static String theWordS;
	public static int theWordLen;

	public static int[][] dirs = {
		{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}
	};

	public static boolean track(int In, int y, int x) {
		if (In == theWordLen) return true;
		if (memo[In][y][x] != -1) return memo[In][y][x] == 1;

		int ny, nx;
		boolean ret = false;
		for (int i = 0; i < 8; i++) {
			ny = y + dirs[i][0];
			nx = x + dirs[i][1];
			if (ny >= 0 && nx >= 0 && ny < 5 && nx < 5 && board[ny][nx] == theWord[In]) ret = track(In + 1, ny, nx);
			if (ret) break;
		}
		if (ret) {
			memo[In][y][x] = 1;
			return true;
		} else {
			memo[In][y][x] = 0;
			return false;
		}
	}

	public static boolean solve() {
		boolean ret = false;
		for (int i = 0; i < 5 && !ret; i++) {
			for (int j = 0; j < 5 && !ret; j++) {
				if (board[i][j] == theWord[0]) ret = track(1, i, j);
			}
		}
		return ret;
	}

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine().trim());

		while (cases-- > 0) {
			board = new char[5][5];
			for (int i =0; i < 5; i++) {
				char[] temp = br.readLine().trim().toCharArray();
				for (int j = 0; j < 5; j++)
					board[i][j] = temp[j];
			}
			int words = Integer.parseInt(br.readLine().trim());
			while (words-- > 0) {
				theWordS = br.readLine().trim();
				theWord = theWordS.toCharArray();
				theWordLen = theWord.length;

				memo = new int[theWordLen][5][5];
				for (int i = 0; i < theWordLen; i++) {
					for (int j = 0; j < 5; j++) {
						for (int k = 0; k < 5; k++) {
							memo[i][j][k] = -1;
						}
					}
				}
				System.out.println(theWordS + " " + (solve() ? "YES" : "NO"));
			}
		}
		br.close();
	}
}
