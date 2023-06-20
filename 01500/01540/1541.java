import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split("-");
        int res = Integer.MAX_VALUE;
        for(int i = 0; i < str.length; i++) {
            int tmp = 0;
            String[] plusA = str[i].split("\\+");
            for(String s : plusA) {
                tmp += Integer.parseInt(s);
            }
            if(res == Integer.MAX_VALUE) {
                res = tmp;
            }
            else
                res -= tmp;
        }
        System.out.println(res);
    }
}