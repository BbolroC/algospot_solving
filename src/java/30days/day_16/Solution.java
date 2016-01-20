import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = in.nextInt();
		}
		quickSort(arr, 0, arr.length - 1);
		int minDiff = Integer.MAX_VALUE;
		for (int i = 1; i < n; i++) {
			int tmpDiff = Math.abs(arr[i] - arr[i - 1]);
			if (minDiff > tmpDiff) {
				minDiff = tmpDiff;
			}
		}
		String gap = "";
		for (int i = 1; i < n; i++) {
			if (minDiff == Math.abs(arr[i] - arr[i - 1])) {
				System.out.print(gap + arr[i - 1] + " " + arr[i]);
				gap = " ";
			}
		}
		System.out.println();
	}

	private static void quickSort(int[] arr, int start, int end) {
		if (end - start > 0) {
			int middle = findMiddle(arr, start, end);
			quickSort(arr, start, middle - 1);
			quickSort(arr, middle + 1, end);
		}
	}

	private static int findMiddle(int[] arr, int start, int end) {
		int pivot = arr[start];
		int left = start + 1;
		int right = end;

		while (left <= right) {
			while (left <= right && pivot >= arr[left]) {
				left++;
			}
			while (pivot <= arr[right] && left <= right) {
				right--;
			}
			if (left > right) {
				swap(arr, start, right);
				return right;
			} else {
				swap(arr, left, right);
			}
		}
		return -1;
	}

	private static void swap(int[] arr, int a, int b) {
		if (a != b) {
			arr[a] ^= arr[b];
			arr[b] ^= arr[a];
			arr[a] ^= arr[b];
		}
	}
}

