import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        int[] dp = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        dp[0] = arr[0]; // dp 배열 초기값 설정
        int ans = dp[0]; // 결과값 초기값 설정
        for (int i = 1; i < n; i++) {
            // 이전 값과 현재 값을 더한 것과 현재 값 중 큰 값을 선택
            dp[i] = Math.max(dp[i - 1] + arr[i], arr[i]);
            // 최대값 갱신
            ans = Math.max(ans, dp[i]);
        }
        System.out.println(ans);
    }
}
