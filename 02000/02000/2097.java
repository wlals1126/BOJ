public import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n =Integer.parseInt(br.readLine());
        int ans = 1;
        for(;; ans++) {
            long temp = ans * ans;
            if(temp >= n) {
                long t = (ans - 1) * (ans - 1);
                if(n <= 4) {
                    System.out.println(4);
                }
                else if(n <= t + ans -1) {
                    System.out.println((ans - 2) * 4 + 2);
                }
                else
                    System.out.println((ans - 2) * 4 + 4);
                return;
            }
        }
    }
}
