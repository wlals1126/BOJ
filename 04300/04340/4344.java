import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int cnt = Integer.parseInt(br.readLine());

        for (int i = 0; i < cnt; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");

            int students = Integer.parseInt(st.nextToken());
            int[] scores = new int[students];
            float sum = 0;

            for (int j = 0; j < students; j++) {
                scores[j] = Integer.parseInt(st.nextToken());
                sum += scores[j];
            }

            float avg = sum / students;
            int count = 0;

            for (int j = 0; j < students; j++) {
                if (scores[j] > avg) {
                    count++;
                }
            }

            float percentage = (float) count / students * 100;
            System.out.printf("%.3f%%\n", percentage);
        }
    }
}
