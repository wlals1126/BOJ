public import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            int n = Integer.parseInt(br.readLine());
            if(n == -1)
                break;
            if(n != 1) {
                int sum = 0;
                String res = "";
                for(int i = 1; i < n; i++) {
                    if(n % i == 0)
                        sum += i;
                }
                if(sum == n) {
                    res += n + " = ";
                    for(int i = 1; i < n; i++) {
                       if(i == 1) {
                           res += 1;
                       }
                       else {
                           if(n % i == 0) {
                               res += " + " + i;
                               sum += i;
                           }
                       }
                    }
                }
                else {
                    System.out.print(n + " is NOT perfect.");
                }
                System.out.println(res);
            }
        }
    }
}
