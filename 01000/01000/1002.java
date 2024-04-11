import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        int n = Integer.parseInt(br.readLine());

        for(int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int r1 = Integer.parseInt(st.nextToken());

            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());
            int r2 = Integer.parseInt(st.nextToken());

            double d = Math.sqrt(Math.pow(x1-x2, 2) + Math.pow(y1-y2, 2));

            if (d == 0) {
                if (r1 == r2)
                    sb.append("-1\n");
                else
                    sb.append("0\n");
            } else if (d == r1 + r2 || d == Math.abs(r1 - r2))
                sb.append("1\n");
            else if (Math.abs(r1 - r2) < d && d < r1 + r2)
                sb.append("2\n");
            else
                sb.append("0\n");
        }
        System.out.println(sb);
    }
}