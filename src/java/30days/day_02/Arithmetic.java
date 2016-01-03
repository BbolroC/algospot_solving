import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Arithmetic {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double M = sc.nextDouble();
		int T = sc.nextInt();
		int X = sc.nextInt();

		int total = (int) Math.round(M * (1.0 + (T + X) / 100.0));
		System.out.println("The final price of the meal is $" + total + ".");

	}
}
