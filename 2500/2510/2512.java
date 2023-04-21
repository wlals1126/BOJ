import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static int arr[];
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        arr = new int[n];
        int ans = 0;
        int right = arr[n - 1];
        int left = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            right = Math.max(right, arr[i]);
        }

        int lim = Integer.parseInt(br.readLine());
        Arrays.sort(arr);

        while(left <= right) {

            int total = 0;
            int mid = (left+right)/2;

            for(int i = 0; i < n; i++) {
                total += Math.min(arr[i], mid);
            }

            if(total <= lim)  {
                ans = mid;
                left = mid + 1;
            }else {
                right = mid - 1;
            }
        }
        System.out.println(ans);
    }
}