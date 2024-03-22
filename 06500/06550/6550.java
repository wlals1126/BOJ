import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String input;
        while ((input = br.readLine()) != null) {
            StringTokenizer st = new StringTokenizer(input);
            String S = st.nextToken();
            String T = st.nextToken();

            Queue<Character> queue = new LinkedList<>();
            for (char c : S.toCharArray()) {
                queue.add(c);
            }

            boolean isSubsequence = true;
            for (char c : T.toCharArray()) {
                if (c == queue.peek()) {
                    queue.poll();
                    if (queue.isEmpty()) {
                        bw.write("Yes\n");
                        isSubsequence = false;
                        break;
                    }
                }
            }

            if (isSubsequence) {
                bw.write("No\n");
            }
            bw.flush();
        }

        bw.close();
        br.close();
    }
}
