import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int node = Integer.parseInt(br.readLine());
        boolean[][] cpt = new boolean[node + 1][node + 1];
        HashSet<Integer> hashSet = new HashSet<>();

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st;

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            cpt[a][b] = cpt[b][a] = true;
        }

        test(cpt, 1, hashSet);

        System.out.println(hashSet.size() - 1);
    }

    public static void test(boolean[][] cpt, int n, HashSet<Integer> hashSet) {
        hashSet.add(n);

        for (int i = 1; i < cpt[n].length; i++) {
            if (cpt[n][i] && !hashSet.contains(i)) {
                test(cpt, i, hashSet);
            }
        }
    }
}
