import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int K = scanner.nextInt();

        int[] coinList = new int[N];
        for (int i = 0; i < N; i++) {
            coinList[i] = scanner.nextInt();
        }

        Arrays.sort(coinList);

        int[] dp = new int[K + 1];
        Arrays.fill(dp, K + 1);
        dp[0] = 0;

        for (int i = 0; i < N; i++) {
            for (int j = coinList[i]; j <= K; j++) {
                dp[j] = Math.min(dp[j], dp[j - coinList[i]] + 1);
            }
        }

        if (dp[K] == K + 1) {
            System.out.println(-1);
        } else {
            System.out.println(dp[K]);
        }
    }
}
