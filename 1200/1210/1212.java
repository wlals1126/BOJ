import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        String str = st.nextToken();
        int sum = 0;
        int len = str.length();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < str.length(); i++) {
            String s = Integer.toBinaryString(str.charAt(i) - '0');
            if(s.length() == 2 && i != 0)
                s = "0" + s;
            else if(s.length() == 1 && i != 0)
                s = "00" + s;
            sb.append(s);
        }
        System.out.println(sb);
    }
}