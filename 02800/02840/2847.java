import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        int[] list = new int[n];
        for (int i = 0; i < n; i++) {
            list[i] = Integer.parseInt(br.readLine());
        }

        int result = 0;
        int prev = list[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (prev <= list[i]) {
                result += list[i] - prev + 1;
                list[i] = prev - 1;
            }
            prev = list[i];
        }

        System.out.println(result);
    }
}
