import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static long[] dp = new long[101];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        p();
        int t = Integer.parseInt(br.readLine());
        for(int i = 0; i < t; i++) {
            sb.append(dp[Integer.parseInt(br.readLine())]).append("\n");
        }
        System.out.println(sb);
    }
    static void p() {
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        for(int i = 4; i < 101; i++) {
            dp[i] = dp[i-3] + dp[i-2];
        }
    }
}