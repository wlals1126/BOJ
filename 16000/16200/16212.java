import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int[] arr = Sort(br.readLine(), n);
        for (int i = 0; i < n; i++) {
            bw.write(Integer.toString(arr[i]));
            bw.write(' ');
        }
        bw.flush();
    }
    private static int[] Sort(String line, int n) {
        StringTokenizer st = new StringTokenizer(line);
        int[] count = new int[4_000_001];
        Arrays.fill(count, 0);
        for (int i = 0; i < n; i++) {
            count[Integer.parseInt(st.nextToken()) + 2_000_000]++;
        }
        int[] arr = new int[n];
        for (int i = 0, j = 0; i < count.length; i++) {
            while (count[i]-- > 0) {
                arr[j++] = i - 2_000_000;
            }
        }
        return arr;
    }
}