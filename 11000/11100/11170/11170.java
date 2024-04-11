import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Baekjoon11170 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();

        while (T-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int M = Integer.parseInt(st.nextToken());
            int cnt = countZeroDigits(N, M);
            sb.append(cnt).append("\n");
        }

        System.out.println(sb);
    }

    private static int countZeroDigits(int N, int M) {
        int cnt = 0;
        for (int i = N; i <= M; i++) {
            int temp = i;

            if (temp == 0) {
                cnt++;
                continue;
            }

            while (temp > 0) {
                if (temp % 10 == 0)
                    cnt++;
                temp /= 10;
            }
        }
        return cnt;
    }
}
