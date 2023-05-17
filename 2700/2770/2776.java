import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;
        int t = Integer.parseInt(br.readLine());
        while(t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            int[] note1 = new int[n];
            for(int i = 0; i <n; i++) {
                note1[i] = Integer.parseInt(st.nextToken());
            }
            Arrays.sort(note1);
            int m = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < m; i++) {
                int x = Integer.parseInt(st.nextToken());
                sb.append(binSearch(note1, x) + "\n");
            }
        }
        System.out.println(sb.toString());
    }
    public static int binSearch(int[] arr, int x) {
        int left = 0;
        int right = arr.length - 1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(arr[mid] == x)
                return 1;
            if(arr[mid] > x)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return 0;
    }
}