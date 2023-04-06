import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int arr[];
        int k = Integer.parseInt(br.readLine());
        for(int i = 1; i <= k; i++) {
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            arr = new int[n];
            int gap = 0;
            for(int j = 0; j < n; j++)
                arr[j] = Integer.parseInt(st.nextToken());
            Arrays.sort(arr);
            gap = 0;
            for(int j = 0; j < n-1; j++)
                gap = Math.max(gap, arr[j+1] - arr[j]);
            System.out.println("Class " + i);
            System.out.println("Max " + arr[n-1] + ", Min " + arr[0] + ", Largest gap " + gap);
        }
    }
}