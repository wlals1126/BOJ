import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            StringTokenizer st;
            HashMap<String, Integer> hashMap = new HashMap<>();

            for (int j = 0; j < n; j++) {
                st = new StringTokenizer(br.readLine());
                st.nextToken();
                String type = st.nextToken();

                hashMap.put(type, hashMap.getOrDefault(type, 0) + 1);
            }

            int res = 1;
            for (Integer val : hashMap.values()) {
                res *= val + 1;
            }

            System.out.println(res - 1);
        }

        br.close();
    }
}
