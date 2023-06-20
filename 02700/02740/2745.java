import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        char[] c = sc.next().toCharArray();
        int B = sc.nextInt();
        int N = c.length;
        int res = 0;
        for(int i = 0; i < N; i++){
            double d = Math.pow(B, N-i-1);
            if((c[i]-'0')>=0 && (c[i]-'0')<=9)
                res += (c[i]-'0') * (int)d;
            else
                res += (c[i]-'A'+10) * (int)d;
        }
        System.out.println(res);
    }
}