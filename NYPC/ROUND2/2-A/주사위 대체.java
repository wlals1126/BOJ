import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        for (int i = 0; i < T; i++) {
            String[] input = br.readLine().split(" ");
            long m = Long.parseLong(input[0]);
            long n = Long.parseLong(input[1]);

            if (isConvertible(m, n)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    public static boolean isConvertible(long m, long n) {
        if (m == n) {
            return true;
        }

        return (m > n) || (n % m == 0);
    }
}
