import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Main {
    static int t[];
    static int p[];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        t = new int[n];
        p = new int[n];
        for(int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            t[i] = Integer.parseInt(st.nextToken());
            p[i] = Integer.parseInt(st.nextToken());
        }
        int[] dp = new int[n+1];
        for(int i = 0; i < n; i++) {
            if(i + t[i] <= n)
                dp[i + t[i]] = Math.max(dp[i + t[i]], dp[i] + p[i]);
            dp[i+1] = Math.max(dp[i+1], dp[i]);
        }
        System.out.println(dp[n]);
    }
}