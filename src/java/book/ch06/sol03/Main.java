import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

public class Main {
	static final boolean DEBUG = true;
	public static int sCaseCount;

	public static class Point {
		int x;
		int y;
		public Point(int x, int y) {
			this.x = x;
			this.y = y;
		}
	}

	public static class Case {
		public static final int MAX_TEST_CASE_COUNT = 50;
		public static final int PLAT_X_COUNT = 5;
		public static final int PLAT_Y_COUNT = 5;

		public char[][] mPlate = new char[PLAT_X_COUNT][PLAT_Y_COUNT];

		HashSet<String> mFoundHash = new HashSet<String>();
		String[] mWordList;
		Boolean[] mFound;

		public void readCase(BufferedReader br) throws IOException {
			for (int i = 0; i < PLAT_X_COUNT; i++) {
				String line = br.readLine();
				for (int j = 0; j < PLAT_Y_COUNT; j++) {
					mPlate[i][j] = line.charAt(j);
				}
			}
			
			int wordCount = Integer.parseInt(br.readLine());
			mWordList = new String[wordCount];
			mFound = new Boolean[wordCount];

			for (int i = 0; i < wordCount; i++) {
				mWordList[i] = br.readLine();
				mFound[i] = false;
			}
		}
		
		public void searchWords() {
			for (int k = 0; k < mWordList.length; k++) {
				if (!mFoundHash.contains(mWordList[k])) {
					char[] word = mWordList[k].toCharArray();
					int position = getMinFreqCharPosition(word);
					char[] partialWord = getPartialWord(word, position);
					char[] reverseWord = getReverseWord(word, position);
					for (int i = 0; i < PLAT_X_COUNT; i++) {
						for (int j = 0; j < PLAT_Y_COUNT; j++) {
							if (searchWord(new Point(j, i), partialWord, partialWord.length) == true) {
								if (position == 0 ||
									searchWord(new Point(j, i), reverseWord, reverseWord.length) == true) {
									mFoundHash.add(mWordList[k]);
									mFound[k] = true;
									break;
								}
							}
						}
						if (mFound[k] == true) break;
					}
				} else {
					mFound[k] = true;
				}
			}
		}

		int getMinFreqCharPosition(char word[]) {
			int freq[] = new int[word.length];

			for (int i = 0; i < word.length; i++) {
				freq[i]++;
				for (int j = i + i; j < word.length; j++) {
					if (word[i] == word[j]) {
						freq[i]++;
						freq[j]++;
					}
				}
			}
			int minPosition = word.length;
			int minFreq = word.length;
			for (int i = 0; i < word.length; i++) {
				if (freq[i] < minFreq) {
					minPosition = i;
					minFreq = freq[i];
				}
			}
			return minPosition == word.length ? 0 : minPosition;
		}

		char[] getReverseWord(char[] word, int position) {
			char result[] = new char[position + 1];
			for (int i = 0; i <= position; i++) {
				result[i] = word[position - i];
			}
			return result;
		}

		char[] getPartialWord(char[] word, int position) {
			char result[] = new char[word.length - position];
			for (int i = position; i < word.length; i++) {
				result[i - position] = word[i];
			}
			return result;
		}

		public boolean searchNextChar(Point point, char[] word, int index, int len) {
			if (index >= len) return false;

			char c = word[index];
			for (int i = point.y - 1; i <= point.y + 1; i++) {
				if(i < 0 || i >= PLAT_X_COUNT) continue;
				for (int j = point.x - 1; j <= point.x + 1; j++) {
					if (j < 0 || j >= PLAT_Y_COUNT) continue;
					if (j == point.x && i == point.y) continue;
					if(mPlate[i][j] == c) {
						if (index == word.length - 1) return true;
						else {
							boolean found = searchNextChar(new Point(j, i), word, index + 1, len);
							if (found == true) return found;
						}
					}
				}
			}
			return false;
		}

		public boolean searchWord(Point point, char[] word, int len) {
			if (word[0] == mPlate[point.y][point.x]) {
				if (len == 1) return true;
				return searchNextChar(point, word, 1, len);
			}
			return false;
		}
		
		public void showResult() {
			for (int i = 0; i < mWordList.length; i++) {
				System.out.println(mWordList[i] + " " + (mFound[i] == true ? "YES" : "NO"));
			}
		}
	}		

	public static void main(String[] args) {
		BufferedReader br = null;
		try {
			br = new BufferedReader(new InputStreamReader(System.in));
			sCaseCount = Integer.parseInt(br.readLine());

			long begin = System.currentTimeMillis();
			for (int i = 0; i < sCaseCount; i++) {
				Case c = new Case();
				c.readCase(br);
				c.searchWords();
				c.showResult();
			}
			if (DEBUG) System.out.println("elapsed time: " + (System.currentTimeMillis() - begin));
		} catch (Exception e) {
			System.out.println("input is not valid: " + e.toString());
			e.printStackTrace();
		} finally {
			if (br != null) {
				try {
					br.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
		}
	}
}
