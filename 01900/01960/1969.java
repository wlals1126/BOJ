import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        String[] dna = new String[n];

        for (int i = 0; i < n; i++) {
            dna[i] = br.readLine();
        }

        StringBuilder sb = new StringBuilder();
        int sum = 0;

        for (int i = 0; i < m; i++) {
            int[] cnt = new int[26];
            int max = 0;
            char maxChar = ' ';

            for (int j = 0; j < n; j++) {
                cnt[dna[j].charAt(i) - 'A']++;
            }

            for (int k = 0; k < cnt.length; k++) {
                if (cnt[k] > max) {
                    max = cnt[k];
                    maxChar = (char) (k + 'A');
                }
            }

            sb.append(maxChar);
            sum += n - max;
        }

        System.out.println(sb.toString());
        System.out.println(sum);
    }
}
