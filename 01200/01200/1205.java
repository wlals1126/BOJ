import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()); // 리스트 점수
        int score = Integer.parseInt(st.nextToken()); // 새로운 점수
        int p = Integer.parseInt(st.nextToken()); // 최저 점수
        int arr[] = new int[101];
        if(n == 0) {
            System.out.println(1);
            return;
        }
        st = new StringTokenizer(br.readLine());
        int cnt = -1;
        int cnt2 = -1;
        int prev = -1;
        for(int i = 1; cnt == -1 && i <= n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            if(arr[i] < score)
                cnt = cnt2 == score ? prev : i;
            if(cnt2 != arr[i]) {
                cnt2 = arr[i];
                prev = i;
            }
        }
        if(cnt == -1 && n + 1 <= p)
            cnt = score == cnt2 ? prev : n+1;
        System.out.println(cnt <= p ? cnt : -1);
    }
}