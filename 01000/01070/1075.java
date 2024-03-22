import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int F = Integer.parseInt(br.readLine());

        N = N / 100 * 100;

        int result = 0;

        for (int i = 0; i < 101; i++) {
            if (N % F == 0) {
                break;
            } else if ((N + i) % F == 0 && i != 0) {
                result = i;
                break;
            }
        }

        if (result < 10) {
            System.out.printf("0%d", result);
        } else {
            System.out.print(result);
        }
    }
}
