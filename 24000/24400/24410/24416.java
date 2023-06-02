import java.io.*;
import java.util.*;

public class Main {
	static int N;
	static int DP[];

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.valueOf(br.readLine());
		DP = new int[N + 1];
		System.out.println(fibo2(N) + " " + (N - 2));

	}

	static int fibo2(int N) {
		DP[1] = DP[2] = 1;
		for (int i = 3; i <= N; i++) {
			DP[i] = DP[i - 1] + DP[i - 2];
		}
		return DP[N];
	}
}