import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] arr = new int[5];

        for (int i = 0; i < 5; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int answer = 1;
        int cnt = 0;

        while(true) {
            for (int i = 0; i < 5; i++) {
                if(answer % arr[i] == 0) {
                    cnt++;
                }
            }
            if(cnt >= 3) {
                bw.write(answer + "");
                break;
            }
            cnt = 0;
            answer++;
        }
        bw.flush();
        bw.close();
    }
}