import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int height = 0;
        long cnt = 0, sum;
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        height = y - x;
        if(height < 1) {
            System.out.println("0");
            return;
        }
        while(cnt*cnt < height)
            cnt++;
        cnt = (cnt*cnt == height) ? cnt : cnt - 1;
        sum = 2*cnt-1;
        height -= cnt*cnt;
        while(height > 0) {
            height -= Math.min(cnt, height);
            sum++;
        }
        System.out.println(sum);
    }
}